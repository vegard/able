#ifdef _WIN32
#include <windows.h>
#endif

#include <cassert>
#include <cstdio>
#include <vector>

#include <SDL.h>

#ifdef _WIN32
#include <SDL_image.h>
#include <SDL_mixer.h>
#else
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#endif

extern "C" {
#include <GL/gl.h>
#include <GL/glu.h>
}

#ifdef _WIN32
#include <chipmunk/chipmunk.h>
#else
#include <chipmunk.h>
#endif

/* Parameters */

static const cpFloat head_radius = 8;
static const cpFloat hand_radius = 1.;
static const cpFloat max_arm_length = 40.;

static const cpFloat hand_velocity = 10.;

static const cpFloat hand_stiffness = 50.;
static const cpFloat hand_damping = 5.;

static const cpFloat reel_in_velocity = .5;
static const cpFloat min_arm_length = 5.;

static const cpVect left_shoulder_offset = cpv(-head_radius, head_radius);
static const cpVect right_shoulder_offset = cpv(head_radius, head_radius);

static const cpVect torso_size = cpv(16., 20.);
static const cpVect upper_leg_size = cpv(6., 16.);
static const cpVect lower_leg_size = cpv(5., 12.);
static const cpVect upper_arm_size = cpv(max_arm_length / 2. + 1., 2.);
static const cpVect lower_arm_size = cpv(max_arm_length / 2. + 1., 2.);

/* Definitions */

enum collision_categories {
	CP_CATEGORY_LEVEL,
	CP_CATEGORY_PLAYER,
	CP_CATEGORY_RAGDOLL,
	CP_CATEGORY_CAMERA,
};

struct shape_user_data {
	float color[3];
	bool filled;
	const cpVect *verts;
	unsigned int nr_verts;
};

/* Store a (world) center position + rotation (in radians) of each body part.
 * This makes it easy enough to draw in a variety of ways later.
 *
 * NOTE: this is also the on-disk format, so you if you change it you need to
 * rename the struct to _v1 and bump the version number in read_recording()
 * + write_recording().
 *
 * TODO: We should probably not serialize floats like this...
 */
struct player_draw_data {
	float head[3];
	float torso[3];
	float upper_arm[2][3];
	float lower_arm[2][3];
	float upper_leg[2][3];
	float lower_leg[2][3];
};

/* Runtime state */

static bool finished;
static Uint32 finished_time;

static Uint32 timer_start;

static SDL_Window *window;
static SDL_Renderer *renderer;
static SDL_GLContext glcontext;

static cpSpace *space;
static cpBody *staticBody;
static cpBody *headBody;
static cpBody *torso;
static cpBody *leftUpperLeg;
static cpBody *rightUpperLeg;
static cpBody *leftLowerLeg;
static cpBody *rightLowerLeg;

static cpConstraint *balanceConstraint;

static std::vector<cpShape *> player_shapes;

static cpBody *leftHandBody;
static cpShape *leftHandShape;
static cpConstraint *leftHandOutJoint;
static cpConstraint *leftGripJoint;
static bool left_hand_out = false;
static cpBody *left_hand_stop;
static cpConstraint *leftHandSpring;

static cpBody *rightHandBody;
static cpShape *rightHandShape;
static cpConstraint *rightHandOutJoint;
static cpConstraint *rightGripJoint;
static bool right_hand_out = false;
static cpBody *right_hand_stop;
static cpConstraint *rightHandSpring;

static bool head_collision;
static bool head_collision_started;

static float camera_x, camera_y;

static std::vector<struct player_draw_data> recording;
static std::vector<struct player_draw_data> current_recording;

/* Assets */

struct texture {
        SDL_Surface *surface;
        GLuint id;

        texture(const char *filename)
        {
                surface = IMG_Load(filename);
		if (!surface) {
			fprintf(stderr, "IMG_Load(): %s\n", IMG_GetError());
			exit(1);
		}

                glGenTextures(1, &id);
                glBindTexture(GL_TEXTURE_2D, id);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
                glTexImage2D(GL_TEXTURE_2D, 0,
                        surface->format->BytesPerPixel,
                        surface->w, surface->h, 0,
                        GL_RGBA, GL_UNSIGNED_BYTE, surface->pixels);
        }

        void bind()
        {
                glBindTexture(GL_TEXTURE_2D, id);
        }
};

static texture *font_texture;

static Mix_Chunk *dink_sample;
static Mix_Chunk *thu_sample;
static Mix_Chunk *thud_sample;
static Mix_Chunk *thudd_sample;

static const char *pb_filename = "pb.rec";

