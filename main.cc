#ifdef _WIN32
#include <windows.h>
#endif

#include <cassert>
#include <cstdio>
#include <vector>

#include <SDL.h>

#ifdef _WIN32
#include <SDL_image.h>
#else
#include <SDL2/SDL_image.h>
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
static const cpFloat max_rope_length = 40.;

static const cpFloat hand_velocity = 10.;

static const cpFloat hand_stiffness = 50.;
static const cpFloat hand_damping = 5.;

static const cpFloat reel_in_velocity = .5;
static const cpFloat min_rope_length = 5.;

static const cpVect left_shoulder_offset = cpv(-head_radius, head_radius);
static const cpVect right_shoulder_offset = cpv(head_radius, head_radius);

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

static cpBody *leftHookBody;
static cpShape *leftHookShape;
static cpConstraint *leftHookOutJoint;
static cpConstraint *leftGripJoint;
static bool left_hand_out = false;
static cpBody *left_hand_stop;
static cpConstraint *leftHookSpring;

static cpBody *rightHookBody;
static cpShape *rightHookShape;
static cpConstraint *rightHookOutJoint;
static cpConstraint *rightGripJoint;
static bool right_hand_out = false;
static cpBody *right_hand_stop;
static cpConstraint *rightHookSpring;

static float camera_x, camera_y;

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

