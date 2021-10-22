{
static const cpVect verts[5] = {
	cpv(345.739850, -902.326430),
	cpv(392.137830, -1032.540140),
	cpv(257.434000, -1086.421680),
	cpv(287.368190, -843.954770),
	cpv(345.739850, -902.326430),
};
static shape_user_data user_data = {
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
	cpv(786.341660, 23.258330),
	cpv(847.724990, 42.308330),
	cpv(848.783320, -275.191670),
	cpv(782.108320, -274.133320),
};
static shape_user_data user_data = {
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
	cpv(402.541890, 311.516930),
	cpv(393.619360, 23.610930),
	cpv(453.484590, 1.457515),
	cpv(443.293670, 343.207080),
	cpv(402.541890, 311.516930),
};
static shape_user_data user_data = {
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
	cpv(-21.733077, 194.671250),
	cpv(-20.088691, 246.736850),
	cpv(338.970420, 243.043120),
	cpv(334.833510, 194.671250),
	cpv(-21.733077, 194.671250),
};
static shape_user_data user_data = {
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
	cpv(473.456290, -561.693420),
	cpv(459.494330, -555.030240),
	cpv(468.640580, -538.128040),
	cpv(482.004610, -551.427850),
	cpv(473.456290, -561.693420),
};
static shape_user_data user_data = {
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