void read_recording(const char *filename, std::vector<struct player_draw_data> &result)
{
	FILE *fp = fopen(filename, "rb");
	if (!fp)
		return;

	uint32_t version;
	if (fread(&version, sizeof(version), 1, fp) != 1)
		goto out_close;

	result.clear();

	if (version == 1) {
		while (!feof(fp)) {
			struct player_draw_data dd;
			if (fread(&dd, sizeof(dd), 1, fp) != 1)
				goto out_close;

			result.push_back(dd);
		}
	}

out_close:
	fclose(fp);
}

void write_recording(const char *filename, std::vector<struct player_draw_data> &recording)
{
	static const char *tmp_filename = ".tmp.rec";

	FILE *fp = fopen(tmp_filename, "wb");
	if (!fp)
		return;

	uint32_t version = 1;
	if (fwrite(&version, sizeof(version), 1, fp) != 1)
		goto out_close;

	for (struct player_draw_data &dd: recording) {
		if (fwrite(&dd, sizeof(dd), 1, fp) != 1)
			goto out_close;
	}

	fclose(fp);
	rename(tmp_filename, filename);
	return;

out_close:
	fclose(fp);
}

/* Game logic */

static void game_init()
{
	/* Physics */
	space = cpSpaceNew();
	assert(space);

	cpSpaceSetIterations(space, 100);
	cpSpaceSetGravity(space, cpv(0, 100));

	staticBody = cpSpaceGetStaticBody(space);

#include "level.c"

	{
		cpFloat mass = 1.;
		cpFloat moment = cpMomentForCircle(mass, 0, head_radius, cpvzero);

		// head = head
		headBody = cpSpaceAddBody(space, cpBodyNew(mass, moment));
		cpBodySetPosition(headBody, cpv(160, 80));

		cpShape *headShape = cpSpaceAddShape(space, cpCircleShapeNew(headBody, head_radius, cpvzero));
		cpShapeSetElasticity(headShape, 1.);
		cpShapeSetFriction(headShape, 1.);

		balanceConstraint = cpSpaceAddConstraint(space, cpDampedRotarySpringNew(staticBody, headBody, 0., 1000., 100.));
		cpShapeSetCollisionType(headShape, 1);
		cpShapeSetFilter(headShape, cpShapeFilterNew(1, 1 << CP_CATEGORY_PLAYER, CP_ALL_CATEGORIES));
	}

	auto new_ragdoll_part = [](float mass, cpVect pos, cpVect size,
		cpBody *parent, cpVect parent_anchor, cpVect anchor, float min_rot, float max_rot,
		unsigned int categories = 0)
	{
		float hw = size.x / 2.;
		float hh = size.y / 2.;

		cpFloat moment = cpMomentForBox(mass, 2 * hw, 2 * hh);
		cpBody *body = cpSpaceAddBody(space, cpBodyNew(mass, moment));
		cpBodySetPosition(body, pos);

		cpShape *shape = cpBoxShapeNew2(body, cpBBNewForExtents(cpv(0, 0), hw, hh), 0);
		cpShapeSetFilter(shape, cpShapeFilterNew(1, (1 << CP_CATEGORY_RAGDOLL) | categories, (1 << CP_CATEGORY_CAMERA) | (1 << CP_CATEGORY_LEVEL)));

		cpSpaceAddConstraint(space, cpPivotJointNew2(parent, body, parent_anchor, anchor));
		cpSpaceAddConstraint(space, cpRotaryLimitJointNew(parent, body, min_rot, max_rot));

		cpSpaceAddShape(space, shape);

		player_shapes.push_back(shape);
		return body;
	};

	torso = new_ragdoll_part(1., cpv(160, 95), torso_size, headBody, cpv(0, head_radius), cpv(0, -10.), -.3, .3);
	leftUpperLeg = new_ragdoll_part(.5, cpv(160 - 5, 115), upper_leg_size, torso, cpv(-5, 10), cpv(0, -8), -.5, .5);
	rightUpperLeg = new_ragdoll_part(.5, cpv(160 + 5, 115), upper_leg_size, torso, cpv(5, 10), cpv(0, -8), -.5, .5);
	leftLowerLeg = new_ragdoll_part(.2, cpv(160 - 5, 123), lower_leg_size, leftUpperLeg, cpv(0, 8), cpv(0, -6), -.5, .5, 1 << CP_CATEGORY_PLAYER);
	rightLowerLeg = new_ragdoll_part(.2, cpv(160 + 5, 123), lower_leg_size, rightUpperLeg, cpv(0, 8), cpv(0, -6), -.5, .5, 1 << CP_CATEGORY_PLAYER);

	{
		cpFloat mass = .1;
		cpFloat moment = INFINITY;

		leftHandBody = cpBodyNew(mass, moment);
		cpBodySetPosition(leftHandBody, cpv(160 - head_radius - hand_radius, 100));

		leftHandShape = cpCircleShapeNew(leftHandBody, hand_radius, cpvzero);
		cpShapeSetElasticity(leftHandShape, 0.);
		cpShapeSetFriction(leftHandShape, 1.);
		cpShapeSetCollisionType(leftHandShape, 1);
		cpShapeSetFilter(leftHandShape, cpShapeFilterNew(1, 1 << CP_CATEGORY_PLAYER, CP_ALL_CATEGORIES));

		rightHandBody = cpBodyNew(mass, moment);
		cpBodySetPosition(rightHandBody, cpv(160 + head_radius + hand_radius, 100));

		rightHandShape = cpCircleShapeNew(rightHandBody, hand_radius, cpvzero);
		cpShapeSetElasticity(rightHandShape, 0.);
		cpShapeSetFriction(rightHandShape, 1.);
		cpShapeSetCollisionType(rightHandShape, 1);
		cpShapeSetFilter(rightHandShape, cpShapeFilterNew(1, 1 << CP_CATEGORY_PLAYER, CP_ALL_CATEGORIES));
	}

	leftHandOutJoint = cpSlideJointNew(headBody, leftHandBody, left_shoulder_offset, cpv(hand_radius, 0), 0., max_arm_length);
	leftGripJoint = cpSlideJointNew(headBody, staticBody, left_shoulder_offset, cpv(0, 0), 0., max_arm_length);

	rightHandOutJoint = cpSlideJointNew(headBody, rightHandBody, right_shoulder_offset, cpv(-hand_radius, 0), 0., max_arm_length);
	rightGripJoint = cpSlideJointNew(headBody, staticBody, right_shoulder_offset, cpv(0, 0), 0., max_arm_length);

	{
		cpCollisionHandler *handler = cpSpaceAddCollisionHandler(space, 0, 1);

		handler->beginFunc = [](cpArbiter *arb, cpSpace *space, void *data) -> unsigned char {
			cpBody *u, *v;
			cpArbiterGetBodies(arb, &u, &v);

			if (u != cpSpaceGetStaticBody(space))
				return true;

			if (v == headBody) {
				head_collision = true;
				head_collision_started = true;
				return true;
			}

			if (v == leftHandBody)
				left_hand_stop = u;
			if (v == rightHandBody)
				right_hand_stop = u;

			return true;
		};

		handler->separateFunc = [](cpArbiter *arb, cpSpace *space, void *data) {
			cpBody *u, *v;
			cpArbiterGetBodies(arb, &u, &v);

			if (u != cpSpaceGetStaticBody(space))
				return;

			if (v == headBody)
				head_collision = false;
		};
	}
}