static void init()
{
	/* Graphics */
	glEnable(GL_TEXTURE_2D);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glEnable(GL_POLYGON_SMOOTH);

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

	/* Physics */
	//cpInitChipmunk();

	space = cpSpaceNew();
	assert(space);

	cpSpaceSetIterations(space, 100);
	//cpSpaceSetCollisionBias(space, 0.001);

	//space->gravity = cpv(0, 700);
	cpSpaceSetGravity(space, cpv(0, 100));

	staticBody = cpSpaceGetStaticBody(space);

#include "level.c"

	{
		cpFloat mass = 1.;
		cpFloat moment = cpMomentForCircle(mass, 0, head_radius, cpvzero);
		//cpFloat moment = 100. * cpMomentForCircle(mass, 0, head_radius, cpvzero);

		// head = head
		headBody = cpSpaceAddBody(space, cpBodyNew(mass, moment));
		cpBodySetPosition(headBody, cpv(160, 80));

		cpShape *headShape = cpSpaceAddShape(space, cpCircleShapeNew(headBody, head_radius, cpvzero));
		cpShapeSetElasticity(headShape, 1.);
		cpShapeSetFriction(headShape, 1.);

		balanceConstraint = cpSpaceAddConstraint(space, cpDampedRotarySpringNew(staticBody, headBody, 0., 1000., 100.));
		cpShapeSetFilter(headShape, cpShapeFilterNew(1, 1 << CP_CATEGORY_PLAYER, CP_ALL_CATEGORIES));
	}

	auto new_ragdoll_part = [](float mass, cpVect pos, float hw, float hh,
		cpBody *parent, cpVect parent_anchor, cpVect anchor, float min_rot, float max_rot,
		unsigned int categories = 0)
	{
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

	torso = new_ragdoll_part(1., cpv(160, 95), 8., 10., headBody, cpv(0, head_radius), cpv(0, -10.), -.3, .3);
	leftUpperLeg = new_ragdoll_part(.5, cpv(160 - 5, 115), 3., 8., torso, cpv(-5, 10), cpv(0, -8), -.5, .5);
	rightUpperLeg = new_ragdoll_part(.5, cpv(160 + 5, 115), 3., 8., torso, cpv(5, 10), cpv(0, -8), -.5, .5);
	leftLowerLeg = new_ragdoll_part(.2, cpv(160 - 5, 123), 2.5, 6., leftUpperLeg, cpv(0, 8), cpv(0, -6), -.5, .5, 1 << CP_CATEGORY_PLAYER);
	rightLowerLeg = new_ragdoll_part(.2, cpv(160 + 5, 123), 2.5, 6., rightUpperLeg, cpv(0, 8), cpv(0, -6), -.5, .5, 1 << CP_CATEGORY_PLAYER);

	{
		cpFloat mass = .1;
		//cpFloat moment = cpMomentForCircle(mass, 0, hand_radius, cpvzero);
		cpFloat moment = INFINITY;

		leftHookBody = cpBodyNew(mass, moment);
		cpBodySetPosition(leftHookBody, cpv(160 - head_radius - hand_radius, 100));

		leftHookShape = cpCircleShapeNew(leftHookBody, hand_radius, cpvzero);
		cpShapeSetElasticity(leftHookShape, 0.);
		cpShapeSetFriction(leftHookShape, 1.);
		cpShapeSetCollisionType(leftHookShape, 1);
		cpShapeSetFilter(leftHookShape, cpShapeFilterNew(1, 1 << CP_CATEGORY_PLAYER, CP_ALL_CATEGORIES));

		rightHookBody = cpBodyNew(mass, moment);
		cpBodySetPosition(rightHookBody, cpv(160 + head_radius + hand_radius, 100));

		rightHookShape = cpCircleShapeNew(rightHookBody, hand_radius, cpvzero);
		cpShapeSetElasticity(rightHookShape, 0.);
		cpShapeSetFriction(rightHookShape, 1.);
		cpShapeSetCollisionType(rightHookShape, 1);
		cpShapeSetFilter(rightHookShape, cpShapeFilterNew(1, 1 << CP_CATEGORY_PLAYER, CP_ALL_CATEGORIES));
	}

	leftHookOutJoint = cpSlideJointNew(headBody, leftHookBody, left_shoulder_offset, cpv(hand_radius, 0), 0., max_rope_length);
	leftGripJoint = cpSlideJointNew(headBody, staticBody, left_shoulder_offset, cpv(0, 0), 0., max_rope_length);

	rightHookOutJoint = cpSlideJointNew(headBody, rightHookBody, right_shoulder_offset, cpv(-hand_radius, 0), 0., max_rope_length);
	rightGripJoint = cpSlideJointNew(headBody, staticBody, right_shoulder_offset, cpv(0, 0), 0., max_rope_length);

	{
		cpCollisionHandler *handler = cpSpaceAddCollisionHandler(space, 0, 1);
		handler->beginFunc = [](cpArbiter *arb, cpSpace *space, void *data) -> unsigned char {
			cpBody *u, *v;
			cpArbiterGetBodies(arb, &u, &v);

			if (u != cpSpaceGetStaticBody(space))
				return true;

			if (v == leftHookBody)
				left_hand_stop = u;
			if (v == rightHookBody)
				right_hand_stop = u;

			return true;
		};
	}
}

static void draw_sphere(cpVect pos, cpVect rot, float radius)
{
	glPushMatrix();

	glTranslatef(pos.x, pos.y, 0);
	glRotatef(360. * atan2(rot.y, rot.x) / 2. / M_PI, 0, 0, 1);

	//glColor4f(0, 0, 0, 1);
	glBegin(GL_LINES);
	unsigned int n = 20;
	//glVertex2f(0, 0);
	//glVertex2f(0, -radius);
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

	// Draw player

	for (auto shape: player_shapes) {
		cpBody *body = cpShapeGetBody(shape);
		drawPolyShapeBody(body, shape);
	}

	glColor3f(0, 0, 0);

	const float arm_length = max_rope_length / 2.;

	glBegin(GL_LINES);

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

	if (left_hand_out) {
		cpVect left_hand_pos = cpBodyGetPosition(leftHookBody);
		cpVect left_shoulder_pos = cpBodyLocalToWorld(headBody, left_shoulder_offset);

		cpVect delta = cpvsub(left_hand_pos, left_shoulder_pos);
		float d2 = cpvlengthsq(delta);
		float x2 = d2 / 4.;

		if (arm_length * arm_length < x2) {
			glVertex2f(left_shoulder_pos.x, left_shoulder_pos.y);
			glVertex2f(left_hand_pos.x, left_hand_pos.y);
		} else {
			float y2 = arm_length * arm_length - x2;
			float x = sqrt(x2);
			float y = sqrt(y2);

			float angle = atan2(delta.y, delta.x);

			cpVect left_elbow_pos = left_shoulder_pos + cpvrotate(cpv(x, -y), cpv(cos(angle), sin(angle)));

			// left upper arm
			glVertex2f(left_shoulder_pos.x, left_shoulder_pos.y);
			glVertex2f(left_elbow_pos.x, left_elbow_pos.y);
			// left lower arm
			glVertex2f(left_elbow_pos.x, left_elbow_pos.y);
			glVertex2f(left_hand_pos.x, left_hand_pos.y);
		}
	}

	if (right_hand_out) {
		cpVect right_hand_pos = cpBodyGetPosition(rightHookBody);
		cpVect right_shoulder_pos = cpBodyLocalToWorld(headBody, right_shoulder_offset);

		cpVect delta = cpvsub(right_hand_pos, right_shoulder_pos);
		float d2 = cpvlengthsq(delta);
		float x2 = d2 / 4.;

		if (arm_length * arm_length < x2) {
			glVertex2f(right_shoulder_pos.x, right_shoulder_pos.y);
			glVertex2f(right_hand_pos.x, right_hand_pos.y);
		} else {
			float y2 = arm_length * arm_length - x2;
			float x = sqrt(x2);
			float y = sqrt(y2);

			float angle = atan2(delta.y, delta.x);

			cpVect right_elbow_pos = right_shoulder_pos + cpvrotate(cpv(x, y), cpv(cos(angle), sin(angle)));

			// right upper arm
			glVertex2f(right_shoulder_pos.x, right_shoulder_pos.y);
			glVertex2f(right_elbow_pos.x, right_elbow_pos.y);
			// right lower arm
			glVertex2f(right_elbow_pos.x, right_elbow_pos.y);
			glVertex2f(right_hand_pos.x, right_hand_pos.y);
		}
	}

	glEnd();

	draw_sphere(head_pos, cpBodyGetRotation(headBody), head_radius);
	//draw_sphere(left_hand_pos, cpBodyGetRotation(leftHookBody), hand_radius);
	//draw_sphere(right_hand_pos, cpBodyGetRotation(rightHookBody), hand_radius);

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

static bool jump = false;
static double v_x = 0;

static void joystick_axis(SDL_JoyAxisEvent &e)
{
	if (e.axis == 0) {
		v_x = e.value / 250.;
	}
}

static void joystick_button_down(SDL_JoyButtonEvent &e)
{
	if (e.button == 1)
		jump = true;
}

static void release_left()
{
	// cut the line
	left_hand_out = false;
	left_hand_stop = NULL;

	cpSpaceRemoveConstraint(space, leftHookOutJoint);

	if (leftHookSpring) {
		cpSpaceRemoveConstraint(space, leftGripJoint);
		cpSpaceRemoveConstraint(space, leftHookSpring);
		cpConstraintFree(leftHookSpring);
		leftHookSpring = NULL;
	}

	if (cpSpaceContainsBody(space, leftHookBody))
		cpSpaceRemoveBody(space, leftHookBody);
	if (cpSpaceContainsShape(space, leftHookShape))
		cpSpaceRemoveShape(space, leftHookShape);
}

static void release_right()
{
	// cut the line
	right_hand_out = false;
	right_hand_stop = NULL;

	cpSpaceRemoveConstraint(space, rightHookOutJoint);

	if (rightHookSpring) {
		cpSpaceRemoveConstraint(space, rightGripJoint);
		cpSpaceRemoveConstraint(space, rightHookSpring);
		cpConstraintFree(rightHookSpring);
		rightHookSpring = NULL;
	}

	if (cpSpaceContainsBody(space, rightHookBody))
		cpSpaceRemoveBody(space, rightHookBody);
	if (cpSpaceContainsShape(space, rightHookShape))
		cpSpaceRemoveShape(space, rightHookShape);
}

static void keyboard(SDL_KeyboardEvent *key)
{
	switch (key->keysym.sym) {
	case SDLK_q:
		if (!left_hand_out) {
			// shoot out left hand
			left_hand_out = true;
			left_hand_stop = NULL;

			cpSpaceAddConstraint(space, leftHookOutJoint);

			cpVect head_pos = cpBodyGetPosition(headBody);

			cpSpaceAddShape(space, leftHookShape);

			//cpBodySetPosition(leftHookBody, cpBodyLocalToWorld(headBody, cpv(-head_radius - hand_radius, 0)));
			cpBodySetPosition(leftHookBody, cpBodyLocalToWorld(headBody, cpv(-head_radius + 2. * hand_radius, 0)));
			cpBodySetVelocity(leftHookBody, cpBodyGetVelocity(headBody));
			cpSpaceAddBody(space, leftHookBody);

			cpBodyApplyImpulseAtWorldPoint(leftHookBody,
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

			cpSpaceAddConstraint(space, rightHookOutJoint);

			cpVect head_pos = cpBodyGetPosition(headBody);

			cpSpaceAddShape(space, rightHookShape);

			//cpBodySetPosition(rightHookBody, cpBodyLocalToWorld(headBody, cpv(head_radius + hand_radius, 0)));
			cpBodySetPosition(rightHookBody, cpBodyLocalToWorld(headBody, cpv(head_radius - 2. * hand_radius, 0)));
			cpBodySetVelocity(rightHookBody, cpBodyGetVelocity(headBody));
			cpSpaceAddBody(space, rightHookBody);

			cpBodyApplyImpulseAtWorldPoint(rightHookBody,
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
			//cpVect target_pos = cpv(425, -1020);
			//cpVect target_pos = cpv(425, -1120);
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
		}
		break;

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

static void keyboard_up(SDL_KeyboardEvent *key)
{
	switch (key->keysym.sym) {

	case SDLK_LEFT:
		break;
	case SDLK_RIGHT:
		break;
	case SDLK_UP:
		break;
	default:
		break;
	}
}

static void update()
{
	const Uint8 *state = SDL_GetKeyboardState(NULL);

	if (left_hand_stop) {
		cpVect pos = cpBodyGetPosition(leftHookBody);
		cpSpaceRemoveBody(space, leftHookBody);

		leftHookSpring = cpSpaceAddConstraint(space, cpDampedSpringNew(headBody, left_hand_stop,
			cpv(-head_radius, 0), cpBodyWorldToLocal(left_hand_stop, pos),
			max_rope_length,
			hand_stiffness, hand_damping));

		cpSlideJointSetAnchorB(leftGripJoint, cpBodyWorldToLocal(staticBody, pos));
		cpSpaceAddConstraint(space, leftGripJoint);

		left_hand_stop = NULL;
	}

	if (right_hand_stop) {
		cpVect pos = cpBodyGetPosition(rightHookBody);
		cpSpaceRemoveBody(space, rightHookBody);

		rightHookSpring = cpSpaceAddConstraint(space, cpDampedSpringNew(headBody, right_hand_stop,
			cpv(head_radius, 0), cpBodyWorldToLocal(right_hand_stop, pos),
			max_rope_length,
			hand_stiffness, hand_damping));

		cpSlideJointSetAnchorB(rightGripJoint, cpBodyWorldToLocal(staticBody, pos));
		cpSpaceAddConstraint(space, rightGripJoint);

		right_hand_stop = NULL;
	}

	if (leftHookSpring) {
		if (state[SDL_SCANCODE_W])
			cpDampedSpringSetRestLength(leftHookSpring, min_rope_length);
		else
			cpDampedSpringSetRestLength(leftHookSpring, max_rope_length);
	}

	if (rightHookSpring) {
		if (state[SDL_SCANCODE_O])
			cpDampedSpringSetRestLength(rightHookSpring, min_rope_length);
		else
			cpDampedSpringSetRestLength(rightHookSpring, max_rope_length);
	}

	cpVect pos = cpBodyGetPosition(headBody);

	if (!finished && pos.y < -1030 && pos.x > 420 && pos.x < 430) {
		// yo, good job, you crossed the finish line
		finished = true;
		finished_time = SDL_GetTicks();

		cpSpaceSetGravity(space, cpv(0, 0));
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
	if (SDL_Init(SDL_INIT_TIMER | SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0)
		exit(1);

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
			case SDL_JOYAXISMOTION:
				joystick_axis(event.jaxis);
				break;
			case SDL_JOYBUTTONDOWN:
				joystick_button_down(event.jbutton);
				break;
			case SDL_KEYDOWN:
				keyboard(&event.key);
				break;
			case SDL_KEYUP:
				keyboard_up(&event.key);
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

	SDL_Quit();
	return 0;
}
