{
static const cpVect verts[5] = {
	cpv(448.264430, -321.229040),
	cpv(450.509500, -302.145990),
	cpv(440.687350, -292.604480),
	cpv(437.319730, -331.612480),
	cpv(448.264430, -321.229040),
};
static shape_user_data user_data = {
	.color = { 179, 179, 179 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(64.558333, 80.408330),
	cpv(61.118749, 135.706250),
	cpv(83.608332, 135.970830),
	cpv(75.406249, 83.847920),
	cpv(64.558333, 80.408330),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(221.191660, -2.141665),
	cpv(221.191660, 21.670830),
	cpv(308.504160, 21.141670),
	cpv(306.916660, -9.549998),
	cpv(221.191660, -2.141665),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(225.954160, -73.579164),
	cpv(225.954160, -45.533331),
	cpv(303.741660, -48.179164),
	cpv(303.741660, -74.637497),
	cpv(225.954160, -73.579164),
};
static shape_user_data user_data = {
	.color = { 230, 230, 230 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(224.895830, -134.433329),
	cpv(224.366660, -116.441663),
	cpv(303.212500, -113.795830),
	cpv(305.329160, -136.020829),
	cpv(224.895830, -134.433329),
};
static shape_user_data user_data = {
	.color = { 236, 236, 236 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(215.900000, 62.945830),
	cpv(216.429160, 87.816670),
	cpv(303.741660, 91.520830),
	cpv(303.741660, 69.825000),
	cpv(215.900000, 62.945830),
};
static shape_user_data user_data = {
	.color = { 179, 179, 179 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(214.312500, 134.912500),
	cpv(211.137500, 159.254170),
	cpv(311.150000, 165.075000),
	cpv(311.150000, 138.087500),
	cpv(214.312500, 134.912500),
};
static shape_user_data user_data = {
	.color = { 153, 153, 153 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(574.736380, -906.068210),
	cpv(546.298910, -1281.742200),
	cpv(707.943530, -1286.232400),
	cpv(745.361240, -1037.778610),
	cpv(574.736380, -906.068210),
};
static shape_user_data user_data = {
	.color = { 77, 77, 77 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(287.368190, -843.954770),
	cpv(299.341850, -1263.781700),
	cpv(151.167640, -1263.033400),
	cpv(124.975230, -1013.831280),
	cpv(287.368190, -843.954770),
};
static shape_user_data user_data = {
	.color = { 77, 77, 77 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(435.542420, -1046.758880),
	cpv(436.664940, -1028.424190),
	cpv(478.572800, -1030.295080),
	cpv(482.314590, -1041.520400),
	cpv(435.542420, -1046.758880),
};
static shape_user_data user_data = {
	.color = { 128, 128, 128 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(414.214300, -1028.050010),
	cpv(413.091780, -1046.384710),
	cpv(360.706960, -1040.023680),
	cpv(365.571270, -1027.301660),
	cpv(414.214300, -1028.050010),
};
static shape_user_data user_data = {
	.color = { 153, 153, 153 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(345.894840, -868.888450),
	cpv(365.571240, -835.348680),
	cpv(361.829480, -806.162850),
	cpv(336.948960, -795.912880),
	cpv(345.894840, -868.888450),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(352.475050, -938.995810),
	cpv(374.925680, -945.356820),
	cpv(377.170750, -969.678350),
	cpv(359.210230, -976.039350),
	cpv(352.475050, -938.995810),
};
static shape_user_data user_data = {
	.color = { 179, 179, 179 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[4] = {
	cpv(324.037560, -724.218020),
	cpv(343.494780, -728.333960),
	cpv(327.405180, -751.158790),
	cpv(324.037560, -724.218020),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 4,
};
cpShape *level = cpPolyShapeNew(staticBody, 4, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(505.887750, -799.053480),
	cpv(574.736380, -806.911210),
	cpv(571.742960, -819.633220),
	cpv(500.275090, -803.917800),
	cpv(505.887750, -799.053480),
};
static shape_user_data user_data = {
	.color = { 230, 230, 230 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(345.739850, -902.326430),
	cpv(392.137830, -1032.540140),
	cpv(257.434000, -1086.421680),
	cpv(287.368190, -843.954770),
	cpv(345.739850, -902.326430),
};
static shape_user_data user_data = {
	.color = { 102, 102, 102 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(597.187020, -878.379060),
	cpv(555.279160, -867.902090),
	cpv(460.986480, -1034.036850),
	cpv(577.729800, -1104.382200),
	cpv(597.187020, -878.379060),
};
static shape_user_data user_data = {
	.color = { 77, 77, 77 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(647.699990, -656.191660),
	cpv(599.016660, -641.375000),
	cpv(532.341660, -910.191660),
	cpv(601.133330, -935.591660),
	cpv(647.699990, -656.191660),
};
static shape_user_data user_data = {
	.color = { 128, 128, 128 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(277.283330, -643.491660),
	cpv(257.175000, -909.133330),
	cpv(355.600000, -930.299990),
	cpv(317.500000, -628.675000),
	cpv(277.283330, -643.491660),
};
static shape_user_data user_data = {
	.color = { 128, 128, 128 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(579.966660, -548.241660),
	cpv(587.374990, -703.816660),
	cpv(724.958320, -665.716660),
	cpv(634.999990, -478.391660),
	cpv(579.966660, -548.241660),
};
static shape_user_data user_data = {
	.color = { 153, 153, 153 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(349.250000, -537.658330),
	cpv(323.850000, -688.999990),
	cpv(245.004160, -685.824990),
	cpv(302.683330, -504.320830),
	cpv(349.250000, -537.658330),
};
static shape_user_data user_data = {
	.color = { 153, 153, 153 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(541.866660, -285.775000),
	cpv(510.116660, -480.508330),
	cpv(586.316660, -576.816660),
	cpv(650.874990, -571.525000),
	cpv(541.866660, -285.775000),
};
static shape_user_data user_data = {
	.color = { 128, 128, 128 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(428.624990, -486.858330),
	cpv(341.841660, -566.233330),
	cpv(303.741660, -542.950000),
	cpv(412.145050, -285.185110),
	cpv(428.624990, -486.858330),
};
static shape_user_data user_data = {
	.color = { 153, 153, 153 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(496.811690, -303.176780),
	cpv(488.949990, -486.858330),
	cpv(536.574990, -500.616660),
	cpv(541.866660, -285.775000),
	cpv(496.811690, -303.176780),
};
static shape_user_data user_data = {
	.color = { 102, 102, 102 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(413.808330, -259.316660),
	cpv(447.355270, -269.734640),
	cpv(450.849990, -487.916660),
	cpv(392.641660, -502.733330),
	cpv(413.808330, -259.316660),
};
static shape_user_data user_data = {
	.color = { 102, 102, 102 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(782.108320, -274.133320),
	cpv(786.045520, 16.792960),
	cpv(847.724990, 19.483510),
	cpv(848.783320, -275.191670),
	cpv(782.108320, -274.133320),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(496.811710, -303.176770),
	cpv(872.066650, -294.241660),
	cpv(878.416650, -259.316660),
	cpv(490.008330, -261.433330),
	cpv(496.811710, -303.176770),
};
static shape_user_data user_data = {
	.color = { 153, 153, 153 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(412.145050, -285.185110),
	cpv(397.911100, -61.153217),
	cpv(457.843460, -58.256252),
	cpv(447.355290, -269.734630),
	cpv(412.145050, -285.185110),
};
static shape_user_data user_data = {
	.color = { 179, 179, 179 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(453.484580, 1.457515),
	cpv(857.250000, 17.966670),
	cpv(868.891650, 94.166670),
	cpv(429.683330, 74.058330),
	cpv(453.484580, 1.457515),
};
static shape_user_data user_data = {
	.color = { 153, 153, 153 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(410.025440, 314.510350),
	cpv(393.619360, 23.610930),
	cpv(453.484590, 1.457515),
	cpv(441.796960, 315.517960),
	cpv(410.025440, 314.510350),
};
static shape_user_data user_data = {
	.color = { 153, 153, 153 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(67.726096, -131.521119),
	cpv(112.253200, -43.963621),
	cpv(111.879020, -118.424911),
	cpv(87.931674, -136.759602),
	cpv(67.726096, -131.521119),
};
static shape_user_data user_data = {
	.color = { 128, 128, 128 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(117.598590, 197.861840),
	cpv(136.307450, 195.723690),
	cpv(121.340360, -168.831945),
	cpv(103.700580, -122.327052),
	cpv(117.598590, 197.861840),
};
static shape_user_data user_data = {
	.color = { 128, 128, 128 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(300.136810, -163.369531),
	cpv(296.214300, 351.869850),
	cpv(346.295930, 351.869850),
	cpv(340.254160, -150.043746),
	cpv(300.136810, -163.369531),
};
static shape_user_data user_data = {
	.color = { 153, 153, 153 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(236.711850, -191.196513),
	cpv(333.783560, -181.370947),
	cpv(340.254160, -150.043746),
	cpv(228.864580, -152.160413),
	cpv(236.711850, -191.196513),
};
static shape_user_data user_data = {
	.color = { 179, 179, 179 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(174.785500, 197.119930),
	cpv(191.890750, -148.726850),
	cpv(236.711850, -191.196513),
	cpv(216.292450, 198.322630),
	cpv(174.785500, 197.119930),
};
static shape_user_data user_data = {
	.color = { 128, 128, 128 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(-22.262244, 194.671250),
	cpv(-20.617858, 246.736850),
	cpv(338.441250, 243.043120),
	cpv(334.304340, 194.671250),
	cpv(-22.262244, 194.671250),
};
static shape_user_data user_data = {
	.color = { 153, 153, 153 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(153.947250, -221.216770),
	cpv(94.613411, -93.996477),
	cpv(10.690781, -200.904290),
	cpv(101.027880, -268.790730),
	cpv(153.947250, -221.216770),
};
static shape_user_data user_data = {
	.color = { 128, 128, 128 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(200.645520, 309.433380),
	cpv(202.289910, 361.498980),
	cpv(561.349020, 357.805250),
	cpv(557.212130, 309.433380),
	cpv(200.645520, 309.433380),
};
static shape_user_data user_data = {
	.color = { 153, 153, 153 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(283.626420, -242.277610),
	cpv(450.509500, -227.310520),
	cpv(450.509500, -302.145990),
	cpv(270.156040, -299.900920),
	cpv(283.626420, -242.277610),
};
static shape_user_data user_data = {
	.color = { 179, 179, 179 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(101.027880, -268.790730),
	cpv(112.253200, -200.520170),
	cpv(304.678920, -243.943760),
	cpv(270.156040, -299.900920),
	cpv(101.027880, -268.790730),
};
static shape_user_data user_data = {
	.color = { 128, 128, 128 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(731.291970, -38.106783),
	cpv(732.353030, -209.590570),
	cpv(741.902550, -209.590570),
	cpv(744.024660, -38.923372),
	cpv(731.291970, -38.106783),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(473.456290, -561.693420),
	cpv(459.494330, -555.030240),
	cpv(468.640580, -538.128040),
	cpv(482.004610, -551.427850),
	cpv(473.456290, -561.693420),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[4] = {
	cpv(406.730750, -579.037200),
	cpv(423.568750, -572.302020),
	cpv(424.317100, -592.507590),
	cpv(406.730750, -579.037200),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 4,
};
cpShape *level = cpPolyShapeNew(staticBody, 4, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(506.261920, -599.991130),
	cpv(517.861440, -586.146570),
	cpv(527.964210, -604.855440),
	cpv(512.622960, -606.352170),
	cpv(506.261920, -599.991130),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(540.312070, -671.459020),
	cpv(541.060420, -650.130900),
	cpv(552.285740, -660.982050),
	cpv(552.285740, -681.935960),
	cpv(540.312070, -671.459020),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(434.419870, -662.104570),
	cpv(436.290770, -640.402280),
	cpv(456.870540, -651.627600),
	cpv(462.857370, -660.982050),
	cpv(434.419870, -662.104570),
};
static shape_user_data user_data = {
	.color = { 230, 230, 230 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(356.216820, -698.773970),
	cpv(375.299860, -588.017450),
	cpv(384.654290, -593.255940),
	cpv(358.836060, -706.631670),
	cpv(356.216820, -698.773970),
};
static shape_user_data user_data = {
	.color = { 230, 230, 230 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(513.557430, -701.364710),
	cpv(529.647060, -697.622950),
	cpv(530.021230, -711.841680),
	cpv(507.196420, -708.848270),
	cpv(513.557430, -701.364710),
};
static shape_user_data user_data = {
	.color = { 230, 230, 230 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(489.049770, -747.791180),
	cpv(491.294840, -738.062580),
	cpv(548.543980, -741.056000),
	cpv(545.924730, -751.532970),
	cpv(489.049770, -747.791180),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(397.376330, -690.916240),
	cpv(453.128740, -729.830680),
	cpv(450.883680, -738.436750),
	cpv(386.899360, -694.283830),
	cpv(397.376330, -690.916240),
};
static shape_user_data user_data = {
	.color = { 230, 230, 230 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(368.938860, -756.397250),
	cpv(362.577830, -748.165350),
	cpv(371.183930, -742.178520),
	cpv(380.538350, -753.029660),
	cpv(368.938860, -756.397250),
};
static shape_user_data user_data = {
	.color = { 230, 230, 230 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(394.008740, -803.917800),
	cpv(404.859880, -789.324860),
	cpv(419.078620, -788.950690),
	cpv(427.310520, -805.040320),
	cpv(394.008740, -803.917800),
};
static shape_user_data user_data = {
	.color = { 230, 230, 230 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(465.850780, -841.335510),
	cpv(471.837620, -773.235260),
	cpv(465.102440, -769.867640),
	cpv(449.012810, -845.825650),
	cpv(465.850780, -841.335510),
};
static shape_user_data user_data = {
	.color = { 236, 236, 236 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(379.790000, -889.604400),
	cpv(374.177340, -868.650460),
	cpv(391.763670, -863.411980),
	cpv(393.634560, -877.630710),
	cpv(379.790000, -889.604400),
};
static shape_user_data user_data = {
	.color = { 230, 230, 230 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(477.076100, -886.610990),
	cpv(490.920660, -878.753260),
	cpv(495.784980, -892.597820),
	cpv(486.430530, -903.823140),
	cpv(477.076100, -886.610990),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(408.227470, -916.545180),
	cpv(410.098370, -897.087930),
	cpv(429.181410, -897.087930),
	cpv(430.678110, -922.157840),
	cpv(408.227470, -916.545180),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(446.019390, -965.562390),
	cpv(446.393560, -950.595310),
	cpv(469.966720, -953.962900),
	cpv(469.966720, -970.800870),
	cpv(446.019390, -965.562390),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(404.485710, -999.612540),
	cpv(397.376330, -980.155320),
	cpv(408.601650, -967.807460),
	cpv(409.349990, -990.632270),
	cpv(404.485710, -999.612540),
};
static shape_user_data user_data = {
	.color = { 230, 230, 230 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(187.837020, -1316.166500),
	cpv(188.585370, -1236.841000),
	cpv(624.127790, -1247.317900),
	cpv(624.127790, -1321.405000),
	cpv(187.837020, -1316.166500),
};
static shape_user_data user_data = {
	.color = { 51, 51, 51 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(503.194380, -670.660740),
	cpv(469.370830, -621.795830),
	cpv(473.604160, -612.270830),
	cpv(506.941660, -660.954160),
	cpv(503.194380, -670.660740),
};
static shape_user_data user_data = {
	.color = { 236, 236, 236 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[4] = {
	cpv(88.899999, 87.287500),
	cpv(68.791666, 58.712500),
	cpv(51.329166, 87.816670),
	cpv(88.899999, 87.287500),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 4,
};
cpShape *level = cpPolyShapeNew(staticBody, 4, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(64.558333, -22.514581),
	cpv(62.970833, 26.168750),
	cpv(87.577082, 25.904170),
	cpv(80.962499, -23.572915),
	cpv(64.558333, -22.514581),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[4] = {
	cpv(92.677098, -18.979450),
	cpv(75.247765, -52.983961),
	cpv(53.396724, -18.979450),
	cpv(92.677098, -18.979450),
};
static shape_user_data user_data = {
	.color = { 204, 204, 204 },
	.filled = true,
	.verts = verts,
	.nr_verts = 4,
};
cpShape *level = cpPolyShapeNew(staticBody, 4, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[19] = {
	cpv(58.700015, 159.211750),
	cpv(58.700015, 160.679360),
	cpv(57.197955, 159.700960),
	cpv(55.509858, 159.377120),
	cpv(52.808904, 160.458880),
	cpv(51.871837, 163.573240),
	cpv(52.808904, 166.687610),
	cpv(55.509858, 167.762480),
	cpv(57.197955, 167.438640),
	cpv(58.700015, 166.460230),
	cpv(58.700015, 167.914060),
	cpv(57.149724, 168.658200),
	cpv(55.427175, 168.906250),
	cpv(51.747813, 167.479980),
	cpv(50.404225, 163.573240),
	cpv(51.747813, 159.666500),
	cpv(55.427175, 158.233340),
	cpv(57.163503, 158.481390),
	cpv(58.700015, 159.211750),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 19,
};
cpShape *level = cpPolyShapeNew(staticBody, 19, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(63.798758, 161.878260),
	cpv(62.186454, 162.677520),
	cpv(61.593896, 164.854820),
	cpv(62.179561, 167.039010),
	cpv(63.798758, 167.831380),
	cpv(65.404171, 167.032120),
	cpv(65.996729, 164.854820),
	cpv(65.404171, 162.684410),
	cpv(63.798758, 161.878260),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(63.798758, 160.803390),
	cpv(66.396358, 161.878260),
	cpv(67.340315, 164.854820),
	cpv(66.396358, 167.831380),
	cpv(63.798758, 168.906250),
	cpv(61.194266, 167.831380),
	cpv(60.257199, 164.854820),
	cpv(61.194266, 161.878260),
	cpv(63.798758, 160.803390),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[17] = {
	cpv(75.849701, 164.048670),
	cpv(75.849701, 168.706440),
	cpv(74.581908, 168.706440),
	cpv(74.581908, 164.090010),
	cpv(74.154714, 162.450140),
	cpv(72.873139, 161.905820),
	cpv(71.253944, 162.560380),
	cpv(70.661389, 164.344940),
	cpv(70.661389, 168.706440),
	cpv(69.386703, 168.706440),
	cpv(69.386703, 160.989420),
	cpv(70.661389, 160.989420),
	cpv(70.661389, 162.188310),
	cpv(71.729369, 161.147900),
	cpv(73.155637, 160.803390),
	cpv(75.167573, 161.630210),
	cpv(75.849701, 164.048670),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 17,
};
cpShape *level = cpPolyShapeNew(staticBody, 17, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[19] = {
	cpv(79.646197, 158.798340),
	cpv(79.646197, 160.989420),
	cpv(82.257579, 160.989420),
	cpv(82.257579, 161.974720),
	cpv(79.646197, 161.974720),
	cpv(79.646197, 166.163950),
	cpv(79.901133, 167.376630),
	cpv(80.955331, 167.645340),
	cpv(82.257579, 167.645340),
	cpv(82.257579, 168.706440),
	cpv(80.955331, 168.706440),
	cpv(78.929615, 168.162110),
	cpv(78.371511, 166.163950),
	cpv(78.371511, 161.974720),
	cpv(77.441334, 161.974720),
	cpv(77.441334, 160.989420),
	cpv(78.371511, 160.989420),
	cpv(78.371511, 158.798340),
	cpv(79.646197, 158.798340),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 19,
};
cpShape *level = cpPolyShapeNew(staticBody, 19, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[15] = {
	cpv(88.403630, 162.174530),
	cpv(87.935098, 161.995390),
	cpv(87.383883, 161.933390),
	cpv(85.730237, 162.636190),
	cpv(85.158351, 164.641230),
	cpv(85.158351, 168.706450),
	cpv(83.883665, 168.706450),
	cpv(83.883665, 160.989430),
	cpv(85.158351, 160.989430),
	cpv(85.158351, 162.188320),
	cpv(86.198769, 161.147910),
	cpv(87.755954, 160.803400),
	cpv(88.045342, 160.824100),
	cpv(88.396740, 160.872300),
	cpv(88.403630, 162.174530),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 15,
};
cpShape *level = cpPolyShapeNew(staticBody, 15, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(92.434393, 161.878260),
	cpv(90.822088, 162.677520),
	cpv(90.229532, 164.854820),
	cpv(90.815198, 167.039010),
	cpv(92.434393, 167.831380),
	cpv(94.039808, 167.032120),
	cpv(94.632363, 164.854820),
	cpv(94.039808, 162.684410),
	cpv(92.434393, 161.878260),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(92.434393, 160.803390),
	cpv(95.031995, 161.878260),
	cpv(95.975952, 164.854820),
	cpv(95.031995, 167.831380),
	cpv(92.434393, 168.906250),
	cpv(89.829901, 167.831380),
	cpv(88.892834, 164.854820),
	cpv(89.829901, 161.878260),
	cpv(92.434393, 160.803390),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(98.070565, 157.985300),
	cpv(99.338361, 157.985300),
	cpv(99.338361, 168.706440),
	cpv(98.070565, 168.706440),
	cpv(98.070565, 157.985300),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[29] = {
	cpv(106.903790, 161.216800),
	cpv(106.903790, 162.415690),
	cpv(105.787580, 162.002280),
	cpv(104.588690, 161.864470),
	cpv(103.169310, 162.153860),
	cpv(102.700780, 163.022030),
	cpv(103.038400, 163.717940),
	cpv(104.395760, 164.193360),
	cpv(104.829840, 164.289860),
	cpv(106.745320, 165.109800),
	cpv(107.317200, 166.577400),
	cpv(106.462820, 168.279280),
	cpv(104.127040, 168.906290),
	cpv(102.831690, 168.782270),
	cpv(101.419200, 168.423980),
	cpv(101.419200, 167.114840),
	cpv(102.804130, 167.666060),
	cpv(104.154610, 167.845200),
	cpv(105.532640, 167.542030),
	cpv(106.014960, 166.673870),
	cpv(105.663560, 165.881500),
	cpv(104.140830, 165.350950),
	cpv(103.699850, 165.247600),
	cpv(101.997980, 164.489680),
	cpv(101.474320, 163.077190),
	cpv(102.246020, 161.395980),
	cpv(104.437100, 160.803430),
	cpv(105.760020, 160.906780),
	cpv(106.903790, 161.216800),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 29,
};
cpShape *level = cpPolyShapeNew(staticBody, 29, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(109.666760, 166.956330),
	cpv(111.120590, 166.956330),
	cpv(111.120590, 168.706440),
	cpv(109.666760, 168.706440),
	cpv(109.666760, 166.956330),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(109.666760, 161.409720),
	cpv(111.120590, 161.409720),
	cpv(111.120590, 163.159830),
	cpv(109.666760, 163.159830),
	cpv(109.666760, 161.409720),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(64.418876, 177.002230),
	cpv(62.007307, 178.132220),
	cpv(61.118474, 181.212140),
	cpv(62.007307, 184.285160),
	cpv(64.418876, 185.415150),
	cpv(66.816662, 184.285160),
	cpv(67.705495, 181.212140),
	cpv(66.816662, 178.132220),
	cpv(64.418876, 177.002230),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[15] = {
	cpv(66.368799, 186.159290),
	cpv(68.201589, 188.164340),
	cpv(66.520382, 188.164340),
	cpv(64.997652, 186.517580),
	cpv(64.646251, 186.538280),
	cpv(64.418876, 186.545280),
	cpv(60.946219, 185.098340),
	cpv(59.650862, 181.212270),
	cpv(60.946219, 177.326200),
	cpv(64.418876, 175.872370),
	cpv(67.877750, 177.326200),
	cpv(69.173107, 181.212270),
	cpv(68.449636, 184.278410),
	cpv(66.368799, 186.159430),
	cpv(66.368799, 186.159290),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 15,
};
cpShape *level = cpPolyShapeNew(staticBody, 15, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[14] = {
	cpv(70.434011, 176.058270),
	cpv(71.839610, 176.058270),
	cpv(74.003132, 184.753690),
	cpv(76.159761, 176.058270),
	cpv(77.723835, 176.058270),
	cpv(79.887354, 184.753690),
	cpv(82.043983, 176.058270),
	cpv(83.456472, 176.058270),
	cpv(80.872651, 186.345330),
	cpv(79.122541, 186.345330),
	cpv(76.952132, 177.415640),
	cpv(74.761052, 186.345330),
	cpv(73.010944, 186.345330),
	cpv(70.434011, 176.058270),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 14,
};
cpShape *level = cpPolyShapeNew(staticBody, 14, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(89.471610, 177.002230),
	cpv(87.060041, 178.132220),
	cpv(86.171208, 181.212140),
	cpv(87.060041, 184.285160),
	cpv(89.471610, 185.415150),
	cpv(91.869396, 184.285160),
	cpv(92.758229, 181.212140),
	cpv(91.869396, 178.132220),
	cpv(89.471610, 177.002230),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(89.471610, 175.872240),
	cpv(92.930484, 177.326070),
	cpv(94.225841, 181.212140),
	cpv(92.930484, 185.098200),
	cpv(89.471610, 186.545140),
	cpv(85.998954, 185.098200),
	cpv(84.703596, 181.212140),
	cpv(85.998954, 177.326070),
	cpv(89.471610, 175.872240),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[8] = {
	cpv(97.794959, 177.202040),
	cpv(97.794959, 181.067440),
	cpv(99.545070, 181.067440),
	cpv(101.047130, 180.564460),
	cpv(101.577680, 179.131300),
	cpv(101.047130, 177.705030),
	cpv(99.545070, 177.202040),
	cpv(97.794959, 177.202040),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 8,
};
cpShape *level = cpPolyShapeNew(staticBody, 8, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[10] = {
	cpv(96.403143, 176.058270),
	cpv(99.545070, 176.058270),
	cpv(102.156450, 176.843760),
	cpv(103.045290, 179.131300),
	cpv(102.156450, 181.432620),
	cpv(99.545070, 182.211220),
	cpv(97.794959, 182.211220),
	cpv(97.794959, 186.345330),
	cpv(96.403143, 186.345330),
	cpv(96.403143, 176.058270),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 10,
};
cpShape *level = cpPolyShapeNew(staticBody, 10, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[8] = {
	cpv(125.068590, 205.936250),
	cpv(125.068590, 208.762950),
	cpv(126.742930, 208.762950),
	cpv(127.988320, 208.416720),
	cpv(128.396580, 207.347020),
	cpv(127.988320, 206.282480),
	cpv(126.742930, 205.936250),
	cpv(125.068590, 205.936250),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 8,
};
cpShape *level = cpPolyShapeNew(staticBody, 8, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[8] = {
	cpv(125.068590, 202.763320),
	cpv(125.068590, 205.088750),
	cpv(126.613730, 205.088750),
	cpv(127.750620, 204.804540),
	cpv(128.127840, 203.926040),
	cpv(127.750620, 203.052700),
	cpv(126.613730, 202.763320),
	cpv(125.068590, 202.763320),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 8,
};
cpShape *level = cpPolyShapeNew(staticBody, 8, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[12] = {
	cpv(124.024730, 201.905490),
	cpv(126.691260, 201.905490),
	cpv(128.530930, 202.401580),
	cpv(129.176880, 203.812350),
	cpv(128.846160, 204.938890),
	cpv(127.874630, 205.460820),
	cpv(129.068350, 206.153290),
	cpv(129.497270, 207.460700),
	cpv(128.794480, 209.057500),
	cpv(126.794600, 209.620780),
	cpv(124.024730, 209.620780),
	cpv(124.024730, 201.905490),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 12,
};
cpShape *level = cpPolyShapeNew(staticBody, 12, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[15] = {
	cpv(133.646890, 210.158210),
	cpv(132.861420, 211.506970),
	cpv(131.838220, 211.822190),
	cpv(131.078580, 211.822190),
	cpv(131.078580, 211.026380),
	cpv(131.636690, 211.026380),
	cpv(132.246470, 210.840340),
	cpv(132.727060, 209.961840),
	cpv(132.897590, 209.527760),
	cpv(130.556630, 203.833020),
	cpv(131.564330, 203.833020),
	cpv(133.373020, 208.359880),
	cpv(135.181680, 203.833020),
	cpv(136.189370, 203.833020),
	cpv(133.646890, 210.158210),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 15,
};
cpShape *level = cpPolyShapeNew(staticBody, 15, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(143.811650, 206.845750),
	cpv(144.178550, 208.008470),
	cpv(145.186240, 208.427050),
	cpv(146.183590, 208.003310),
	cpv(146.550510, 206.845750),
	cpv(146.178430, 205.698540),
	cpv(145.175890, 205.269620),
	cpv(144.178550, 205.693370),
	cpv(143.811650, 206.845750),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[46] = {
	cpv(146.628010, 208.390880),
	cpv(145.914880, 208.979990),
	cpv(144.984710, 209.166030),
	cpv(143.537750, 208.525240),
	cpv(142.984830, 206.845750),
	cpv(143.542940, 205.166270),
	cpv(144.984710, 204.520320),
	cpv(145.920030, 204.716680),
	cpv(146.628010, 205.300630),
	cpv(146.628010, 204.623670),
	cpv(147.366990, 204.623670),
	cpv(147.366990, 208.427050),
	cpv(148.545200, 207.739760),
	cpv(148.974120, 206.246310),
	cpv(148.808760, 205.207610),
	cpv(148.317820, 204.308440),
	cpv(147.005250, 203.274910),
	cpv(145.325750, 202.913180),
	cpv(144.106210, 203.083710),
	cpv(143.026150, 203.579800),
	cpv(141.754940, 204.964730),
	cpv(141.300170, 206.814750),
	cpv(141.594730, 208.354710),
	cpv(142.457720, 209.620780),
	cpv(143.713460, 210.437270),
	cpv(145.237910, 210.721490),
	cpv(146.545320, 210.494110),
	cpv(147.728730, 209.853320),
	cpv(148.193810, 210.426930),
	cpv(146.783050, 211.191740),
	cpv(145.237910, 211.460460),
	cpv(143.434410, 211.119390),
	cpv(141.925460, 210.137540),
	cpv(140.917770, 208.644090),
	cpv(140.571540, 206.814750),
	cpv(140.922930, 205.021580),
	cpv(141.925460, 203.522960),
	cpv(143.465420, 202.520440),
	cpv(145.315440, 202.169040),
	cpv(147.346320, 202.618620),
	cpv(148.922450, 203.895030),
	cpv(149.511570, 204.995740),
	cpv(149.718260, 206.225640),
	cpv(148.896600, 208.370210),
	cpv(146.628010, 209.186700),
	cpv(146.628010, 208.390880),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 46,
};
cpShape *level = cpPolyShapeNew(staticBody, 46, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[8] = {
	cpv(150.772470, 203.833020),
	cpv(151.780160, 203.833020),
	cpv(153.588820, 208.690600),
	cpv(155.397520, 203.833020),
	cpv(156.405180, 203.833020),
	cpv(154.234780, 209.620780),
	cpv(152.942870, 209.620780),
	cpv(150.772470, 203.833020),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 8,
};
cpShape *level = cpPolyShapeNew(staticBody, 8, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[16] = {
	cpv(162.668370, 206.489190),
	cpv(162.668370, 206.954280),
	cpv(158.296560, 206.954280),
	cpv(158.885650, 208.452890),
	cpv(160.363610, 208.964490),
	cpv(161.422980, 208.830130),
	cpv(162.446170, 208.427050),
	cpv(162.446170, 209.326220),
	cpv(161.397130, 209.656950),
	cpv(160.306750, 209.770640),
	cpv(158.110530, 208.964490),
	cpv(157.304370, 206.783740),
	cpv(158.069170, 204.530650),
	cpv(160.141390, 203.693490),
	cpv(161.986250, 204.447970),
	cpv(162.668370, 206.489190),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 16,
};
cpShape *level = cpPolyShapeNew(staticBody, 16, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[6] = {
	cpv(161.717540, 206.210140),
	cpv(161.278280, 204.964730),
	cpv(160.151730, 204.499640),
	cpv(158.875330, 204.949230),
	cpv(158.327560, 206.215300),
	cpv(161.717540, 206.210140),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 6,
};
cpShape *level = cpPolyShapeNew(staticBody, 6, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(168.037560, 206.659720),
	cpv(167.608640, 205.057750),
	cpv(166.414920, 204.489310),
	cpv(165.221200, 205.057750),
	cpv(164.797450, 206.659720),
	cpv(165.221200, 208.256520),
	cpv(166.414920, 208.824960),
	cpv(167.608640, 208.256520),
	cpv(168.037560, 206.659720),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[22] = {
	cpv(168.988390, 208.902480),
	cpv(168.332120, 211.098730),
	cpv(166.321900, 211.822190),
	cpv(165.376220, 211.744690),
	cpv(164.513230, 211.517310),
	cpv(164.513230, 210.592310),
	cpv(165.340050, 210.928200),
	cpv(166.172040, 211.036720),
	cpv(167.572480, 210.545800),
	cpv(168.037560, 209.073020),
	cpv(168.037560, 208.602760),
	cpv(167.283070, 209.367570),
	cpv(166.182380, 209.620790),
	cpv(164.466720, 208.809470),
	cpv(163.815600, 206.659730),
	cpv(164.466720, 204.504820),
	cpv(166.182380, 203.693500),
	cpv(167.283070, 203.946720),
	cpv(168.037560, 204.711530),
	cpv(168.037560, 203.833030),
	cpv(168.988390, 203.833030),
	cpv(168.988390, 208.902480),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 22,
};
cpShape *level = cpPolyShapeNew(staticBody, 22, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(173.577270, 206.711400),
	cpv(171.980460, 206.974950),
	cpv(171.536040, 207.874120),
	cpv(171.866770, 208.680270),
	cpv(172.776270, 208.974820),
	cpv(174.042360, 208.416720),
	cpv(174.522950, 206.923270),
	cpv(174.522950, 206.711400),
	cpv(173.577270, 206.711400),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[21] = {
	cpv(175.473810, 206.318650),
	cpv(175.473810, 209.620780),
	cpv(174.522950, 209.620780),
	cpv(174.522950, 208.742280),
	cpv(173.711630, 209.522590),
	cpv(172.523070, 209.770640),
	cpv(171.107150, 209.274550),
	cpv(170.585210, 207.936130),
	cpv(171.236320, 206.463350),
	cpv(173.189690, 205.967260),
	cpv(174.522950, 205.967260),
	cpv(174.522950, 205.874260),
	cpv(174.088870, 204.861400),
	cpv(172.879650, 204.499660),
	cpv(171.913280, 204.618520),
	cpv(171.008960, 204.975090),
	cpv(171.008960, 204.096590),
	cpv(172.021820, 203.796860),
	cpv(172.977830, 203.693510),
	cpv(174.853680, 204.344630),
	cpv(175.473810, 206.318650),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 21,
};
cpShape *level = cpPolyShapeNew(staticBody, 21, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[15] = {
	cpv(180.791300, 204.721850),
	cpv(180.439900, 204.587490),
	cpv(180.026490, 204.540990),
	cpv(178.786260, 205.068090),
	cpv(178.357340, 206.571870),
	cpv(178.357340, 209.620780),
	cpv(177.401320, 209.620780),
	cpv(177.401320, 203.833020),
	cpv(178.357340, 203.833020),
	cpv(178.357340, 204.732190),
	cpv(179.137650, 203.951870),
	cpv(180.305550, 203.693490),
	cpv(180.522590, 203.708990),
	cpv(180.786140, 203.745190),
	cpv(180.791300, 204.721850),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 15,
};
cpShape *level = cpPolyShapeNew(staticBody, 15, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[14] = {
	cpv(185.421510, 204.711520),
	cpv(185.421510, 201.579930),
	cpv(186.372370, 201.579930),
	cpv(186.372370, 209.620780),
	cpv(185.421510, 209.620780),
	cpv(185.421510, 208.752610),
	cpv(184.661860, 209.522590),
	cpv(183.566330, 209.770640),
	cpv(181.855850, 208.933480),
	cpv(181.199550, 206.732070),
	cpv(181.855850, 204.530650),
	cpv(183.566330, 203.693490),
	cpv(184.661860, 203.946710),
	cpv(185.421510, 204.711520),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 14,
};
cpShape *level = cpPolyShapeNew(staticBody, 14, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(182.181390, 206.732070),
	cpv(182.610310, 208.380540),
	cpv(183.798870, 208.974820),
	cpv(184.987430, 208.380540),
	cpv(185.421510, 206.732070),
	cpv(184.987430, 205.088750),
	cpv(183.798870, 204.489310),
	cpv(182.610310, 205.088750),
	cpv(182.181390, 206.732070),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(192.728560, 211.377780),
	cpv(192.728560, 212.116750),
	cpv(187.230200, 212.116750),
	cpv(187.230200, 211.377780),
	cpv(192.728560, 211.377780),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[17] = {
	cpv(198.433630, 206.127450),
	cpv(198.433630, 209.620780),
	cpv(197.482800, 209.620780),
	cpv(197.482800, 206.158460),
	cpv(197.162390, 204.928560),
	cpv(196.201210, 204.520320),
	cpv(194.986830, 205.011240),
	cpv(194.542410, 206.349660),
	cpv(194.542410, 209.620780),
	cpv(193.586390, 209.620780),
	cpv(193.586390, 203.833020),
	cpv(194.542410, 203.833020),
	cpv(194.542410, 204.732190),
	cpv(195.343380, 203.951870),
	cpv(196.413090, 203.693490),
	cpv(197.922040, 204.313610),
	cpv(198.433630, 206.127450),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 17,
};
cpShape *level = cpPolyShapeNew(staticBody, 17, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(202.583250, 204.499640),
	cpv(201.374030, 205.099090),
	cpv(200.929610, 206.732070),
	cpv(201.368870, 208.370210),
	cpv(202.583250, 208.964490),
	cpv(203.787320, 208.365040),
	cpv(204.231740, 206.732070),
	cpv(203.787320, 205.104260),
	cpv(202.583250, 204.499640),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(202.583250, 203.693490),
	cpv(204.531460, 204.499640),
	cpv(205.239430, 206.732070),
	cpv(204.531460, 208.964490),
	cpv(202.583250, 209.770640),
	cpv(200.629890, 208.964490),
	cpv(199.927080, 206.732070),
	cpv(200.629890, 204.499640),
	cpv(202.583250, 203.693490),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[11] = {
	cpv(263.340150, -181.509126),
	cpv(264.745750, -181.509126),
	cpv(268.166730, -175.054740),
	cpv(268.166730, -181.509126),
	cpv(269.179590, -181.509126),
	cpv(269.179590, -173.793834),
	cpv(267.773990, -173.793834),
	cpv(264.353010, -180.248223),
	cpv(264.353010, -173.793834),
	cpv(263.340150, -173.793834),
	cpv(263.340150, -181.509126),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 11,
};
cpShape *level = cpPolyShapeNew(staticBody, 11, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(271.215640, -179.581594),
	cpv(272.166480, -179.581594),
	cpv(272.166480, -173.793834),
	cpv(271.215640, -173.793834),
	cpv(271.215640, -179.581594),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(271.215640, -181.834688),
	cpv(272.166480, -181.834688),
	cpv(272.166480, -180.630628),
	cpv(271.215640, -180.630628),
	cpv(271.215640, -181.834688),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[20] = {
	cpv(278.315980, -179.359387),
	cpv(278.315980, -178.470553),
	cpv(277.504660, -178.801283),
	cpv(276.688170, -178.914969),
	cpv(275.251570, -178.325858),
	cpv(274.739970, -176.682547),
	cpv(275.251570, -175.034068),
	cpv(276.688170, -174.450125),
	cpv(277.504660, -174.558646),
	cpv(278.315980, -174.894543),
	cpv(278.315980, -174.016044),
	cpv(277.489160, -173.736991),
	cpv(276.584820, -173.643971),
	cpv(274.507430, -174.465627),
	cpv(273.737450, -176.682544),
	cpv(274.512590, -178.909798),
	cpv(276.646830, -179.721119),
	cpv(277.504660, -179.628099),
	cpv(278.315980, -179.359381),
	cpv(278.315980, -179.359387),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 20,
};
cpShape *level = cpPolyShapeNew(staticBody, 20, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[16] = {
	cpv(284.930560, -176.925426),
	cpv(284.930560, -176.460339),
	cpv(280.558740, -176.460339),
	cpv(281.147850, -174.961723),
	cpv(282.625790, -174.450125),
	cpv(283.685160, -174.584486),
	cpv(284.708350, -174.987560),
	cpv(284.708350, -174.088392),
	cpv(283.659320, -173.757663),
	cpv(282.568950, -173.643974),
	cpv(280.372700, -174.450125),
	cpv(279.566550, -176.630871),
	cpv(280.331360, -178.883965),
	cpv(282.403590, -179.721122),
	cpv(284.248430, -178.966647),
	cpv(284.930560, -176.925426),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 16,
};
cpShape *level = cpPolyShapeNew(staticBody, 16, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[6] = {
	cpv(283.979720, -177.204480),
	cpv(283.540470, -178.449881),
	cpv(282.413920, -178.914969),
	cpv(281.137510, -178.465383),
	cpv(280.589740, -177.199312),
	cpv(283.979720, -177.204480),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 6,
};
cpShape *level = cpPolyShapeNew(staticBody, 6, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[11] = {
	cpv(264.714740, -166.352428),
	cpv(265.665590, -166.352428),
	cpv(265.665590, -160.461316),
	cpv(265.241840, -158.859346),
	cpv(263.887920, -158.363252),
	cpv(263.526180, -158.363252),
	cpv(263.526180, -159.169406),
	cpv(263.779400, -159.169406),
	cpv(264.518370, -159.422620),
	cpv(264.714740, -160.461316),
	cpv(264.714740, -166.352428),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 11,
};
cpShape *level = cpPolyShapeNew(staticBody, 11, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(264.714740, -168.605522),
	cpv(265.665590, -168.605522),
	cpv(265.665590, -167.401461),
	cpv(264.714740, -167.401461),
	cpv(264.714740, -168.605522),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(269.892720, -165.685802),
	cpv(268.683490, -165.086357),
	cpv(268.239070, -163.453380),
	cpv(268.678330, -161.815239),
	cpv(269.892720, -161.220958),
	cpv(271.096780, -161.820406),
	cpv(271.541200, -163.453380),
	cpv(271.096780, -165.081190),
	cpv(269.892720, -165.685802),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(269.892720, -166.491956),
	cpv(271.840920, -165.685802),
	cpv(272.548890, -163.453380),
	cpv(271.840920, -161.220958),
	cpv(269.892720, -160.414807),
	cpv(267.939350, -161.220958),
	cpv(267.236550, -163.453380),
	cpv(267.939350, -165.685802),
	cpv(269.892720, -166.491956),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(278.274640, -163.453380),
	cpv(277.840560, -165.096692),
	cpv(276.657170, -165.696139),
	cpv(275.468610, -165.096692),
	cpv(275.039690, -163.453380),
	cpv(275.468610, -161.804902),
	cpv(276.657170, -161.210624),
	cpv(277.840560, -161.804902),
	cpv(278.274640, -163.453380),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[14] = {
	cpv(275.039690, -165.473929),
	cpv(275.794170, -166.238742),
	cpv(276.889710, -166.491956),
	cpv(278.600200, -165.654798),
	cpv(279.261660, -163.453380),
	cpv(278.600200, -161.251965),
	cpv(276.889710, -160.414807),
	cpv(275.794170, -160.662854),
	cpv(275.039690, -161.432832),
	cpv(275.039690, -160.564667),
	cpv(274.083680, -160.564667),
	cpv(274.083680, -168.605522),
	cpv(275.039690, -168.605522),
	cpv(275.039690, -165.473929),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 14,
};
cpShape *level = cpPolyShapeNew(staticBody, 14, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(281.437230, -161.877250),
	cpv(282.486270, -161.877250),
	cpv(282.486270, -160.564667),
	cpv(281.437230, -160.564667),
	cpv(281.437230, -161.877250),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[7] = {
	cpv(281.437230, -168.279960),
	cpv(282.486270, -168.279960),
	cpv(282.486270, -164.895153),
	cpv(282.382910, -163.050306),
	cpv(281.545760, -163.050306),
	cpv(281.437230, -164.895153),
	cpv(281.437230, -168.279960),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 7,
};
cpShape *level = cpPolyShapeNew(staticBody, 7, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[10] = {
	cpv(354.388460, 322.133500),
	cpv(355.509840, 322.133500),
	cpv(357.649240, 325.306440),
	cpv(359.773160, 322.133500),
	cpv(360.894540, 322.133500),
	cpv(358.166020, 326.174620),
	cpv(358.166020, 329.848800),
	cpv(357.116980, 329.848800),
	cpv(357.116980, 326.174620),
	cpv(354.388460, 322.133500),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 10,
};
cpShape *level = cpPolyShapeNew(staticBody, 10, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(362.713550, 324.727660),
	cpv(361.504320, 325.327100),
	cpv(361.059900, 326.960080),
	cpv(361.499140, 328.598220),
	cpv(362.713550, 329.192510),
	cpv(363.917590, 328.593070),
	cpv(364.362010, 326.960080),
	cpv(363.917590, 325.332290),
	cpv(362.713550, 324.727660),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(362.713550, 323.921500),
	cpv(364.661730, 324.727660),
	cpv(365.369700, 326.960080),
	cpv(364.661730, 329.192510),
	cpv(362.713550, 329.998660),
	cpv(360.760180, 329.192510),
	cpv(360.057370, 326.960080),
	cpv(360.760180, 324.727660),
	cpv(362.713550, 323.921500),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[17] = {
	cpv(366.842480, 327.564710),
	cpv(366.842480, 324.061040),
	cpv(367.793340, 324.061040),
	cpv(367.793340, 327.528540),
	cpv(368.113720, 328.763590),
	cpv(369.074900, 329.171840),
	cpv(370.289310, 328.680910),
	cpv(370.738890, 327.342490),
	cpv(370.738890, 324.061040),
	cpv(371.689720, 324.061040),
	cpv(371.689720, 329.848800),
	cpv(370.738890, 329.848800),
	cpv(370.738890, 328.959960),
	cpv(369.932730, 329.745460),
	cpv(368.873370, 329.998660),
	cpv(367.359260, 329.378530),
	cpv(366.842480, 327.564710),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 17,
};
cpShape *level = cpPolyShapeNew(staticBody, 17, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[20] = {
	cpv(381.193030, 324.283240),
	cpv(381.193030, 325.172080),
	cpv(380.381710, 324.841350),
	cpv(379.565230, 324.727660),
	cpv(378.128620, 325.316780),
	cpv(377.617030, 326.960080),
	cpv(378.128620, 328.608570),
	cpv(379.565230, 329.192510),
	cpv(380.381710, 329.084000),
	cpv(381.193030, 328.748080),
	cpv(381.193030, 329.626580),
	cpv(380.366200, 329.905640),
	cpv(379.461860, 329.998640),
	cpv(377.384480, 329.176980),
	cpv(376.614490, 326.960060),
	cpv(377.389640, 324.732830),
	cpv(379.523880, 323.921480),
	cpv(380.381710, 324.014480),
	cpv(381.193030, 324.283190),
	cpv(381.193030, 324.283240),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 20,
};
cpShape *level = cpPolyShapeNew(staticBody, 20, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(385.487350, 326.939420),
	cpv(383.890530, 327.202970),
	cpv(383.446110, 328.102130),
	cpv(383.776840, 328.908290),
	cpv(384.686350, 329.202850),
	cpv(385.952430, 328.644740),
	cpv(386.433020, 327.151300),
	cpv(386.433020, 326.939420),
	cpv(385.487350, 326.939420),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[22] = {
	cpv(387.383880, 326.546670),
	cpv(387.383880, 329.848800),
	cpv(386.433020, 329.848800),
	cpv(386.433020, 328.970310),
	cpv(385.621700, 329.750620),
	cpv(384.433140, 329.998660),
	cpv(383.017200, 329.502570),
	cpv(382.495280, 328.164150),
	cpv(383.146390, 326.691370),
	cpv(385.099760, 326.195280),
	cpv(386.433020, 326.195280),
	cpv(386.433020, 326.102280),
	cpv(385.998950, 325.089430),
	cpv(384.789720, 324.727690),
	cpv(383.823360, 324.846540),
	cpv(382.919040, 325.203120),
	cpv(382.919040, 324.324630),
	cpv(383.931890, 324.024910),
	cpv(384.887910, 323.921530),
	cpv(386.763750, 324.572670),
	cpv(387.383880, 326.546700),
	cpv(387.383880, 326.546670),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 22,
};
cpShape *level = cpPolyShapeNew(staticBody, 22, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[17] = {
	cpv(394.158640, 326.355480),
	cpv(394.158640, 329.848800),
	cpv(393.207810, 329.848800),
	cpv(393.207810, 326.386490),
	cpv(392.887400, 325.156580),
	cpv(391.926220, 324.748330),
	cpv(390.711840, 325.239260),
	cpv(390.267420, 326.577680),
	cpv(390.267420, 329.848800),
	cpv(389.311400, 329.848800),
	cpv(389.311400, 324.061040),
	cpv(390.267420, 324.061040),
	cpv(390.267420, 324.960200),
	cpv(391.068390, 324.179890),
	cpv(392.138100, 323.921500),
	cpv(393.647040, 324.541630),
	cpv(394.158640, 326.355480),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 17,
};
cpShape *level = cpPolyShapeNew(staticBody, 17, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[14] = {
	cpv(365.602240, 338.168710),
	cpv(365.602240, 335.037120),
	cpv(366.553100, 335.037120),
	cpv(366.553100, 343.077970),
	cpv(365.602240, 343.077970),
	cpv(365.602240, 342.209790),
	cpv(364.842600, 342.979780),
	cpv(363.747060, 343.227830),
	cpv(362.036590, 342.390660),
	cpv(361.380290, 340.189250),
	cpv(362.036590, 337.987840),
	cpv(363.747060, 337.150670),
	cpv(364.842600, 337.403900),
	cpv(365.602240, 338.168710),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 14,
};
cpShape *level = cpPolyShapeNew(staticBody, 14, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(362.362130, 340.189250),
	cpv(362.791050, 341.837740),
	cpv(363.979610, 342.432020),
	cpv(365.168170, 341.837740),
	cpv(365.602240, 340.189250),
	cpv(365.168170, 338.545950),
	cpv(363.979610, 337.946510),
	cpv(362.791050, 338.545950),
	cpv(362.362130, 340.189250),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(370.754400, 337.956830),
	cpv(369.545170, 338.556270),
	cpv(369.100750, 340.189250),
	cpv(369.539980, 341.827390),
	cpv(370.754400, 342.421670),
	cpv(371.958460, 341.822230),
	cpv(372.402880, 340.189250),
	cpv(371.958460, 338.561450),
	cpv(370.754400, 337.956830),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(370.754400, 337.150670),
	cpv(372.702600, 337.956830),
	cpv(373.410570, 340.189250),
	cpv(372.702600, 342.421670),
	cpv(370.754400, 343.227830),
	cpv(368.801030, 342.421670),
	cpv(368.098220, 340.189250),
	cpv(368.801030, 337.956830),
	cpv(370.754400, 337.150670),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(378.350820, 337.290210),
	cpv(379.301680, 337.290210),
	cpv(379.301680, 343.077970),
	cpv(378.350820, 343.077970),
	cpv(378.350820, 337.290210),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(378.350820, 335.037120),
	cpv(379.301680, 335.037120),
	cpv(379.301680, 336.241160),
	cpv(378.350820, 336.241160),
	cpv(378.350820, 335.037120),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[19] = {
	cpv(382.226570, 335.646910),
	cpv(382.226570, 337.290210),
	cpv(384.185090, 337.290210),
	cpv(384.185090, 338.029190),
	cpv(382.226570, 338.029190),
	cpv(382.226570, 341.171120),
	cpv(382.417760, 342.080620),
	cpv(383.208410, 342.282160),
	cpv(384.185090, 342.282160),
	cpv(384.185090, 343.077970),
	cpv(383.208410, 343.077970),
	cpv(381.689120, 342.669720),
	cpv(381.270550, 341.171120),
	cpv(381.270550, 338.029190),
	cpv(380.572920, 338.029190),
	cpv(380.572920, 337.290210),
	cpv(381.270550, 337.290210),
	cpv(381.270550, 335.646910),
	cpv(382.226570, 335.646910),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 19,
};
cpShape *level = cpPolyShapeNew(staticBody, 19, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(386.040270, 341.765400),
	cpv(387.089320, 341.765400),
	cpv(387.089320, 343.077970),
	cpv(386.040270, 343.077970),
	cpv(386.040270, 341.765400),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[7] = {
	cpv(386.040270, 335.362670),
	cpv(387.089320, 335.362670),
	cpv(387.089320, 338.747480),
	cpv(386.985950, 340.592340),
	cpv(386.148810, 340.592340),
	cpv(386.040270, 338.747480),
	cpv(386.040270, 335.362670),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 7,
};
cpShape *level = cpPolyShapeNew(staticBody, 7, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[30] = {
	cpv(687.802160, 16.301930),
	cpv(687.760760, 17.319090),
	cpv(686.657570, 16.850020),
	cpv(685.646080, 16.669160),
	cpv(684.315950, 16.945950),
	cpv(683.818100, 17.866950),
	cpv(684.091180, 18.653870),
	cpv(685.241040, 19.119660),
	cpv(685.865710, 19.274420),
	cpv(687.553120, 20.129320),
	cpv(688.049720, 21.649440),
	cpv(687.226630, 23.317460),
	cpv(685.003470, 23.806100),
	cpv(683.841610, 23.634600),
	cpv(682.581200, 23.216020),
	cpv(682.625000, 22.142040),
	cpv(683.847470, 22.729760),
	cpv(685.038010, 22.959310),
	cpv(686.430930, 22.664380),
	cpv(686.957120, 21.682490),
	cpv(686.642210, 20.780070),
	cpv(685.520690, 20.253370),
	cpv(684.890650, 20.103550),
	cpv(683.231900, 19.306700),
	cpv(682.766590, 17.906830),
	cpv(683.549970, 16.325110),
	cpv(685.561850, 15.817540),
	cpv(686.662810, 15.960680),
	cpv(687.802250, 16.301930),
	cpv(687.802160, 16.301930),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 30,
};
cpShape *level = cpPolyShapeNew(staticBody, 30, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[18] = {
	cpv(694.497450, 20.546880),
	cpv(694.355170, 24.037310),
	cpv(693.405110, 23.998510),
	cpv(693.546130, 20.539050),
	cpv(693.276090, 19.297130),
	cpv(692.332330, 18.850070),
	cpv(691.098960, 19.291130),
	cpv(690.600400, 20.610350),
	cpv(690.467160, 23.878760),
	cpv(689.511950, 23.839860),
	cpv(689.839430, 15.805690),
	cpv(690.794650, 15.844590),
	cpv(690.666280, 18.994220),
	cpv(691.498370, 18.247180),
	cpv(692.577710, 18.032570),
	cpv(694.060160, 18.713650),
	cpv(694.497450, 20.546820),
	cpv(694.497450, 20.546880),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 18,
};
cpShape *level = cpPolyShapeNew(staticBody, 18, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(698.709930, 19.089430),
	cpv(697.477280, 19.639120),
	cpv(696.966730, 21.252640),
	cpv(697.338900, 22.907310),
	cpv(698.528080, 23.550550),
	cpv(699.755560, 23.000660),
	cpv(700.266120, 21.387130),
	cpv(699.888360, 19.742580),
	cpv(698.709930, 19.089430),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(698.742730, 18.283930),
	cpv(700.656480, 19.168770),
	cpv(701.272930, 21.428170),
	cpv(700.474640, 23.629910),
	cpv(698.495210, 24.356050),
	cpv(696.576300, 23.471000),
	cpv(695.965010, 21.211810),
	cpv(696.758140, 19.009860),
	cpv(698.742730, 18.283930),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[18] = {
	cpv(702.719900, 22.092280),
	cpv(702.862590, 18.591520),
	cpv(703.812650, 18.630220),
	cpv(703.671430, 22.094810),
	cpv(703.941260, 23.341910),
	cpv(704.885020, 23.788970),
	cpv(706.118400, 23.347900),
	cpv(706.622120, 22.028900),
	cpv(706.755770, 18.750180),
	cpv(707.705830, 18.788880),
	cpv(707.470100, 24.571830),
	cpv(706.520040, 24.533130),
	cpv(706.556240, 23.645030),
	cpv(705.718770, 24.397040),
	cpv(704.649970, 24.606890),
	cpv(703.162360, 23.925600),
	cpv(702.719900, 22.092240),
	cpv(702.719900, 22.092280),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 18,
};
cpShape *level = cpPolyShapeNew(staticBody, 18, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[19] = {
	cpv(710.679720, 17.265470),
	cpv(710.612820, 18.907430),
	cpv(712.569730, 18.987130),
	cpv(712.539630, 19.725470),
	cpv(710.582730, 19.645770),
	cpv(710.454770, 22.785090),
	cpv(710.608760, 23.701630),
	cpv(711.390550, 23.935220),
	cpv(712.366430, 23.975020),
	cpv(712.333930, 24.770180),
	cpv(711.358050, 24.730380),
	cpv(709.856660, 24.260590),
	cpv(709.499460, 22.746160),
	cpv(709.627420, 19.606840),
	cpv(708.930370, 19.578440),
	cpv(708.960470, 18.840110),
	cpv(709.657520, 18.868510),
	cpv(709.724420, 17.226550),
	cpv(710.679720, 17.265470),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 19,
};
cpShape *level = cpPolyShapeNew(staticBody, 19, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(716.038140, 19.795750),
	cpv(714.805510, 20.345440),
	cpv(714.294950, 21.958970),
	cpv(714.667110, 23.613640),
	cpv(715.856300, 24.256890),
	cpv(717.083780, 23.706980),
	cpv(717.594330, 22.093460),
	cpv(717.216580, 20.448910),
	cpv(716.038140, 19.795750),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(716.070940, 18.990260),
	cpv(717.984700, 19.875100),
	cpv(718.601160, 22.134500),
	cpv(717.802860, 24.336240),
	cpv(715.823440, 25.062380),
	cpv(713.904530, 24.177330),
	cpv(713.293220, 21.918130),
	cpv(714.086370, 19.716190),
	cpv(716.070940, 18.990260),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[18] = {
	cpv(720.048120, 22.798610),
	cpv(720.190820, 19.297850),
	cpv(721.140870, 19.336650),
	cpv(720.999650, 22.801240),
	cpv(721.269470, 24.048340),
	cpv(722.213230, 24.495400),
	cpv(723.446610, 24.054330),
	cpv(723.950340, 22.735330),
	cpv(724.083980, 19.456610),
	cpv(725.034040, 19.495410),
	cpv(724.798320, 25.278370),
	cpv(723.848270, 25.239570),
	cpv(723.884470, 24.351460),
	cpv(723.047000, 25.103480),
	cpv(721.978200, 25.313320),
	cpv(720.490590, 24.632040),
	cpv(720.048130, 22.798680),
	cpv(720.048120, 22.798610),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 18,
};
cpShape *level = cpPolyShapeNew(staticBody, 18, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[19] = {
	cpv(728.007950, 17.971790),
	cpv(727.940950, 19.613760),
	cpv(729.897860, 19.693460),
	cpv(729.867760, 20.431810),
	cpv(727.910850, 20.352110),
	cpv(727.782880, 23.491430),
	cpv(727.936880, 24.407980),
	cpv(728.718670, 24.641570),
	cpv(729.694540, 24.681270),
	cpv(729.662040, 25.476430),
	cpv(728.686160, 25.436630),
	cpv(727.184760, 24.966850),
	cpv(726.827570, 23.452420),
	cpv(726.955540, 20.313100),
	cpv(726.258480, 20.284700),
	cpv(726.288580, 19.546360),
	cpv(726.985630, 19.574760),
	cpv(727.052530, 17.932800),
	cpv(728.007950, 17.971790),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 19,
};
cpShape *level = cpPolyShapeNew(staticBody, 19, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[30] = {
	cpv(734.832310, 20.065330),
	cpv(734.795710, 20.963750),
	cpv(733.971880, 20.619870),
	cpv(733.077660, 20.479960),
	cpv(732.005170, 20.653480),
	cpv(731.627540, 21.289750),
	cpv(731.859290, 21.821560),
	cpv(732.861950, 22.219290),
	cpv(733.184290, 22.304790),
	cpv(734.594660, 22.977770),
	cpv(734.978390, 24.095010),
	cpv(734.286150, 25.344260),
	cpv(732.516610, 25.742790),
	cpv(731.549700, 25.610270),
	cpv(730.502150, 25.298640),
	cpv(730.542150, 24.317610),
	cpv(731.563140, 24.772980),
	cpv(732.569700, 24.948480),
	cpv(733.611630, 24.763380),
	cpv(733.999570, 24.127540),
	cpv(733.760450, 23.523010),
	cpv(732.635550, 23.078920),
	cpv(732.308250, 22.988020),
	cpv(731.056060, 22.368080),
	cpv(730.706790, 21.293570),
	cpv(731.336440, 20.057290),
	cpv(732.996490, 19.680160),
	cpv(733.984690, 19.798030),
	cpv(734.832340, 20.065320),
	cpv(734.832310, 20.065330),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 30,
};
cpShape *level = cpPolyShapeNew(staticBody, 30, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[19] = {
	cpv(741.040250, 18.503020),
	cpv(740.973350, 20.144980),
	cpv(742.930260, 20.224680),
	cpv(742.900160, 20.963030),
	cpv(740.943260, 20.883330),
	cpv(740.815290, 24.022650),
	cpv(740.969290, 24.939190),
	cpv(741.751080, 25.172790),
	cpv(742.726950, 25.212590),
	cpv(742.694450, 26.007730),
	cpv(741.718580, 25.968030),
	cpv(740.217170, 25.498240),
	cpv(739.859980, 23.983810),
	cpv(739.987950, 20.844500),
	cpv(739.290890, 20.816100),
	cpv(739.320990, 20.077750),
	cpv(740.018050, 20.106150),
	cpv(740.084950, 18.464190),
	cpv(741.040250, 18.503020),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 19,
};
cpShape *level = cpPolyShapeNew(staticBody, 19, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(746.398680, 21.033300),
	cpv(745.166030, 21.582990),
	cpv(744.655480, 23.196520),
	cpv(745.027650, 24.851190),
	cpv(746.216830, 25.494440),
	cpv(747.444300, 24.944540),
	cpv(747.954860, 23.331000),
	cpv(747.577110, 21.686470),
	cpv(746.398680, 21.033300),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(746.431480, 20.227810),
	cpv(748.345230, 21.112640),
	cpv(748.961690, 23.372050),
	cpv(748.163380, 25.573780),
	cpv(746.183970, 26.299930),
	cpv(744.265050, 25.414880),
	cpv(743.653760, 23.155690),
	cpv(744.446890, 20.953740),
	cpv(746.431480, 20.227810),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[30] = {
	cpv(758.746650, 19.193760),
	cpv(758.705250, 20.210920),
	cpv(757.602060, 19.741840),
	cpv(756.590560, 19.560980),
	cpv(755.260450, 19.837770),
	cpv(754.762600, 20.758770),
	cpv(755.035670, 21.545700),
	cpv(756.185540, 22.011480),
	cpv(756.810210, 22.166250),
	cpv(758.497610, 23.021160),
	cpv(758.994220, 24.541270),
	cpv(758.171130, 26.209290),
	cpv(755.947960, 26.697920),
	cpv(754.786100, 26.526420),
	cpv(753.525690, 26.107840),
	cpv(753.569490, 25.033870),
	cpv(754.791960, 25.621600),
	cpv(755.982500, 25.851140),
	cpv(757.375430, 25.556200),
	cpv(757.901620, 24.574310),
	cpv(757.586700, 23.671900),
	cpv(756.465180, 23.145200),
	cpv(755.835130, 22.995370),
	cpv(754.176400, 22.198520),
	cpv(753.711090, 20.798650),
	cpv(754.494470, 19.216930),
	cpv(756.506350, 18.709360),
	cpv(757.607310, 18.852500),
	cpv(758.746730, 19.193760),
	cpv(758.746650, 19.193760),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 30,
};
cpShape *level = cpPolyShapeNew(staticBody, 30, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(760.728320, 20.950230),
	cpv(761.678380, 20.988930),
	cpv(761.442650, 26.771890),
	cpv(760.492590, 26.733090),
	cpv(760.728320, 20.950230),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(760.820120, 18.699010),
	cpv(761.770180, 18.737710),
	cpv(761.721080, 19.940750),
	cpv(760.771020, 19.902050),
	cpv(760.820120, 18.699010),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[29] = {
	cpv(768.118300, 22.363420),
	cpv(769.008770, 21.453260),
	cpv(770.188100, 21.196170),
	cpv(771.556330, 21.888110),
	cpv(771.973600, 23.704960),
	cpv(771.831330, 27.195370),
	cpv(770.876100, 27.156470),
	cpv(771.017120, 23.697010),
	cpv(770.773110, 22.450980),
	cpv(769.891100, 22.011600),
	cpv(768.704180, 22.454570),
	cpv(768.221110, 23.774400),
	cpv(768.087890, 27.042820),
	cpv(767.132670, 27.003920),
	cpv(767.273690, 23.544460),
	cpv(767.029670, 22.298430),
	cpv(766.137340, 21.858640),
	cpv(764.960550, 22.307170),
	cpv(764.477680, 23.621850),
	cpv(764.344460, 26.890270),
	cpv(763.389230, 26.851370),
	cpv(763.624960, 21.068410),
	cpv(764.580180, 21.107310),
	cpv(764.543580, 22.005730),
	cpv(765.355240, 21.252690),
	cpv(766.444700, 21.043650),
	cpv(767.500450, 21.407370),
	cpv(768.118320, 22.363490),
	cpv(768.118300, 22.363420),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 29,
};
cpShape *level = cpPolyShapeNew(staticBody, 29, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[14] = {
	cpv(774.685870, 26.442830),
	cpv(774.560860, 29.509880),
	cpv(773.605640, 29.470980),
	cpv(773.931020, 21.488440),
	cpv(774.886240, 21.527340),
	cpv(774.850440, 22.405110),
	cpv(775.635440, 21.671660),
	cpv(776.740390, 21.463260),
	cpv(778.415350, 22.369400),
	cpv(778.986610, 24.595930),
	cpv(778.236040, 26.768580),
	cpv(776.492870, 27.535390),
	cpv(775.408340, 27.242920),
	cpv(774.685870, 26.442830),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 14,
};
cpShape *level = cpPolyShapeNew(staticBody, 14, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(778.000420, 24.555720),
	cpv(777.633640, 22.896100),
	cpv(776.475640, 22.248940),
	cpv(775.263650, 22.799500),
	cpv(774.768170, 24.423960),
	cpv(775.129580, 26.088560),
	cpv(776.292960, 26.730740),
	cpv(777.499570, 26.185160),
	cpv(778.000420, 24.555720),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(780.771280, 19.512260),
	cpv(781.721340, 19.551060),
	cpv(781.393850, 27.585230),
	cpv(780.443800, 27.546530),
	cpv(780.771280, 19.512260),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[17] = {
	cpv(788.450620, 24.738590),
	cpv(788.431620, 25.203330),
	cpv(784.063430, 25.025270),
	cpv(784.591010, 26.546620),
	cpv(786.046890, 27.117990),
	cpv(787.110860, 27.026890),
	cpv(788.149610, 26.665840),
	cpv(788.113010, 27.564250),
	cpv(787.051370, 27.851980),
	cpv(785.957270, 27.921180),
	cpv(783.795680, 27.026250),
	cpv(783.079010, 24.814470),
	cpv(783.934950, 22.594400),
	cpv(786.039560, 21.842320),
	cpv(787.852150, 22.671320),
	cpv(788.450570, 24.738610),
	cpv(788.450620, 24.738590),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 17,
};
cpShape *level = cpPolyShapeNew(staticBody, 17, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[6] = {
	cpv(787.511940, 24.421080),
	cpv(787.123770, 23.158790),
	cpv(786.017100, 22.648220),
	cpv(784.723440, 23.045440),
	cpv(784.124560, 24.288160),
	cpv(787.511940, 24.421080),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 6,
};
cpShape *level = cpPolyShapeNew(staticBody, 6, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[11] = {
	cpv(790.237950, 20.223950),
	cpv(794.668110, 20.404530),
	cpv(794.632310, 21.282300),
	cpv(791.245150, 21.144240),
	cpv(791.152550, 23.416120),
	cpv(794.209250, 23.540720),
	cpv(794.173450, 24.418490),
	cpv(791.116750, 24.293890),
	cpv(790.966690, 27.975360),
	cpv(789.923700, 27.932860),
	cpv(790.237950, 20.223950),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 11,
};
cpShape *level = cpPolyShapeNew(staticBody, 11, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(796.302660, 20.145340),
	cpv(797.252710, 20.184040),
	cpv(796.925230, 28.218220),
	cpv(795.975170, 28.179420),
	cpv(796.302660, 20.145340),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(799.143680, 22.516110),
	cpv(800.093740, 22.554910),
	cpv(799.858010, 28.337870),
	cpv(798.907960, 28.299170),
	cpv(799.143680, 22.516110),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(799.235480, 20.264890),
	cpv(800.185540, 20.303690),
	cpv(800.136540, 21.506730),
	cpv(799.186480, 21.467930),
	cpv(799.235480, 20.264890),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[14] = {
	cpv(802.795180, 27.588620),
	cpv(802.670160, 30.655660),
	cpv(801.714940, 30.616760),
	cpv(802.040320, 22.634210),
	cpv(802.995540, 22.673110),
	cpv(802.959740, 23.550870),
	cpv(803.744740, 22.817430),
	cpv(804.849690, 22.609030),
	cpv(806.524670, 23.515160),
	cpv(807.095920, 25.741690),
	cpv(806.345340, 27.914340),
	cpv(804.602180, 28.681150),
	cpv(803.517660, 28.388690),
	cpv(802.795180, 27.588620),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 14,
};
cpShape *level = cpPolyShapeNew(staticBody, 14, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(806.109740, 25.701510),
	cpv(805.742940, 24.041890),
	cpv(804.584940, 23.394730),
	cpv(803.372960, 23.945280),
	cpv(802.877480, 25.569750),
	cpv(803.238900, 27.234340),
	cpv(804.402260, 27.876530),
	cpv(805.608870, 27.330950),
	cpv(806.109740, 25.701510),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[30] = {
	cpv(812.468520, 23.229920),
	cpv(812.431920, 24.128340),
	cpv(811.608080, 23.784450),
	cpv(810.713870, 23.644550),
	cpv(809.641380, 23.818070),
	cpv(809.263760, 24.454340),
	cpv(809.495490, 24.986160),
	cpv(810.498160, 25.383880),
	cpv(810.820500, 25.469380),
	cpv(812.230870, 26.142360),
	cpv(812.614600, 27.259600),
	cpv(811.922350, 28.508850),
	cpv(810.152830, 28.907380),
	cpv(809.185900, 28.774860),
	cpv(808.138370, 28.463220),
	cpv(808.178370, 27.482200),
	cpv(809.199370, 27.937570),
	cpv(810.205910, 28.113070),
	cpv(811.247850, 27.927970),
	cpv(811.635800, 27.292120),
	cpv(811.396670, 26.687600),
	cpv(810.271770, 26.243520),
	cpv(809.944480, 26.152620),
	cpv(808.692280, 25.532680),
	cpv(808.343010, 24.458170),
	cpv(808.972660, 23.221890),
	cpv(810.632710, 22.844760),
	cpv(811.620920, 22.962630),
	cpv(812.468560, 23.229920),
	cpv(812.468520, 23.229920),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 30,
};
cpShape *level = cpPolyShapeNew(staticBody, 30, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[14] = {
	cpv(669.348690, -282.059380),
	cpv(670.904150, -282.059380),
	cpv(672.873020, -276.809060),
	cpv(674.852230, -282.059380),
	cpv(676.407690, -282.059380),
	cpv(676.407690, -274.344090),
	cpv(675.389670, -274.344090),
	cpv(675.389670, -281.118870),
	cpv(673.400120, -275.827210),
	cpv(672.351090, -275.827210),
	cpv(670.361550, -281.118870),
	cpv(670.361550, -274.344090),
	cpv(669.348690, -274.344090),
	cpv(669.348690, -282.059380),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 14,
};
cpShape *level = cpPolyShapeNew(staticBody, 14, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(664.150040, -281.351420),
	cpv(662.341370, -280.503920),
	cpv(661.674740, -278.193990),
	cpv(662.341370, -275.889220),
	cpv(664.150040, -275.041730),
	cpv(665.948380, -275.889220),
	cpv(666.615010, -278.193990),
	cpv(665.948380, -280.503920),
	cpv(664.150040, -281.351420),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(664.150040, -282.198910),
	cpv(666.744200, -281.108540),
	cpv(667.715720, -278.193990),
	cpv(666.744200, -275.279440),
	cpv(664.150040, -274.194230),
	cpv(661.545550, -275.279440),
	cpv(660.574030, -278.193990),
	cpv(661.545550, -281.108540),
	cpv(664.150040, -282.198910),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[19] = {
	cpv(659.395810, -281.465110),
	cpv(659.395810, -280.364400),
	cpv(658.269260, -281.098200),
	cpv(657.003190, -281.341080),
	cpv(654.977480, -280.529760),
	cpv(654.274680, -278.193990),
	cpv(654.977480, -275.858210),
	cpv(657.003190, -275.052060),
	cpv(658.269260, -275.294940),
	cpv(659.395810, -276.028740),
	cpv(659.395810, -274.938370),
	cpv(658.233090, -274.380270),
	cpv(656.941180, -274.194230),
	cpv(654.181660, -275.263930),
	cpv(653.173970, -278.193990),
	cpv(654.181660, -281.124040),
	cpv(656.941180, -282.198910),
	cpv(658.243430, -282.012870),
	cpv(659.395810, -281.465110),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 19,
};
cpShape *level = cpPolyShapeNew(staticBody, 19, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(650.342100, -275.656670),
	cpv(651.432470, -275.656670),
	cpv(651.432470, -274.344090),
	cpv(650.342100, -274.344090),
	cpv(650.342100, -275.656670),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[13] = {
	cpv(643.551820, -282.059380),
	cpv(648.430070, -282.059380),
	cpv(648.430070, -281.180880),
	cpv(644.595680, -281.180880),
	cpv(644.595680, -278.896790),
	cpv(648.269880, -278.896790),
	cpv(648.269880, -278.018290),
	cpv(644.595680, -278.018290),
	cpv(644.595680, -275.222590),
	cpv(648.523090, -275.222590),
	cpv(648.523090, -274.344090),
	cpv(643.551820, -274.344090),
	cpv(643.551820, -282.059380),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 13,
};
cpShape *level = cpPolyShapeNew(staticBody, 13, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[19] = {
	cpv(641.929180, -281.465110),
	cpv(641.929180, -280.364400),
	cpv(640.802630, -281.098200),
	cpv(639.536560, -281.341080),
	cpv(637.510840, -280.529760),
	cpv(636.808040, -278.193990),
	cpv(637.510840, -275.858210),
	cpv(639.536560, -275.052060),
	cpv(640.802630, -275.294940),
	cpv(641.929180, -276.028740),
	cpv(641.929180, -274.938370),
	cpv(640.766460, -274.380270),
	cpv(639.474550, -274.194230),
	cpv(636.715020, -275.263930),
	cpv(635.707330, -278.193990),
	cpv(636.715020, -281.124040),
	cpv(639.474550, -282.198910),
	cpv(640.776790, -282.012870),
	cpv(641.929180, -281.465110),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 19,
};
cpShape *level = cpPolyShapeNew(staticBody, 19, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[11] = {
	cpv(628.234920, -282.059380),
	cpv(629.640520, -282.059380),
	cpv(633.061500, -275.605000),
	cpv(633.061500, -282.059380),
	cpv(634.074360, -282.059380),
	cpv(634.074360, -274.344090),
	cpv(632.668760, -274.344090),
	cpv(629.247780, -280.798480),
	cpv(629.247780, -274.344090),
	cpv(628.234920, -274.344090),
	cpv(628.234920, -282.059380),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 11,
};
cpShape *level = cpPolyShapeNew(staticBody, 11, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[4] = {
	cpv(623.578870, -281.031020),
	cpv(622.162940, -277.191470),
	cpv(624.999980, -277.191470),
	cpv(623.578870, -281.031020),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 4,
};
cpShape *level = cpPolyShapeNew(staticBody, 4, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(622.989760, -282.059380),
	cpv(624.173150, -282.059380),
	cpv(627.113540, -274.344090),
	cpv(626.028340, -274.344090),
	cpv(625.325540, -276.323300),
	cpv(621.847720, -276.323300),
	cpv(621.144920, -274.344090),
	cpv(620.044210, -274.344090),
	cpv(622.989760, -282.059380),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[7] = {
	cpv(614.861060, -282.059380),
	cpv(615.904930, -282.059380),
	cpv(615.904930, -275.222590),
	cpv(619.661800, -275.222590),
	cpv(619.661800, -274.344090),
	cpv(614.861060, -274.344090),
	cpv(614.861060, -282.059380),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 7,
};
cpShape *level = cpPolyShapeNew(staticBody, 7, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[11] = {
	cpv(606.944230, -282.059380),
	cpv(608.349830, -282.059380),
	cpv(611.770810, -275.605000),
	cpv(611.770810, -282.059380),
	cpv(612.783670, -282.059380),
	cpv(612.783670, -274.344090),
	cpv(611.378070, -274.344090),
	cpv(607.957090, -280.798480),
	cpv(607.957090, -274.344090),
	cpv(606.944230, -274.344090),
	cpv(606.944230, -282.059380),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 11,
};
cpShape *level = cpPolyShapeNew(staticBody, 11, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[13] = {
	cpv(600.246970, -282.059380),
	cpv(605.125220, -282.059380),
	cpv(605.125220, -281.180880),
	cpv(601.290830, -281.180880),
	cpv(601.290830, -278.896790),
	cpv(604.965020, -278.896790),
	cpv(604.965020, -278.018290),
	cpv(601.290830, -278.018290),
	cpv(601.290830, -275.222590),
	cpv(605.218240, -275.222590),
	cpv(605.218240, -274.344090),
	cpv(600.246970, -274.344090),
	cpv(600.246970, -282.059380),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 13,
};
cpShape *level = cpPolyShapeNew(staticBody, 13, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[8] = {
	cpv(594.903620, -281.201560),
	cpv(594.903620, -278.302510),
	cpv(596.216210, -278.302510),
	cpv(597.342750, -278.679750),
	cpv(597.740660, -279.754620),
	cpv(597.342750, -280.824320),
	cpv(596.216210, -281.201560),
	cpv(594.903620, -281.201560),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 8,
};
cpShape *level = cpPolyShapeNew(staticBody, 8, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[10] = {
	cpv(593.859760, -282.059380),
	cpv(596.216210, -282.059380),
	cpv(598.174740, -281.470270),
	cpv(598.841370, -279.754620),
	cpv(598.174740, -278.028620),
	cpv(596.216210, -277.444680),
	cpv(594.903620, -277.444680),
	cpv(594.903620, -274.344090),
	cpv(593.859760, -274.344090),
	cpv(593.859760, -282.059380),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 10,
};
cpShape *level = cpPolyShapeNew(staticBody, 10, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[8] = {
	cpv(588.516420, -281.201560),
	cpv(588.516420, -278.302510),
	cpv(589.829000, -278.302510),
	cpv(590.955540, -278.679750),
	cpv(591.353450, -279.754620),
	cpv(590.955540, -280.824320),
	cpv(589.829000, -281.201560),
	cpv(588.516420, -281.201560),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 8,
};
cpShape *level = cpPolyShapeNew(staticBody, 8, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[10] = {
	cpv(587.472550, -282.059380),
	cpv(589.829000, -282.059380),
	cpv(591.787530, -281.470270),
	cpv(592.454160, -279.754620),
	cpv(591.787530, -278.028620),
	cpv(589.829000, -277.444680),
	cpv(588.516420, -277.444680),
	cpv(588.516420, -274.344090),
	cpv(587.472550, -274.344090),
	cpv(587.472550, -282.059380),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 10,
};
cpShape *level = cpPolyShapeNew(staticBody, 10, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[4] = {
	cpv(582.816500, -281.031020),
	cpv(581.400570, -277.191470),
	cpv(584.237610, -277.191470),
	cpv(582.816500, -281.031020),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 4,
};
cpShape *level = cpPolyShapeNew(staticBody, 4, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(582.227390, -282.059380),
	cpv(583.410790, -282.059380),
	cpv(586.351170, -274.344090),
	cpv(585.265970, -274.344090),
	cpv(584.563170, -276.323300),
	cpv(581.085350, -276.323300),
	cpv(580.382550, -274.344090),
	cpv(579.281840, -274.344090),
	cpv(582.227390, -282.059380),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[13] = {
	cpv(572.279680, -282.059380),
	cpv(573.323550, -282.059380),
	cpv(573.323550, -278.896790),
	cpv(577.116600, -278.896790),
	cpv(577.116600, -282.059380),
	cpv(578.160460, -282.059380),
	cpv(578.160460, -274.344090),
	cpv(577.116600, -274.344090),
	cpv(577.116600, -278.018290),
	cpv(573.323550, -278.018290),
	cpv(573.323550, -274.344090),
	cpv(572.279680, -274.344090),
	cpv(572.279680, -282.059380),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 13,
};
cpShape *level = cpPolyShapeNew(staticBody, 13, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(590.941910, -640.250630),
	cpv(591.985780, -640.250630),
	cpv(591.985780, -632.535350),
	cpv(590.941910, -632.535350),
	cpv(590.941910, -640.250630),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(601.545910, -635.424050),
	cpv(601.111830, -637.067370),
	cpv(599.928440, -637.666810),
	cpv(598.739880, -637.067370),
	cpv(598.310970, -635.424050),
	cpv(598.739880, -633.775590),
	cpv(599.928440, -633.181310),
	cpv(601.111830, -633.775590),
	cpv(601.545910, -635.424050),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[14] = {
	cpv(598.310970, -637.444590),
	cpv(599.065450, -638.209420),
	cpv(600.160990, -638.462630),
	cpv(601.871480, -637.625460),
	cpv(602.532930, -635.424050),
	cpv(601.871480, -633.222640),
	cpv(600.160990, -632.385490),
	cpv(599.065450, -632.633540),
	cpv(598.310970, -633.403500),
	cpv(598.310970, -632.535350),
	cpv(597.354960, -632.535350),
	cpv(597.354960, -640.576200),
	cpv(598.310970, -640.576200),
	cpv(598.310970, -637.444590),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 14,
};
cpShape *level = cpPolyShapeNew(staticBody, 14, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[16] = {
	cpv(609.059670, -635.666940),
	cpv(609.059670, -635.201850),
	cpv(604.687840, -635.201850),
	cpv(605.276950, -633.703220),
	cpv(606.754900, -633.191630),
	cpv(607.814270, -633.325980),
	cpv(608.837460, -633.729070),
	cpv(608.837460, -632.829890),
	cpv(607.788430, -632.499160),
	cpv(606.698060, -632.385490),
	cpv(604.501810, -633.191630),
	cpv(603.695650, -635.372370),
	cpv(604.460470, -637.625460),
	cpv(606.532690, -638.462630),
	cpv(608.377540, -637.708140),
	cpv(609.059670, -635.666940),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 16,
};
cpShape *level = cpPolyShapeNew(staticBody, 16, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[6] = {
	cpv(608.108820, -635.945990),
	cpv(607.669570, -637.191390),
	cpv(606.543030, -637.656470),
	cpv(605.266620, -637.206890),
	cpv(604.718850, -635.940830),
	cpv(608.108820, -635.945990),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 6,
};
cpShape *level = cpPolyShapeNew(staticBody, 6, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(610.620300, -640.576200),
	cpv(611.571140, -640.576200),
	cpv(611.571140, -632.535350),
	cpv(610.620300, -632.535350),
	cpv(610.620300, -640.576200),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(613.555520, -638.323110),
	cpv(614.506360, -638.323110),
	cpv(614.506360, -632.535350),
	cpv(613.555520, -632.535350),
	cpv(613.555520, -638.323110),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(613.555520, -640.576200),
	cpv(614.506360, -640.576200),
	cpv(614.506360, -639.372130),
	cpv(613.555520, -639.372130),
	cpv(613.555520, -640.576200),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[16] = {
	cpv(621.441340, -635.666940),
	cpv(621.441340, -635.201850),
	cpv(617.069520, -635.201850),
	cpv(617.658630, -633.703220),
	cpv(619.136570, -633.191630),
	cpv(620.195940, -633.325980),
	cpv(621.219130, -633.729070),
	cpv(621.219130, -632.829890),
	cpv(620.170100, -632.499160),
	cpv(619.079730, -632.385490),
	cpv(616.883480, -633.191630),
	cpv(616.077330, -635.372370),
	cpv(616.842140, -637.625460),
	cpv(618.914360, -638.462630),
	cpv(620.759210, -637.708140),
	cpv(621.441340, -635.666940),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 16,
};
cpShape *level = cpPolyShapeNew(staticBody, 16, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[6] = {
	cpv(620.490490, -635.945990),
	cpv(620.051250, -637.191390),
	cpv(618.924700, -637.656470),
	cpv(617.648290, -637.206890),
	cpv(617.100520, -635.940830),
	cpv(620.490490, -635.945990),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 6,
};
cpShape *level = cpPolyShapeNew(staticBody, 6, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[8] = {
	cpv(622.319840, -638.323110),
	cpv(623.327530, -638.323110),
	cpv(625.136210, -633.465520),
	cpv(626.944880, -638.323110),
	cpv(627.952570, -638.323110),
	cpv(625.782160, -632.535350),
	cpv(624.490250, -632.535350),
	cpv(622.319840, -638.323110),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 8,
};
cpShape *level = cpPolyShapeNew(staticBody, 8, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[16] = {
	cpv(634.215750, -635.666940),
	cpv(634.215750, -635.201850),
	cpv(629.843930, -635.201850),
	cpv(630.433040, -633.703220),
	cpv(631.910990, -633.191630),
	cpv(632.970350, -633.325980),
	cpv(633.993550, -633.729070),
	cpv(633.993550, -632.829890),
	cpv(632.944520, -632.499160),
	cpv(631.854140, -632.385490),
	cpv(629.657890, -633.191630),
	cpv(628.851740, -635.372370),
	cpv(629.616550, -637.625460),
	cpv(631.688780, -638.462630),
	cpv(633.533630, -637.708140),
	cpv(634.215750, -635.666940),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 16,
};
cpShape *level = cpPolyShapeNew(staticBody, 16, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[6] = {
	cpv(633.264910, -635.945990),
	cpv(632.825660, -637.191390),
	cpv(631.699110, -637.656470),
	cpv(630.422710, -637.206890),
	cpv(629.874930, -635.940830),
	cpv(633.264910, -635.945990),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 6,
};
cpShape *level = cpPolyShapeNew(staticBody, 6, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(594.983010, -625.093950),
	cpv(595.933850, -625.093950),
	cpv(595.933850, -619.306190),
	cpv(594.983010, -619.306190),
	cpv(594.983010, -625.093950),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(594.983010, -627.347030),
	cpv(595.933850, -627.347030),
	cpv(595.933850, -626.142970),
	cpv(594.983010, -626.142970),
	cpv(594.983010, -627.347030),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[17] = {
	cpv(602.729310, -622.799510),
	cpv(602.729310, -619.306190),
	cpv(601.778460, -619.306190),
	cpv(601.778460, -622.768500),
	cpv(601.458060, -623.998390),
	cpv(600.496880, -624.406640),
	cpv(599.282490, -623.915700),
	cpv(598.838070, -622.577280),
	cpv(598.838070, -619.306190),
	cpv(597.882060, -619.306190),
	cpv(597.882060, -625.093950),
	cpv(598.838070, -625.093950),
	cpv(598.838070, -624.194760),
	cpv(599.639050, -624.975070),
	cpv(600.708760, -625.233460),
	cpv(602.217710, -624.613360),
	cpv(602.729310, -622.799510),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 17,
};
cpShape *level = cpPolyShapeNew(staticBody, 17, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[15] = {
	cpv(610.413590, -618.768740),
	cpv(609.628110, -617.420000),
	cpv(608.604920, -617.104750),
	cpv(607.845270, -617.104750),
	cpv(607.845270, -617.900590),
	cpv(608.403380, -617.900590),
	cpv(609.013160, -618.086620),
	cpv(609.493750, -618.965110),
	cpv(609.664280, -619.399190),
	cpv(607.323340, -625.093950),
	cpv(608.331030, -625.093950),
	cpv(610.139710, -620.567090),
	cpv(611.948380, -625.093950),
	cpv(612.956070, -625.093950),
	cpv(610.413590, -618.768740),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 15,
};
cpShape *level = cpPolyShapeNew(staticBody, 15, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(616.511410, -624.427300),
	cpv(615.302180, -623.827860),
	cpv(614.857760, -622.194880),
	cpv(615.297010, -620.556740),
	cpv(616.511410, -619.962460),
	cpv(617.715470, -620.561930),
	cpv(618.159890, -622.194880),
	cpv(617.715470, -623.822700),
	cpv(616.511410, -624.427300),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(616.511410, -625.233460),
	cpv(618.459610, -624.427300),
	cpv(619.167580, -622.194880),
	cpv(618.459610, -619.962460),
	cpv(616.511410, -619.156330),
	cpv(614.558040, -619.962460),
	cpv(613.855240, -622.194880),
	cpv(614.558040, -624.427300),
	cpv(616.511410, -625.233460),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[17] = {
	cpv(620.640360, -621.590280),
	cpv(620.640360, -625.093950),
	cpv(621.591200, -625.093950),
	cpv(621.591200, -621.626450),
	cpv(621.911600, -620.391380),
	cpv(622.872780, -619.983150),
	cpv(624.087170, -620.474060),
	cpv(624.536760, -621.812480),
	cpv(624.536760, -625.093950),
	cpv(625.487600, -625.093950),
	cpv(625.487600, -619.306190),
	cpv(624.536760, -619.306190),
	cpv(624.536760, -620.195000),
	cpv(623.730610, -619.409530),
	cpv(622.671240, -619.156330),
	cpv(621.157120, -619.776430),
	cpv(620.640360, -621.590280),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 17,
};
cpShape *level = cpPolyShapeNew(staticBody, 17, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(628.055920, -620.618760),
	cpv(629.104960, -620.618760),
	cpv(629.104960, -619.306190),
	cpv(628.055920, -619.306190),
	cpv(628.055920, -620.618760),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[7] = {
	cpv(628.055920, -627.021460),
	cpv(629.104960, -627.021460),
	cpv(629.104960, -623.636650),
	cpv(629.001600, -621.791820),
	cpv(628.164440, -621.791820),
	cpv(628.055920, -623.636650),
	cpv(628.055920, -627.021460),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 7,
};
cpShape *level = cpPolyShapeNew(staticBody, 7, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[19] = {
	cpv(279.977740, -783.904610),
	cpv(279.977740, -782.261280),
	cpv(281.936280, -782.261280),
	cpv(281.936280, -781.522320),
	cpv(279.977740, -781.522320),
	cpv(279.977740, -778.380400),
	cpv(280.168940, -777.470890),
	cpv(280.959590, -777.269330),
	cpv(281.936280, -777.269330),
	cpv(281.936280, -776.473520),
	cpv(280.959590, -776.473520),
	cpv(279.440300, -776.881770),
	cpv(279.021720, -778.380400),
	cpv(279.021720, -781.522320),
	cpv(278.324090, -781.522320),
	cpv(278.324090, -782.261280),
	cpv(279.021720, -782.261280),
	cpv(279.021720, -783.904610),
	cpv(279.977740, -783.904610),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 19,
};
cpShape *level = cpPolyShapeNew(staticBody, 19, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[14] = {
	cpv(282.639080, -782.261280),
	cpv(283.589920, -782.261280),
	cpv(284.778480, -777.744760),
	cpv(285.961870, -782.261280),
	cpv(287.083250, -782.261280),
	cpv(288.271810, -777.744760),
	cpv(289.455200, -782.261280),
	cpv(290.406040, -782.261280),
	cpv(288.891920, -776.473520),
	cpv(287.770550, -776.473520),
	cpv(286.525140, -781.217420),
	cpv(285.274570, -776.473520),
	cpv(284.153190, -776.473520),
	cpv(282.639080, -782.261280),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 14,
};
cpShape *level = cpPolyShapeNew(staticBody, 14, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(291.852980, -782.261280),
	cpv(292.803830, -782.261280),
	cpv(292.803830, -776.473520),
	cpv(291.852980, -776.473520),
	cpv(291.852980, -782.261280),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(291.852980, -784.514390),
	cpv(292.803830, -784.514390),
	cpv(292.803830, -783.310330),
	cpv(291.852980, -783.310330),
	cpv(291.852980, -784.514390),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[19] = {
	cpv(295.728710, -783.904610),
	cpv(295.728710, -782.261280),
	cpv(297.687250, -782.261280),
	cpv(297.687250, -781.522320),
	cpv(295.728710, -781.522320),
	cpv(295.728710, -778.380400),
	cpv(295.919920, -777.470890),
	cpv(296.710570, -777.269330),
	cpv(297.687250, -777.269330),
	cpv(297.687250, -776.473520),
	cpv(296.710570, -776.473520),
	cpv(295.191280, -776.881770),
	cpv(294.772700, -778.380400),
	cpv(294.772700, -781.522320),
	cpv(294.075070, -781.522320),
	cpv(294.075070, -782.261280),
	cpv(294.772700, -782.261280),
	cpv(294.772700, -783.904610),
	cpv(295.728710, -783.904610),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 19,
};
cpShape *level = cpPolyShapeNew(staticBody, 19, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[20] = {
	cpv(303.108110, -782.039080),
	cpv(303.108110, -781.150240),
	cpv(302.296790, -781.480970),
	cpv(301.480300, -781.594660),
	cpv(300.043700, -781.005540),
	cpv(299.532100, -779.362240),
	cpv(300.043700, -777.713750),
	cpv(301.480300, -777.129820),
	cpv(302.296790, -777.238350),
	cpv(303.108110, -777.574240),
	cpv(303.108110, -776.695740),
	cpv(302.281290, -776.416690),
	cpv(301.376950, -776.323690),
	cpv(299.299560, -777.145350),
	cpv(298.529580, -779.362270),
	cpv(299.304730, -781.589530),
	cpv(301.438960, -782.400850),
	cpv(302.296790, -782.307850),
	cpv(303.108110, -782.039140),
	cpv(303.108110, -782.039080),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 20,
};
cpShape *level = cpPolyShapeNew(staticBody, 20, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[17] = {
	cpv(309.583170, -779.966870),
	cpv(309.583170, -776.473520),
	cpv(308.632320, -776.473520),
	cpv(308.632320, -779.935860),
	cpv(308.311930, -781.165750),
	cpv(307.350740, -781.574000),
	cpv(306.136350, -781.083060),
	cpv(305.691930, -779.744640),
	cpv(305.691930, -776.473520),
	cpv(304.735920, -776.473520),
	cpv(304.735920, -784.514390),
	cpv(305.691930, -784.514390),
	cpv(305.691930, -781.362120),
	cpv(306.492920, -782.142430),
	cpv(307.562620, -782.400820),
	cpv(309.071570, -781.780690),
	cpv(309.583170, -779.966870),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 17,
};
cpShape *level = cpPolyShapeNew(staticBody, 17, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(311.624390, -777.786120),
	cpv(312.714760, -777.786120),
	cpv(312.714760, -776.473520),
	cpv(311.624390, -776.473520),
	cpv(311.624390, -777.786120),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[19] = {
	cpv(315.799840, -783.904610),
	cpv(315.799840, -782.261280),
	cpv(317.758390, -782.261280),
	cpv(317.758390, -781.522320),
	cpv(315.799840, -781.522320),
	cpv(315.799840, -778.380400),
	cpv(315.991050, -777.470890),
	cpv(316.781710, -777.269330),
	cpv(317.758390, -777.269330),
	cpv(317.758390, -776.473520),
	cpv(316.781710, -776.473520),
	cpv(315.262420, -776.881770),
	cpv(314.843820, -778.380400),
	cpv(314.843820, -781.522320),
	cpv(314.146190, -781.522320),
	cpv(314.146190, -782.261280),
	cpv(314.843820, -782.261280),
	cpv(314.843820, -783.904610),
	cpv(315.799840, -783.904610),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 19,
};
cpShape *level = cpPolyShapeNew(staticBody, 19, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[8] = {
	cpv(318.331980, -782.261280),
	cpv(319.339670, -782.261280),
	cpv(321.148360, -777.403710),
	cpv(322.957030, -782.261280),
	cpv(323.964720, -782.261280),
	cpv(321.794320, -776.473520),
	cpv(320.502410, -776.473520),
	cpv(318.331980, -782.261280),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 8,
};
cpShape *level = cpPolyShapeNew(staticBody, 8, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(326.967130, -784.188820),
	cpv(327.845630, -784.188820),
	cpv(325.158440, -775.491680),
	cpv(324.279940, -775.491680),
	cpv(326.967130, -784.188820),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[11] = {
	cpv(277.042520, -770.959650),
	cpv(281.476360, -770.959650),
	cpv(281.476360, -770.081160),
	cpv(278.086380, -770.081160),
	cpv(278.086380, -767.807380),
	cpv(281.145630, -767.807380),
	cpv(281.145630, -766.928890),
	cpv(278.086380, -766.928890),
	cpv(278.086380, -763.244350),
	cpv(277.042520, -763.244350),
	cpv(277.042520, -770.959650),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 11,
};
cpShape *level = cpPolyShapeNew(staticBody, 11, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[17] = {
	cpv(282.422030, -765.528450),
	cpv(282.422030, -769.032110),
	cpv(283.372880, -769.032110),
	cpv(283.372880, -765.564640),
	cpv(283.693270, -764.329570),
	cpv(284.654460, -763.921310),
	cpv(285.868850, -764.412250),
	cpv(286.318440, -765.750670),
	cpv(286.318440, -769.032110),
	cpv(287.269280, -769.032110),
	cpv(287.269280, -763.244350),
	cpv(286.318440, -763.244350),
	cpv(286.318440, -764.133190),
	cpv(285.512280, -763.347720),
	cpv(284.452920, -763.094490),
	cpv(282.938800, -763.714620),
	cpv(282.422030, -765.528450),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 17,
};
cpShape *level = cpPolyShapeNew(staticBody, 17, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[11] = {
	cpv(288.824740, -769.032110),
	cpv(293.341270, -769.032110),
	cpv(293.341270, -768.163960),
	cpv(289.765260, -764.004000),
	cpv(293.341270, -764.004000),
	cpv(293.341270, -763.244350),
	cpv(288.695550, -763.244350),
	cpv(288.695550, -764.112530),
	cpv(292.271560, -768.272470),
	cpv(288.824740, -768.272470),
	cpv(288.824740, -769.032110),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 11,
};
cpShape *level = cpPolyShapeNew(staticBody, 11, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[11] = {
	cpv(294.385130, -769.032110),
	cpv(298.901650, -769.032110),
	cpv(298.901650, -768.163960),
	cpv(295.325640, -764.004000),
	cpv(298.901650, -764.004000),
	cpv(298.901650, -763.244350),
	cpv(294.255940, -763.244350),
	cpv(294.255940, -764.112530),
	cpv(297.831950, -768.272470),
	cpv(294.385130, -768.272470),
	cpv(294.385130, -769.032110),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 11,
};
cpShape *level = cpPolyShapeNew(staticBody, 11, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[15] = {
	cpv(302.767050, -762.706930),
	cpv(301.981570, -761.358160),
	cpv(300.958370, -761.042940),
	cpv(300.198730, -761.042940),
	cpv(300.198730, -761.838750),
	cpv(300.756830, -761.838750),
	cpv(301.366620, -762.024810),
	cpv(301.847200, -762.903300),
	cpv(302.017740, -763.337380),
	cpv(299.676800, -769.032110),
	cpv(300.684490, -769.032110),
	cpv(302.493160, -764.505280),
	cpv(304.301840, -769.032110),
	cpv(305.309530, -769.032110),
	cpv(302.767050, -762.706930),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 15,
};
cpShape *level = cpPolyShapeNew(staticBody, 15, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[17] = {
	cpv(311.433180, -766.737700),
	cpv(311.433180, -763.244350),
	cpv(310.482340, -763.244350),
	cpv(310.482340, -766.706690),
	cpv(310.161940, -767.936580),
	cpv(309.200760, -768.344830),
	cpv(307.986370, -767.853900),
	cpv(307.541950, -766.515480),
	cpv(307.541950, -763.244350),
	cpv(306.585930, -763.244350),
	cpv(306.585930, -769.032110),
	cpv(307.541950, -769.032110),
	cpv(307.541950, -768.132950),
	cpv(308.342930, -768.913260),
	cpv(309.412630, -769.171650),
	cpv(310.921590, -768.551520),
	cpv(311.433180, -766.737700),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 17,
};
cpShape *level = cpPolyShapeNew(staticBody, 17, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[16] = {
	cpv(318.290650, -766.375960),
	cpv(318.290650, -765.910880),
	cpv(313.918810, -765.910880),
	cpv(314.507930, -764.412250),
	cpv(315.985870, -763.900650),
	cpv(317.045230, -764.035010),
	cpv(318.068430, -764.438070),
	cpv(318.068430, -763.538910),
	cpv(317.019410, -763.208180),
	cpv(315.929030, -763.094490),
	cpv(313.732780, -763.900650),
	cpv(312.926630, -766.081400),
	cpv(313.691450, -768.334490),
	cpv(315.763670, -769.171650),
	cpv(317.608530, -768.417170),
	cpv(318.290650, -766.375960),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 16,
};
cpShape *level = cpPolyShapeNew(staticBody, 16, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[6] = {
	cpv(317.339790, -766.655020),
	cpv(316.900560, -767.900410),
	cpv(315.774010, -768.365490),
	cpv(314.497580, -767.915910),
	cpv(313.949820, -766.649830),
	cpv(317.339790, -766.655020),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 6,
};
cpShape *level = cpPolyShapeNew(staticBody, 6, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[30] = {
	cpv(323.540960, -768.861590),
	cpv(323.540960, -767.962430),
	cpv(322.703820, -768.272470),
	cpv(321.804640, -768.375840),
	cpv(320.740110, -768.158780),
	cpv(320.388720, -767.507660),
	cpv(320.641920, -766.985750),
	cpv(321.659960, -766.629170),
	cpv(321.985500, -766.556870),
	cpv(323.422110, -765.941900),
	cpv(323.851030, -764.841210),
	cpv(323.210230, -763.564800),
	cpv(321.458400, -763.094530),
	cpv(320.486900, -763.187530),
	cpv(319.427540, -763.456240),
	cpv(319.427540, -764.438080),
	cpv(320.466210, -764.024670),
	cpv(321.479090, -763.890320),
	cpv(322.512610, -764.117700),
	cpv(322.874350, -764.768810),
	cpv(322.610790, -765.363090),
	cpv(321.468750, -765.761000),
	cpv(321.138020, -765.838500),
	cpv(319.861610, -766.406960),
	cpv(319.468870, -767.466320),
	cpv(320.047640, -768.727220),
	cpv(321.690940, -769.171640),
	cpv(322.683130, -769.094140),
	cpv(323.540960, -768.861600),
	cpv(323.540960, -768.861590),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 30,
};
cpShape *level = cpPolyShapeNew(staticBody, 30, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[30] = {
	cpv(329.060010, -768.861590),
	cpv(329.060010, -767.962430),
	cpv(328.222840, -768.272470),
	cpv(327.323680, -768.375840),
	cpv(326.259160, -768.158780),
	cpv(325.907740, -767.507660),
	cpv(326.160970, -766.985750),
	cpv(327.178980, -766.629170),
	cpv(327.504550, -766.556870),
	cpv(328.941160, -765.941900),
	cpv(329.370080, -764.841210),
	cpv(328.729280, -763.564800),
	cpv(326.977450, -763.094530),
	cpv(326.005930, -763.187530),
	cpv(324.946560, -763.456240),
	cpv(324.946560, -764.438080),
	cpv(325.985260, -764.024670),
	cpv(326.998110, -763.890320),
	cpv(328.031660, -764.117700),
	cpv(328.393400, -764.768810),
	cpv(328.129840, -765.363090),
	cpv(326.987800, -765.761000),
	cpv(326.657070, -765.838500),
	cpv(325.380660, -766.406960),
	cpv(324.987920, -767.466320),
	cpv(325.566690, -768.727220),
	cpv(327.209990, -769.171640),
	cpv(328.202180, -769.094140),
	cpv(329.060010, -768.861600),
	cpv(329.060010, -768.861590),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 30,
};
cpShape *level = cpPolyShapeNew(staticBody, 30, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[10] = {
	cpv(368.617780, -1148.107300),
	cpv(372.678860, -1148.107300),
	cpv(375.958590, -1142.975400),
	cpv(379.238320, -1148.107300),
	cpv(383.309040, -1148.107300),
	cpv(377.820320, -1139.772900),
	cpv(377.820320, -1133.705400),
	cpv(374.106510, -1133.705400),
	cpv(374.106510, -1139.772900),
	cpv(368.617780, -1148.107300),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 10,
};
cpShape *level = cpPolyShapeNew(staticBody, 10, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(388.112890, -1142.300200),
	cpv(386.357270, -1141.470600),
	cpv(385.759200, -1139.097700),
	cpv(386.357270, -1136.715000),
	cpv(388.112890, -1135.895100),
	cpv(389.839570, -1136.715000),
	cpv(390.437640, -1139.097700),
	cpv(389.839570, -1141.470600),
	cpv(388.112890, -1142.300200),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(388.112890, -1144.769700),
	cpv(392.463350, -1143.264800),
	cpv(394.035690, -1139.097700),
	cpv(392.463350, -1134.930500),
	cpv(388.112890, -1133.425600),
	cpv(383.733480, -1134.930500),
	cpv(382.161140, -1139.097700),
	cpv(383.733480, -1143.264800),
	cpv(388.112890, -1144.769700),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[22] = {
	cpv(396.437610, -1137.911200),
	cpv(396.437610, -1144.509200),
	cpv(399.910270, -1144.509200),
	cpv(399.910270, -1143.428800),
	cpv(399.900270, -1141.219800),
	cpv(399.890270, -1139.454600),
	cpv(399.957770, -1137.573500),
	cpv(400.189280, -1136.744000),
	cpv(400.739110, -1136.223100),
	cpv(401.530110, -1136.039800),
	cpv(403.227850, -1136.869400),
	cpv(403.845210, -1139.174800),
	cpv(403.845210, -1144.509200),
	cpv(407.298570, -1144.509200),
	cpv(407.298570, -1133.705400),
	cpv(403.845210, -1133.705400),
	cpv(403.845210, -1135.268100),
	cpv(402.186050, -1133.869400),
	cpv(400.266450, -1133.425600),
	cpv(397.411150, -1134.573500),
	cpv(396.436880, -1137.911200),
	cpv(396.437610, -1137.911200),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 22,
};
cpShape *level = cpPolyShapeNew(staticBody, 22, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[14] = {
	cpv(424.855520, -1142.927200),
	cpv(424.855520, -1148.715000),
	cpv(428.328170, -1148.715000),
	cpv(428.328170, -1133.705400),
	cpv(424.855520, -1133.705400),
	cpv(424.855520, -1135.268100),
	cpv(423.283170, -1133.869400),
	cpv(421.296040, -1133.425600),
	cpv(418.016310, -1135.007600),
	cpv(416.733360, -1139.097700),
	cpv(418.016310, -1143.178000),
	cpv(421.296040, -1144.769700),
	cpv(423.273530, -1144.316300),
	cpv(424.855520, -1142.927200),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 14,
};
cpShape *level = cpPolyShapeNew(staticBody, 14, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(422.579000, -1135.933700),
	cpv(424.267090, -1136.744000),
	cpv(424.855520, -1139.097700),
	cpv(424.267090, -1141.451300),
	cpv(422.579000, -1142.261600),
	cpv(420.890900, -1141.451300),
	cpv(420.312130, -1139.097700),
	cpv(420.890900, -1136.744000),
	cpv(422.579000, -1135.933700),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(431.665780, -1144.509200),
	cpv(435.119140, -1144.509200),
	cpv(435.119140, -1133.705400),
	cpv(431.665780, -1133.705400),
	cpv(431.665780, -1144.509200),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(431.665780, -1148.715000),
	cpv(435.119140, -1148.715000),
	cpv(435.119140, -1145.898300),
	cpv(431.665780, -1145.898300),
	cpv(431.665780, -1148.715000),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[14] = {
	cpv(445.807210, -1142.927200),
	cpv(445.807210, -1148.715000),
	cpv(449.279860, -1148.715000),
	cpv(449.279860, -1133.705400),
	cpv(445.807210, -1133.705400),
	cpv(445.807210, -1135.268100),
	cpv(444.234860, -1133.869400),
	cpv(442.247730, -1133.425600),
	cpv(438.968000, -1135.007600),
	cpv(437.685050, -1139.097700),
	cpv(438.968000, -1143.178000),
	cpv(442.247730, -1144.769700),
	cpv(444.225220, -1144.316300),
	cpv(445.807210, -1142.927200),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 14,
};
cpShape *level = cpPolyShapeNew(staticBody, 14, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[9] = {
	cpv(443.530690, -1135.933700),
	cpv(445.218780, -1136.744000),
	cpv(445.807210, -1139.097700),
	cpv(445.218780, -1141.451300),
	cpv(443.530690, -1142.261600),
	cpv(441.842590, -1141.451300),
	cpv(441.263810, -1139.097700),
	cpv(441.842590, -1136.744000),
	cpv(443.530690, -1135.933700),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 9,
};
cpShape *level = cpPolyShapeNew(staticBody, 9, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(459.485620, -1144.509200),
	cpv(462.938980, -1144.509200),
	cpv(462.938980, -1133.705400),
	cpv(459.485620, -1133.705400),
	cpv(459.485620, -1144.509200),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(459.485620, -1148.715000),
	cpv(462.938980, -1148.715000),
	cpv(462.938980, -1145.898300),
	cpv(459.485620, -1145.898300),
	cpv(459.485620, -1148.715000),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[19] = {
	cpv(470.048280, -1147.576700),
	cpv(470.048280, -1144.509200),
	cpv(473.607750, -1144.509200),
	cpv(473.607750, -1142.039800),
	cpv(470.048280, -1142.039800),
	cpv(470.048280, -1137.457800),
	cpv(470.347310, -1136.435300),
	cpv(471.533800, -1136.174800),
	cpv(473.308710, -1136.174800),
	cpv(473.308710, -1133.705400),
	cpv(470.347310, -1133.705400),
	cpv(467.443790, -1134.554300),
	cpv(466.594910, -1137.457800),
	cpv(466.594910, -1142.039800),
	cpv(464.877880, -1142.039800),
	cpv(464.877880, -1144.509200),
	cpv(466.594910, -1144.509200),
	cpv(466.594910, -1147.576700),
	cpv(470.048280, -1147.576700),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 19,
};
cpShape *level = cpPolyShapeNew(staticBody, 19, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[7] = {
	cpv(476.839250, -1148.107300),
	cpv(480.311900, -1148.107300),
	cpv(480.311900, -1142.580000),
	cpv(479.819940, -1138.547800),
	cpv(477.331210, -1138.547800),
	cpv(476.839250, -1142.580000),
	cpv(476.839250, -1148.107300),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 7,
};
cpShape *level = cpPolyShapeNew(staticBody, 7, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[5] = {
	cpv(476.839250, -1137.139500),
	cpv(480.311900, -1137.139500),
	cpv(480.311900, -1133.705400),
	cpv(476.839250, -1133.705400),
	cpv(476.839250, -1137.139500),
};
static shape_user_data user_data = {
	.color = { 0, 0, 0 },
	.filled = false,
	.verts = verts,
	.nr_verts = 5,
};
cpShape *level = cpPolyShapeNew(staticBody, 5, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