static void init()
{
	/* Graphics */
	glEnable(GL_TEXTURE_2D);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glEnable(GL_POLYGON_SMOOTH);
	glLineWidth(2);

	glEnable(GL_MULTISAMPLE);

	glClearColor(0, 0, 0, 0);
	glClearDepth(1.0f);

	glViewport(0, 0, 4 * 320, 4 * 200);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 320, 200, 0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	font_texture = new texture("font.png");

	game_init();
}

static void draw_sphere(cpVect pos, cpVect rot, float radius)
{
	glPushMatrix();

	glTranslatef(pos.x, pos.y, 0);
	glRotatef(360. * atan2(rot.y, rot.x) / 2. / M_PI, 0, 0, 1);

	glBegin(GL_LINES);
	unsigned int n = 20;
	for (unsigned int i = 0; i < n; ++i) {
		float a0 = 1. * i / n * (2. * M_PI);
		float a1 = 1. * (i + 1) / n * (2. * M_PI);
		glVertex2f(radius * cos(a0), radius * sin(a0));
		glVertex2f(radius * cos(a1), radius * sin(a1));
	}
	glEnd();

	glPopMatrix();
}

static void drawPolyShapeBody(cpBody *body, cpShape *shape)
{
	struct shape_user_data *user_data = (struct shape_user_data *) cpShapeGetUserData(shape);

	glPushMatrix();
	cpVect pos = cpBodyGetPosition(body);
	cpVect rot = cpBodyGetRotation(body);
	glTranslatef(pos.x, pos.y, 0);
	glRotatef(360. * atan2(rot.y, rot.x) / 2. / M_PI, 0, 0, 1);

	if (user_data && user_data->verts) {
		int n = user_data->nr_verts;

		glColor3f(user_data->color[0] / 255., user_data->color[1] / 255., user_data->color[2] / 255.);

		if (user_data->filled) {
			if (n == 4)
				glBegin(GL_TRIANGLES);
			else if (n == 5)
				glBegin(GL_QUADS);
			else
				assert(false);

			for (int i = 0; i < n - 1; ++i) {
				cpVect u = user_data->verts[i];
				glVertex2f(u.x, u.y);
			}

			glEnd();
		} else {
			glBegin(GL_LINES);

			for (int i = 0; i < n; ++i) {
				cpVect u = user_data->verts[i];
				cpVect v = user_data->verts[(i + 1) % n];

				glVertex2f(u.x, u.y);
				glVertex2f(v.x, v.y);
			}

			glEnd();
		}
	} else {
		int n = cpPolyShapeGetCount(shape);
		if (n == 4) {
			glColor3f(1, 1, 1);
			glBegin(GL_QUADS);

			for (int i = 0; i < n; ++i) {
				cpVect u = cpPolyShapeGetVert(shape, i);
				glVertex2f(u.x, u.y);
			}

			glEnd();
		}

		glColor3f(0, 0, 0);
		glBegin(GL_LINES);

		for (int i = 0; i < n; ++i) {
			cpVect u = cpPolyShapeGetVert(shape, i);
			cpVect v = cpPolyShapeGetVert(shape, (i + 1) % n);

			glVertex2f(u.x, u.y);
			glVertex2f(v.x, v.y);
		}

		glEnd();
	}

	glPopMatrix();
}

