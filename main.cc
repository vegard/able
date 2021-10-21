#include <cassert>

extern "C" {
#include <SDL.h>
#include <SDL/SDL_image.h>

#include <GL/gl.h>
#include <GL/glu.h>
}

#include <chipmunk.h>

/* Parameters */

static const cpFloat ball_radius = 8;
static const cpFloat hook_radius = 1.;
static const cpFloat max_rope_length = 40.;

static const cpFloat hook_velocity = 10.;

static const cpFloat hook_stiffness = 30.;
static const cpFloat hook_damping = 5.;

static const cpFloat reel_in_velocity = .5;
static const cpFloat min_rope_length = 5.;

static const cpVect left_shoulder_offset = cpv(-ball_radius, ball_radius);
static const cpVect right_shoulder_offset = cpv(ball_radius, ball_radius);

/* Definitions */

enum collision_categories {
	CP_CATEGORY_LEVEL,
	CP_CATEGORY_PLAYER,
	CP_CATEGORY_RAGDOLL,
	CP_CATEGORY_CAMERA,
};

/* Runtime state */

static SDL_Surface *surface;

static cpSpace *space;
static cpBody *staticBody;
static cpBody *ballBody;
static cpBody *torsoBody;

static cpBody *leftHookBody;
static cpShape *leftHookShape;
static cpConstraint *leftHookOutJoint;
static cpConstraint *leftGripJoint;
static bool left_hook_out = false;
static cpBody *left_hook_stop;
static cpConstraint *leftHookSpring;

static cpBody *rightHookBody;
static cpShape *rightHookShape;
static cpConstraint *rightHookOutJoint;
static cpConstraint *rightGripJoint;
static bool right_hook_out = false;
static cpBody *right_hook_stop;
static cpConstraint *rightHookSpring;

static float camera_x, camera_y;