static void save_player_draw_data(struct player_draw_data *dd)
{
	auto get_data = [](cpBody *body, float result[3]) {
		cpVect pos = cpBodyGetPosition(body);
		result[0] = pos.x;
		result[1] = pos.y;

		cpVect rot = cpBodyGetRotation(body);
		result[2] = atan2(rot.y, rot.x);
	};

	get_data(headBody, dd->head);
	get_data(torso, dd->torso);

	auto get_line_data = [](cpVect a, cpVect b, float result[3]) {
		cpVect pos = cpvlerp(a, b, .5);
		result[0] = pos.x;
		result[1] = pos.y;

		cpVect delta = b - a;
		result[2] = atan2(delta.y, delta.x);
	};

	// rendering the single spring as upper arm + lower arm
	//
	// this is a triangle problem where:
	// - the positions of two vertices are known
	//   (hence also the length between them)
	// - the other two sides have known lengths
	// - we want to find the position of the last vertex
	//
	// we can use two circle equations and set them equal to find potentially two solutions
	// see https://mathworld.wolfram.com/Circle-CircleIntersection.html

	const float arm_length2 = max_arm_length * max_arm_length / 4.;

	{
		cpVect left_shoulder_pos = cpBodyLocalToWorld(headBody, left_shoulder_offset);
		cpVect left_hand_pos = left_hand_out ? cpBodyGetPosition(leftHandBody) : left_shoulder_pos;
		cpVect neutral_elbow_pos = cpBodyLocalToWorld(torso, cpv(-torso_size.x / 2., -torso_size.y / 2.) + cpv(0, max_arm_length / 2.));

		cpVect delta = cpvsub(left_hand_pos, left_shoulder_pos);
		float d2 = cpvlengthsq(delta);
		float x2 = d2 / 4.;

		cpVect left_elbow_pos;
		if (arm_length2 < x2) {
			left_elbow_pos = cpvlerp(left_shoulder_pos, left_hand_pos, .5);
		} else {
			float y2 = arm_length2 - x2;
			float x = sqrt(x2);
			float y = sqrt(y2);

			float angle = atan2(delta.y, delta.x);

			left_elbow_pos = left_shoulder_pos + cpvrotate(cpv(x, -y), cpv(cos(angle), sin(angle)));
		}

		if (d2 < 10.)
			left_elbow_pos = cpvlerp(neutral_elbow_pos, left_elbow_pos, d2 / 10.);

		get_line_data(left_shoulder_pos, left_elbow_pos, dd->upper_arm[0]);
		get_line_data(left_elbow_pos, left_hand_pos, dd->lower_arm[0]);
	}

	{
		cpVect right_shoulder_pos = cpBodyLocalToWorld(headBody, right_shoulder_offset);
		cpVect right_hand_pos = right_hand_out ? cpBodyGetPosition(rightHandBody) : right_shoulder_pos;
		cpVect neutral_elbow_pos = cpBodyLocalToWorld(torso, cpv(torso_size.x / 2., -torso_size.y / 2.) + cpv(0, max_arm_length / 2.));

		cpVect delta = cpvsub(right_hand_pos, right_shoulder_pos);
		float d2 = cpvlengthsq(delta);
		float x2 = d2 / 4.;

		cpVect right_elbow_pos;
		if (arm_length2 < x2) {
			right_elbow_pos = cpvlerp(right_shoulder_pos, right_hand_pos, .5);
		} else {
			float y2 = arm_length2 - x2;
			float x = sqrt(x2);
			float y = sqrt(y2);

			float angle = atan2(delta.y, delta.x);

			right_elbow_pos = right_shoulder_pos + cpvrotate(cpv(x, y), cpv(cos(angle), sin(angle)));
		}

		if (d2 < 10.)
			right_elbow_pos = cpvlerp(neutral_elbow_pos, right_elbow_pos, d2 / 10.);

		get_line_data(right_shoulder_pos, right_elbow_pos, dd->upper_arm[1]);
		get_line_data(right_elbow_pos, right_hand_pos, dd->lower_arm[1]);
	}

	get_data(leftUpperLeg, dd->upper_leg[0]);
	get_data(rightUpperLeg, dd->upper_leg[1]);
	get_data(leftLowerLeg, dd->lower_leg[0]);
	get_data(rightLowerLeg, dd->lower_leg[1]);
}

static void draw_player(struct player_draw_data *dd, float alpha)
{
	auto draw_part = [alpha](float v[3], cpVect size) {
		float hw = size.x / 2.;
		float hh = size.y / 2.;

		glPushMatrix();
		glTranslatef(v[0], v[1], 0);
		glRotatef(v[2] * 360. / (2. * M_PI), 0, 0, 1);

		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glVertex2f(-hw, -hh);
		glVertex2f(-hw,  hh);
		glVertex2f( hw,  hh);
		glVertex2f( hw, -hh);
		glEnd();

		glColor4f(0, 0, 0, alpha);
		glBegin(GL_LINES);
		glVertex2f(-hw, -hh);
		glVertex2f(-hw,  hh);
		glVertex2f( hw, -hh);
		glVertex2f( hw,  hh);
		glVertex2f(-hw, -hh);
		glVertex2f( hw, -hh);
		glVertex2f(-hw,  hh);
		glVertex2f( hw,  hh);
		glEnd();

		glPopMatrix();
	};

	//draw_part(dd->head, cpv(2. * head_radius, 2. * head_radius));

	glColor4f(0, 0, 0, alpha);
	draw_sphere(cpv(dd->head[0], dd->head[1]), cpv(0, 1), head_radius);

	draw_part(dd->torso, torso_size);
	draw_part(dd->lower_leg[0], lower_leg_size);
	draw_part(dd->lower_leg[1], lower_leg_size);
	draw_part(dd->upper_leg[0], upper_leg_size);
	draw_part(dd->upper_leg[1], upper_leg_size);
	draw_part(dd->lower_arm[0], lower_arm_size);
	draw_part(dd->lower_arm[1], lower_arm_size);
	draw_part(dd->upper_arm[0], upper_arm_size);
	draw_part(dd->upper_arm[1], upper_arm_size);
}