static void init()
{
	/* Graphics */
	glEnable(GL_TEXTURE_2D);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glClearColor(0, 0, 0, 0);
	glClearDepth(1.0f);

	glViewport(0, 0, 4 * 320, 4 * 200);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 320, 200, 0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	/* Physics */
	//cpInitChipmunk();

	space = cpSpaceNew();
	assert(space);

	cpSpaceSetIterations(space, 100);
	//cpSpaceSetCollisionBias(space, 0.001);

	//space->gravity = cpv(0, 700);
	cpSpaceSetGravity(space, cpv(0, 100));

	staticBody = cpSpaceGetStaticBody(space);

	float left_wall = 320 / 2 - 20;
	float right_wall = 320 / 2 + 40;

#include "level.c"

	{
		cpFloat mass = 1.;
		cpFloat moment = cpMomentForCircle(mass, 0, ball_radius, cpvzero);
		//cpFloat moment = 100. * cpMomentForCircle(mass, 0, ball_radius, cpvzero);

		// ball = head
		ballBody = cpSpaceAddBody(space, cpBodyNew(mass, moment));
		cpBodySetPosition(ballBody, cpv(160, 80));

		cpShape *ballShape = cpSpaceAddShape(space, cpCircleShapeNew(ballBody, ball_radius, cpvzero));
		cpShapeSetElasticity(ballShape, 1.);
		cpShapeSetFriction(ballShape, 1.);

		cpSpaceAddConstraint(space, cpDampedRotarySpringNew(staticBody, ballBody, 0., 1000., 100.));
		cpShapeSetFilter(ballShape, cpShapeFilterNew(1, CP_ALL_CATEGORIES, CP_ALL_CATEGORIES));
	}

	{
		torsoBody = cpSpaceAddBody(space, cpBodyNew(1., 1.));
		cpBodySetPosition(torsoBody, cpv(160, 95));

		cpShape *torsoShape = cpBoxShapeNew2(torsoBody, cpBBNewForExtents(cpv(0, 0), 4., 10.), 0);
		cpShapeSetFilter(torsoShape, cpShapeFilterNew(1, 1 << CP_CATEGORY_RAGDOLL, 1 << CP_CATEGORY_CAMERA));

		cpSpaceAddConstraint(space, cpPivotJointNew2(ballBody, torsoBody, cpv(0, ball_radius), cpv(0, -10.)));
		cpSpaceAddConstraint(space, cpRotaryLimitJointNew(ballBody, torsoBody, -.3, .3));

		cpSpaceAddShape(space, torsoShape);
	}

	{
		cpFloat mass = .1;
		//cpFloat moment = cpMomentForCircle(mass, 0, hook_radius, cpvzero);
		cpFloat moment = INFINITY;

		leftHookBody = cpBodyNew(mass, moment);
		cpBodySetPosition(leftHookBody, cpv(160 - ball_radius - hook_radius, 100));

		leftHookShape = cpCircleShapeNew(leftHookBody, hook_radius, cpvzero);
		cpShapeSetElasticity(leftHookShape, 0.);
		cpShapeSetFriction(leftHookShape, 1.);
		cpShapeSetCollisionType(leftHookShape, 1);
		cpShapeSetFilter(leftHookShape, cpShapeFilterNew(1, CP_ALL_CATEGORIES, CP_ALL_CATEGORIES));

		rightHookBody = cpBodyNew(mass, moment);
		cpBodySetPosition(rightHookBody, cpv(160 + ball_radius + hook_radius, 100));

		rightHookShape = cpCircleShapeNew(rightHookBody, hook_radius, cpvzero);
		cpShapeSetElasticity(rightHookShape, 0.);
		cpShapeSetFriction(rightHookShape, 1.);
		cpShapeSetCollisionType(rightHookShape, 1);
		cpShapeSetFilter(rightHookShape, cpShapeFilterNew(1, CP_ALL_CATEGORIES, CP_ALL_CATEGORIES));
	}

	leftHookOutJoint = cpSlideJointNew(ballBody, leftHookBody, left_shoulder_offset, cpv(hook_radius, 0), 0., max_rope_length);
	leftGripJoint = cpSlideJointNew(ballBody, staticBody, left_shoulder_offset, cpv(0, 0), 0., max_rope_length);

	rightHookOutJoint = cpSlideJointNew(ballBody, rightHookBody, right_shoulder_offset, cpv(-hook_radius, 0), 0., max_rope_length);
	rightGripJoint = cpSlideJointNew(ballBody, staticBody, right_shoulder_offset, cpv(0, 0), 0., max_rope_length);

	{
		cpCollisionHandler *handler = cpSpaceAddCollisionHandler(space, 0, 1);
		handler->beginFunc = [](cpArbiter *arb, cpSpace *space, void *data) -> unsigned char {
			cpBody *u, *v;
			cpArbiterGetBodies(arb, &u, &v);

			if (u != cpSpaceGetStaticBody(space))
				return true;

			if (v == leftHookBody)
				left_hook_stop = u;
			if (v == rightHookBody)
				right_hook_stop = u;

			return true;
		};
	}
}

static double frame = 0;

static void draw_sphere(cpVect pos, cpVect rot, float radius)
{
	glPushMatrix();

	glTranslatef(pos.x, pos.y, 0);
	glRotatef(360. * atan2(rot.y, rot.x) / 2. / M_PI, 0, 0, 1);

	glColor4f(0, 0, 0, 1);
	glBegin(GL_LINES);
	unsigned int n = 20;
	glVertex2f(0, 0);
	glVertex2f(0, -radius);
	for (unsigned int i = 0; i < n; ++i) {
		float a0 = 1. * i / n * (2. * M_PI);
		float a1 = 1. * (i + 1) / n * (2. * M_PI);
		glVertex2f(radius * cos(a0), radius * sin(a0));
		glVertex2f(radius * cos(a1), radius * sin(a1));
	}
	glEnd();

	glPopMatrix();
}