static void display()
{
	glDisable(GL_TEXTURE_2D);

	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(-camera_x + 320 / 2, -camera_y + 200 / 2, 0);

	cpVect head_pos = cpBodyGetPosition(headBody);

	// Draw level

	cpSpaceBBQuery(space, cpBBNew(head_pos.x - 160, head_pos.y - 100, head_pos.x + 160, head_pos.y + 100), cpShapeFilterNew(0, 1 << CP_CATEGORY_CAMERA, 1 << CP_CATEGORY_LEVEL), [](cpShape *shape, void *data) {
		cpBody *body = cpShapeGetBody(shape);
		if (body != cpSpaceGetStaticBody(space))
			return;

		struct shape_user_data *user_data = (struct shape_user_data *) cpShapeGetUserData(shape);
		if (user_data->filled)
			drawPolyShapeBody(body, shape);

	}, NULL);

	cpSpaceBBQuery(space, cpBBNew(head_pos.x - 160, head_pos.y - 100, head_pos.x + 160, head_pos.y + 100), cpShapeFilterNew(0, 1 << CP_CATEGORY_CAMERA, 1 << CP_CATEGORY_LEVEL), [](cpShape *shape, void *data) {
		cpBody *body = cpShapeGetBody(shape);
		if (body != cpSpaceGetStaticBody(space))
			return;

		struct shape_user_data *user_data = (struct shape_user_data *) cpShapeGetUserData(shape);
		if (!user_data->filled)
			drawPolyShapeBody(body, shape);

	}, NULL);

	// Draw ghost player
	if (recording.size() > 0) {
		unsigned int frame = current_recording.size();
		if (frame >= recording.size())
			frame = recording.size() - 1;

		draw_player(&recording[frame], .1);
	}

	// Draw player
	{
		struct player_draw_data dd;
		save_player_draw_data(&dd);
		current_recording.push_back(dd);

		draw_player(&dd, 1.);
	}

	// draw HUD (timer)

	glEnable(GL_TEXTURE_2D);
	font_texture->bind();

	glLoadIdentity();

	{
		Uint32 timer = (finished ? finished_time : SDL_GetTicks()) - timer_start;

		unsigned int ms = timer % 1000;
		timer /= 1000;
		unsigned int secs = timer % 60;
		timer /= 60;
		unsigned int mins = timer % 60;
		timer /= 60;
		unsigned int hours = timer;

		char timer_buf[16];
		if (hours > 0) {
			snprintf(timer_buf, sizeof(timer_buf), "%u:%02u:%02u.%03u", hours, mins, secs, ms);
		} else if (mins > 0) {
			snprintf(timer_buf, sizeof(timer_buf),      "%u:%02u.%03u",        mins, secs, ms);
		} else {
			snprintf(timer_buf, sizeof(timer_buf),           "%u.%03u",              secs, ms);
		}

		unsigned int n = strlen(timer_buf);

		// font is 48x96 per character

		glColor4f(1, 1, 1, 1);
		glBegin(GL_QUADS);

		for (unsigned int i = n; i > 0; --i) {
			char ch = timer_buf[i - 1];

			if (ch >= '0' && ch <= '9') {
				ch = ch - '0';
			} else if (ch == ':') {
				ch = 10;
			} else if (ch == '.') {
				ch = 11;
			} else if (ch == ' ') {
				continue;
			} else {
				assert(false);
			}

			float x = 320 - 48 / 4 * (n - i);
			float y = 200 - 96 / 4;

			float t0 = ch / 12.;
			float t1 = (ch + 1) / 12.;

			glTexCoord2f(t0, 0);
			glVertex2f(x, y);

			glTexCoord2f(t0, 1);
			glVertex2f(x, y + 96 / 4);

			glTexCoord2f(t1, 1);
			glVertex2f(x + 48 / 4, y + 96 / 4);

			glTexCoord2f(t1, 0);
			glVertex2f(x + 48 / 4, y);
		}

		glEnd();
	}

	SDL_GL_SwapWindow(window);
}

static void release_left()
{
	// withdraw the hand
	left_hand_out = false;
	left_hand_stop = NULL;

	cpSpaceRemoveConstraint(space, leftHandOutJoint);

	if (leftHandSpring) {
		cpSpaceRemoveConstraint(space, leftGripJoint);
		cpSpaceRemoveConstraint(space, leftHandSpring);
		cpConstraintFree(leftHandSpring);
		leftHandSpring = NULL;
	}

	if (cpSpaceContainsBody(space, leftHandBody))
		cpSpaceRemoveBody(space, leftHandBody);
	if (cpSpaceContainsShape(space, leftHandShape))
		cpSpaceRemoveShape(space, leftHandShape);
}

static void release_right()
{
	// withdraw the hand
	right_hand_out = false;
	right_hand_stop = NULL;

	cpSpaceRemoveConstraint(space, rightHandOutJoint);

	if (rightHandSpring) {
		cpSpaceRemoveConstraint(space, rightGripJoint);
		cpSpaceRemoveConstraint(space, rightHandSpring);
		cpConstraintFree(rightHandSpring);
		rightHandSpring = NULL;
	}

	if (cpSpaceContainsBody(space, rightHandBody))
		cpSpaceRemoveBody(space, rightHandBody);
	if (cpSpaceContainsShape(space, rightHandShape))
		cpSpaceRemoveShape(space, rightHandShape);
}