static void display()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(-camera_x + 320 / 2, -camera_y + 200 / 2, 0);

	cpVect ball_pos = cpBodyGetPosition(ballBody);

	draw_sphere(ball_pos, cpBodyGetRotation(ballBody), ball_radius);
	//draw_sphere(left_hook_pos, cpBodyGetRotation(leftHookBody), hook_radius);
	//draw_sphere(right_hook_pos, cpBodyGetRotation(rightHookBody), hook_radius);

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

	if (left_hook_out) {
		cpVect left_hook_pos = cpBodyGetPosition(leftHookBody);
		cpVect left_shoulder_pos = cpBodyLocalToWorld(ballBody, left_shoulder_offset);

		cpVect delta = cpvsub(left_hook_pos, left_shoulder_pos);
		float d2 = cpvlengthsq(delta);
		float x2 = d2 / 4.;

		if (arm_length * arm_length < x2) {
			glVertex2f(left_shoulder_pos.x, left_shoulder_pos.y);
			glVertex2f(left_hook_pos.x, left_hook_pos.y);
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
			glVertex2f(left_hook_pos.x, left_hook_pos.y);
		}
	}

	if (right_hook_out) {
		cpVect right_hook_pos = cpBodyGetPosition(rightHookBody);
		cpVect right_shoulder_pos = cpBodyLocalToWorld(ballBody, right_shoulder_offset);

		cpVect delta = cpvsub(right_hook_pos, right_shoulder_pos);
		float d2 = cpvlengthsq(delta);
		float x2 = d2 / 4.;

		if (arm_length * arm_length < x2) {
			glVertex2f(right_shoulder_pos.x, right_shoulder_pos.y);
			glVertex2f(right_hook_pos.x, right_hook_pos.y);
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
			glVertex2f(right_hook_pos.x, right_hook_pos.y);
		}
	}

	glEnd();

	cpSpaceBBQuery(space, cpBBNew(ball_pos.x - 160, ball_pos.y - 100, ball_pos.x + 160, ball_pos.y + 100), CP_SHAPE_FILTER_ALL, [](cpShape *shape, void *data) {
		cpBody *body = cpShapeGetBody(shape);
		if (body != cpSpaceGetStaticBody(space) && body != torsoBody)
			return;

		glPushMatrix();
		cpVect pos = cpBodyGetPosition(body);
		cpVect rot = cpBodyGetRotation(body);
		glTranslatef(pos.x, pos.y, 0);
		glRotatef(360. * atan2(rot.y, rot.x) / 2. / M_PI, 0, 0, 1);

		glBegin(GL_LINES);

		int n = cpPolyShapeGetCount(shape);
		for (int i = 0; i < n; ++i) {
			cpVect u = cpPolyShapeGetVert(shape, i);
			cpVect v = cpPolyShapeGetVert(shape, (i + 1) % n);

			glVertex2f(u.x, u.y);
			glVertex2f(v.x, v.y);
		}
		glEnd();

		glPopMatrix();
	}, NULL);

	glColor3f(1, 0, 0);

	cpSpaceBBQuery(space, cpBBNew(ball_pos.x - 160, ball_pos.y - 100, ball_pos.x + 160, ball_pos.y + 100), cpShapeFilterNew(1, 1 << CP_CATEGORY_CAMERA, 1 << CP_CATEGORY_RAGDOLL), [](cpShape *shape, void *data) {
		cpBody *body = cpShapeGetBody(shape);
		if (body != torsoBody)
			return;

		glPushMatrix();
		cpVect pos = cpBodyGetPosition(body);
		cpVect rot = cpBodyGetRotation(body);
		glTranslatef(pos.x, pos.y, 0);
		glRotatef(360. * atan2(rot.y, rot.x) / 2. / M_PI, 0, 0, 1);

		glBegin(GL_LINES);

		int n = cpPolyShapeGetCount(shape);
		for (int i = 0; i < n; ++i) {
			cpVect u = cpPolyShapeGetVert(shape, i);
			cpVect v = cpPolyShapeGetVert(shape, (i + 1) % n);

			glVertex2f(u.x, u.y);
			glVertex2f(v.x, v.y);
		}
		glEnd();

		glPopMatrix();
	}, NULL);

	SDL_GL_SwapBuffers();
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

static void keyboard(SDL_KeyboardEvent *key)
{
	switch (key->keysym.sym) {
	case SDLK_q:
		if (!left_hook_out) {
			// shoot out left hook
			left_hook_out = true;
			left_hook_stop = NULL;

			cpSpaceAddConstraint(space, leftHookOutJoint);

			cpVect ball_pos = cpBodyGetPosition(ballBody);

			cpSpaceAddShape(space, leftHookShape);

			//cpBodySetPosition(leftHookBody, cpBodyLocalToWorld(ballBody, cpv(-ball_radius - hook_radius, 0)));
			cpBodySetPosition(leftHookBody, cpBodyLocalToWorld(ballBody, cpv(-ball_radius + 2. * hook_radius, 0)));
			cpBodySetVelocity(leftHookBody, cpBodyGetVelocity(ballBody));
			cpSpaceAddBody(space, leftHookBody);

			cpBodyApplyImpulseAtWorldPoint(leftHookBody,
				//cpv(-5, 0),
				cpBodyLocalToWorld(ballBody, cpv(-hook_velocity, -hook_velocity)) - cpBodyLocalToWorld(ballBody, cpv(0, 0)),
				ball_pos);
		} else {
			// cut the line
			left_hook_out = false;
			left_hook_stop = NULL;

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

		break;

	case SDLK_p:
		if (!right_hook_out) {
			// shoot out right hook
			right_hook_out = true;
			right_hook_stop = NULL;

			cpSpaceAddConstraint(space, rightHookOutJoint);

			cpVect ball_pos = cpBodyGetPosition(ballBody);

			cpSpaceAddShape(space, rightHookShape);

			//cpBodySetPosition(rightHookBody, cpBodyLocalToWorld(ballBody, cpv(ball_radius + hook_radius, 0)));
			cpBodySetPosition(rightHookBody, cpBodyLocalToWorld(ballBody, cpv(ball_radius - 2. * hook_radius, 0)));
			cpBodySetVelocity(rightHookBody, cpBodyGetVelocity(ballBody));
			cpSpaceAddBody(space, rightHookBody);

			cpBodyApplyImpulseAtWorldPoint(rightHookBody,
				//cpv(5, 0),
				cpBodyLocalToWorld(ballBody, cpv(hook_velocity, -hook_velocity)) - cpBodyLocalToWorld(ballBody, cpv(0, 0)),
				ball_pos);
		} else {
			// cut the line
			right_hook_out = false;
			right_hook_stop = NULL;

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
	const Uint8 *state = SDL_GetKeyState(NULL);

	if (left_hook_stop) {
		cpVect pos = cpBodyGetPosition(leftHookBody);
		cpSpaceRemoveBody(space, leftHookBody);

		leftHookSpring = cpSpaceAddConstraint(space, cpDampedSpringNew(ballBody, left_hook_stop,
			cpv(-ball_radius, 0), cpBodyWorldToLocal(left_hook_stop, pos),
			max_rope_length,
			hook_stiffness, hook_damping));

		cpSlideJointSetAnchorB(leftGripJoint, cpBodyWorldToLocal(staticBody, pos));
		cpSpaceAddConstraint(space, leftGripJoint);

		left_hook_stop = NULL;
	}

	if (right_hook_stop) {
		cpVect pos = cpBodyGetPosition(rightHookBody);
		cpSpaceRemoveBody(space, rightHookBody);

		rightHookSpring = cpSpaceAddConstraint(space, cpDampedSpringNew(ballBody, right_hook_stop,
			cpv(ball_radius, 0), cpBodyWorldToLocal(right_hook_stop, pos),
			max_rope_length,
			hook_stiffness, hook_damping));

		cpSlideJointSetAnchorB(rightGripJoint, cpBodyWorldToLocal(staticBody, pos));
		cpSpaceAddConstraint(space, rightGripJoint);

		right_hook_stop = NULL;
	}

	if (leftHookSpring) {
		if (state[SDLK_w])
			cpDampedSpringSetRestLength(leftHookSpring, min_rope_length);
		else
			cpDampedSpringSetRestLength(leftHookSpring, max_rope_length);
	}

	if (rightHookSpring) {
		if (state[SDLK_o])
			cpDampedSpringSetRestLength(rightHookSpring, min_rope_length);
		else
			cpDampedSpringSetRestLength(rightHookSpring, max_rope_length);
	}

	/* Update camera */
	{
		cpVect pos = cpBodyGetPosition(ballBody);
		camera_x = .5 * camera_x + .5 * pos.x;
		camera_y = .5 * camera_y + .5 * pos.y;
	}
}

int main(int argc, char *argv[])
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
		exit(1);

	surface = SDL_SetVideoMode(4 * 320, 4 * 200, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_OPENGL);
	if (!surface)
		exit(1);

	SDL_JoystickEventState(SDL_ENABLE);
	SDL_Joystick *input = SDL_JoystickOpen(0);

	init();

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

		update();

		cpSpaceStep(space, 1. / 60);
		//cpBodyResetForces(ballBody);

		display();

		SDL_Delay(10);
	}

	SDL_Quit();
	return 0;
}