static void keyboard(SDL_KeyboardEvent *key)
{
	if (key->repeat)
		return;

	switch (key->keysym.sym) {
	case SDLK_q:
		if (!left_hand_out) {
			// shoot out left hand
			left_hand_out = true;
			left_hand_stop = NULL;

			cpSpaceAddConstraint(space, leftHandOutJoint);

			cpVect head_pos = cpBodyGetPosition(headBody);

			cpSpaceAddShape(space, leftHandShape);

			//cpBodySetPosition(leftHandBody, cpBodyLocalToWorld(headBody, cpv(-head_radius - hand_radius, 0)));
			cpBodySetPosition(leftHandBody, cpBodyLocalToWorld(headBody, cpv(-head_radius + 2. * hand_radius, 0)));
			cpBodySetVelocity(leftHandBody, cpBodyGetVelocity(headBody));
			cpSpaceAddBody(space, leftHandBody);

			cpBodyApplyImpulseAtWorldPoint(leftHandBody,
				//cpv(-5, 0),
				cpBodyLocalToWorld(headBody, cpv(-hand_velocity, -hand_velocity)) - cpBodyLocalToWorld(headBody, cpv(0, 0)),
				head_pos);
		} else {
			release_left();
		}

		break;

	case SDLK_p:
		if (!right_hand_out) {
			// shoot out right hand
			right_hand_out = true;
			right_hand_stop = NULL;

			cpSpaceAddConstraint(space, rightHandOutJoint);

			cpVect head_pos = cpBodyGetPosition(headBody);

			cpSpaceAddShape(space, rightHandShape);

			//cpBodySetPosition(rightHandBody, cpBodyLocalToWorld(headBody, cpv(head_radius + hand_radius, 0)));
			cpBodySetPosition(rightHandBody, cpBodyLocalToWorld(headBody, cpv(head_radius - 2. * hand_radius, 0)));
			cpBodySetVelocity(rightHandBody, cpBodyGetVelocity(headBody));
			cpSpaceAddBody(space, rightHandBody);

			cpBodyApplyImpulseAtWorldPoint(rightHandBody,
				//cpv(5, 0),
				cpBodyLocalToWorld(headBody, cpv(hand_velocity, -hand_velocity)) - cpBodyLocalToWorld(headBody, cpv(0, 0)),
				head_pos);
		} else {
			release_right();
		}

		break;

	case SDLK_r:
		{
			if (left_hand_out)
				release_left();
			if (right_hand_out)
				release_right();

			//cpVect target_pos = cpv(416, -833);
			//cpVect target_pos = cpv(416, -953);
			//cpVect target_pos = cpv(425, -1020); // before finishing
			//cpVect target_pos = cpv(425, -1120); // after finishing
			cpVect target_pos = cpv(160, 80);
			cpVect body_pos = cpBodyGetPosition(headBody);

			for (auto body: { headBody, torso, leftUpperLeg, rightUpperLeg, leftLowerLeg, rightLowerLeg }) {
				cpBodySetPosition(body, target_pos + cpBodyGetPosition(body) - body_pos);
				cpBodySetVelocity(body, cpv(0, 0));
				cpBodySetAngle(body, 0);
				cpBodySetTorque(body, 0);
			}

			timer_start = SDL_GetTicks();
			finished = false;

			current_recording.clear();

			// TODO: free old game state
			game_init();
		}
		break;

#if 0 // manual save recording
	case SDLK_f:
		if (recording.empty() || current_recording.size() < recording.size()) {
			current_recording.swap(recording);
			current_recording.clear();
		}
		break;
#endif

	case SDLK_UP:
		break;
	case SDLK_ESCAPE:
		{
			SDL_Event event;
			event.type = SDL_QUIT;
			SDL_PushEvent(&event);
		}
		break;
	default:
		break;
	}
}

static void update()
{
	if (head_collision && head_collision_started) {
		static float force;

		force = 0;
		cpBodyEachArbiter(headBody, [](cpBody *body, cpArbiter *arb, void *data) {
			force += cpvlength(cpArbiterTotalImpulse(arb));
		}, NULL);

		if (force > 0) {
			if (force > 200.)
				Mix_PlayChannel(-1, thud_sample, 0);
			if (force > 160.)
				Mix_PlayChannel(-1, thudd_sample, 0);
			if (force > 100.)
				Mix_PlayChannel(-1, thu_sample, 0);
		}

		head_collision_started = false;
	}

	if (left_hand_stop || right_hand_stop)
		Mix_PlayChannel(-1, dink_sample, 0);

	if (left_hand_stop) {
		cpVect pos = cpBodyGetPosition(leftHandBody);
		cpSpaceRemoveBody(space, leftHandBody);

		leftHandSpring = cpSpaceAddConstraint(space, cpDampedSpringNew(headBody, left_hand_stop,
			cpv(-head_radius, 0), cpBodyWorldToLocal(left_hand_stop, pos),
			max_arm_length,
			hand_stiffness, hand_damping));

		cpSlideJointSetAnchorB(leftGripJoint, cpBodyWorldToLocal(staticBody, pos));
		cpSpaceAddConstraint(space, leftGripJoint);

		left_hand_stop = NULL;
	}

	if (right_hand_stop) {
		cpVect pos = cpBodyGetPosition(rightHandBody);
		cpSpaceRemoveBody(space, rightHandBody);

		rightHandSpring = cpSpaceAddConstraint(space, cpDampedSpringNew(headBody, right_hand_stop,
			cpv(head_radius, 0), cpBodyWorldToLocal(right_hand_stop, pos),
			max_arm_length,
			hand_stiffness, hand_damping));

		cpSlideJointSetAnchorB(rightGripJoint, cpBodyWorldToLocal(staticBody, pos));
		cpSpaceAddConstraint(space, rightGripJoint);

		right_hand_stop = NULL;
	}

	const Uint8 *state = SDL_GetKeyboardState(NULL);

	if (leftHandSpring) {
		if (state[SDL_SCANCODE_W])
			cpDampedSpringSetRestLength(leftHandSpring, min_arm_length);
		else
			cpDampedSpringSetRestLength(leftHandSpring, max_arm_length);
	}

	if (rightHandSpring) {
		if (state[SDL_SCANCODE_O])
			cpDampedSpringSetRestLength(rightHandSpring, min_arm_length);
		else
			cpDampedSpringSetRestLength(rightHandSpring, max_arm_length);
	}

	cpVect pos = cpBodyGetPosition(headBody);

	if (!finished && pos.y < -1030 && pos.x > 420 && pos.x < 430) {
		// yo, good job, you crossed the finish line
		finished = true;
		finished_time = SDL_GetTicks();

		// Write out new recording
		write_recording(pb_filename, current_recording);

		if (recording.empty() || current_recording.size() < recording.size()) {
			current_recording.swap(recording);
			current_recording.clear();
		}

		cpSpaceSetGravity(space, cpv(0, 0));
		if (cpSpaceContainsConstraint(space, balanceConstraint))
			cpSpaceRemoveConstraint(space, balanceConstraint);

		// turn off collisions for the player
		for (auto shape: player_shapes)
			cpShapeSetFilter(shape, CP_SHAPE_FILTER_NONE);
	}

	/* Update camera */
	{
		camera_x = .5 * camera_x + .5 * pos.x;
		camera_y = .5 * camera_y + .5 * pos.y;
	}

	/* Finally, update physics */
	cpSpaceStep(space, 1. / 60);

	if (0) {
		static Uint64 prev;
		Uint64 cur = SDL_GetTicks();
		fprintf(stderr, "%lu ms since last update()\n", (unsigned long) cur - prev);
		prev = cur;
	}
}

int main(int argc, char *argv[])
{
	read_recording(pb_filename, recording);

	if (SDL_Init(SDL_INIT_TIMER | SDL_INIT_AUDIO | SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0)
		exit(1);

	Mix_Init(0);
	if (Mix_OpenAudio(44100, AUDIO_S16, 1, 1024) != 0)
		exit(1);

	// max number of concurrent sounds
	Mix_AllocateChannels(4);

	dink_sample = Mix_LoadWAV("dink.wav");
	thu_sample = Mix_LoadWAV("thu.wav");
	thud_sample = Mix_LoadWAV("thud.wav");
	thudd_sample = Mix_LoadWAV("thudd.wav");

	SDL_GL_SetAttribute(SDL_GL_MULTISAMPLEBUFFERS, 1);
	SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, 4);

	window = SDL_CreateWindow("Able", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 4 * 320, 4 * 200, SDL_WINDOW_OPENGL);
	if (!window) {
		fprintf(stderr, "SDL_CreateWindow() failed\n");
		exit(1);
	}

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_ACCELERATED);
	glcontext = SDL_GL_CreateContext(window);
	SDL_GL_SetSwapInterval(1);

	init();

	static const Uint64 performance_frequency = SDL_GetPerformanceFrequency();

	timer_start = SDL_GetTicks();

	Uint64 frame_start = SDL_GetPerformanceCounter();

	bool running = true;
	while (running) {
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
			case SDL_KEYDOWN:
				keyboard(&event.key);
				break;
			case SDL_QUIT:
				running = false;
				break;
			default:
				break;
			}
		}

		Uint64 frame_end = SDL_GetPerformanceCounter();
		Uint64 delta = frame_end - frame_start;
		if (60 * delta >= performance_frequency) {
			update();
			display();

			frame_start = frame_end;
		} else {
			// How long can we sleep? (in ms)
			float can_sleep = /* ms per frame */ 1000.f / 60
				- /* ms since previous frame */ 1000.f * delta / performance_frequency;

			can_sleep = floor(can_sleep);
			if (can_sleep > 0)
				SDL_Delay(can_sleep);
		}
	}

	Mix_CloseAudio();
	SDL_Quit();
	return 0;
}
