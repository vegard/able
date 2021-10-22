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
	cpv(391.429390, 335.858600),
	cpv(393.619360, 23.610930),
	cpv(453.484590, 1.457515),
	cpv(443.293670, 343.207080),
	cpv(391.429390, 335.858600),
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
	cpv(112.090420, -281.783420),
	cpv(112.253200, -200.520170),
	cpv(304.678920, -243.943760),
	cpv(311.822670, -282.308340),
	cpv(112.090420, -281.783420),
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
static const cpVect verts[26] = {
	cpv(57.554885, 155.498430),
	cpv(58.007161, 157.256680),
	cpv(58.380259, 159.207670),
	cpv(58.668131, 160.750290),
	cpv(57.684439, 160.292190),
	cpv(56.136748, 159.930040),
	cpv(54.557830, 160.546440),
	cpv(53.419973, 161.767800),
	cpv(53.273353, 163.350890),
	cpv(54.613521, 164.148170),
	cpv(56.872919, 164.770890),
	cpv(57.881979, 165.756340),
	cpv(58.049910, 167.124660),
	cpv(57.255980, 168.469940),
	cpv(55.657171, 168.908680),
	cpv(53.914528, 168.682360),
	cpv(52.920448, 167.761150),
	cpv(51.903250, 166.461220),
	cpv(51.051266, 165.028320),
	cpv(50.830766, 163.197770),
	cpv(51.137141, 161.003170),
	cpv(52.854479, 157.478750),
	cpv(54.287923, 156.333670),
	cpv(55.078584, 155.963020),
	cpv(55.617540, 155.731720),
	cpv(57.554885, 155.498430),
};
static shape_user_data user_data = {
	.verts = verts,
	.nr_verts = 26,
};
cpShape *level = cpPolyShapeNew(staticBody, 26, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[16] = {
	cpv(62.007706, 157.385040),
	cpv(61.177126, 158.588330),
	cpv(59.938189, 160.013870),
	cpv(58.926993, 162.655990),
	cpv(59.262419, 165.086320),
	cpv(60.437595, 168.054390),
	cpv(61.717062, 169.275570),
	cpv(62.990273, 168.599640),
	cpv(64.705092, 165.849350),
	cpv(65.938846, 163.681470),
	cpv(66.621353, 161.082060),
	cpv(66.314557, 159.473570),
	cpv(65.291089, 157.757260),
	cpv(64.024075, 156.774050),
	cpv(62.430745, 156.971840),
	cpv(62.007706, 157.385040),
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
static const cpVect verts[38] = {
	cpv(68.430058, 157.283070),
	cpv(68.031176, 158.979260),
	cpv(67.712039, 161.043370),
	cpv(66.974316, 165.084520),
	cpv(66.519244, 167.061580),
	cpv(67.060934, 167.835360),
	cpv(68.301604, 168.551720),
	cpv(69.544251, 169.050110),
	cpv(69.532081, 167.468130),
	cpv(69.468411, 167.054060),
	cpv(69.372041, 165.163260),
	cpv(69.586503, 162.732770),
	cpv(69.757396, 162.687870),
	cpv(70.228371, 164.115580),
	cpv(70.802904, 165.710490),
	cpv(71.641298, 167.633880),
	cpv(72.045706, 168.558420),
	cpv(72.628925, 168.552420),
	cpv(73.525213, 168.552420),
	cpv(73.568163, 167.843100),
	cpv(73.534753, 167.498480),
	cpv(73.532853, 165.174130),
	cpv(73.625283, 164.052410),
	cpv(73.824404, 162.306100),
	cpv(74.038113, 160.796980),
	cpv(74.124643, 159.221350),
	cpv(73.771346, 157.629230),
	cpv(72.309358, 157.125770),
	cpv(71.946116, 158.061690),
	cpv(71.853546, 159.591090),
	cpv(71.675989, 162.192040),
	cpv(71.641309, 163.657570),
	cpv(71.295866, 163.174910),
	cpv(70.938058, 162.153550),
	cpv(70.558866, 160.777460),
	cpv(70.119791, 159.018020),
	cpv(69.757395, 157.436890),
	cpv(68.430091, 157.283150),
};
static shape_user_data user_data = {
	.verts = verts,
	.nr_verts = 38,
};
cpShape *level = cpPolyShapeNew(staticBody, 38, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[27] = {
	cpv(75.409006, 157.538030),
	cpv(74.938022, 159.424650),
	cpv(75.323142, 160.038520),
	cpv(76.593803, 160.138320),
	cpv(77.678221, 160.087320),
	cpv(77.442410, 161.540370),
	cpv(76.932712, 163.801930),
	cpv(76.686391, 165.594900),
	cpv(76.479374, 167.552020),
	cpv(77.442927, 168.066420),
	cpv(78.797311, 168.540380),
	cpv(79.221822, 167.493520),
	cpv(79.262412, 166.118000),
	cpv(79.433681, 164.217300),
	cpv(79.721255, 162.457840),
	cpv(79.776205, 160.851990),
	cpv(80.964322, 161.017800),
	cpv(83.198280, 161.119750),
	cpv(83.886734, 160.998870),
	cpv(84.307818, 159.907780),
	cpv(84.340008, 158.281880),
	cpv(82.496496, 157.526410),
	cpv(81.317614, 157.294560),
	cpv(78.968552, 156.807180),
	cpv(77.335639, 156.569120),
	cpv(75.751459, 156.620120),
	cpv(75.409001, 157.538020),
};
static shape_user_data user_data = {
	.verts = verts,
	.nr_verts = 27,
};
cpShape *level = cpPolyShapeNew(staticBody, 27, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[31] = {
	cpv(85.684756, 156.518220),
	cpv(85.557970, 158.086210),
	cpv(85.333243, 160.266330),
	cpv(84.734629, 163.466380),
	cpv(84.271956, 165.492440),
	cpv(83.929495, 167.532030),
	cpv(84.863301, 167.328130),
	cpv(85.996170, 167.554530),
	cpv(86.585431, 167.442660),
	cpv(86.368903, 165.747590),
	cpv(86.241502, 163.350830),
	cpv(86.339772, 162.635230),
	cpv(86.669582, 163.095880),
	cpv(87.003004, 164.240020),
	cpv(87.525877, 166.002310),
	cpv(87.954011, 167.481010),
	cpv(89.007835, 167.409010),
	cpv(90.361411, 166.801250),
	cpv(91.169347, 166.584540),
	cpv(89.979500, 165.303210),
	cpv(88.601154, 163.368830),
	cpv(88.502514, 163.151080),
	cpv(88.372057, 162.957060),
	cpv(87.823300, 162.047030),
	cpv(89.195650, 161.362430),
	cpv(90.443440, 160.476150),
	cpv(90.960319, 158.950820),
	cpv(90.289965, 157.305720),
	cpv(89.152845, 156.416400),
	cpv(87.940032, 155.979040),
	cpv(85.684758, 156.518260),
};
static shape_user_data user_data = {
	.verts = verts,
	.nr_verts = 31,
};
cpShape *level = cpPolyShapeNew(staticBody, 31, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[14] = {
	cpv(93.734102, 156.720910),
	cpv(92.896420, 157.251490),
	cpv(92.138470, 159.287210),
	cpv(91.650928, 161.701570),
	cpv(91.779096, 166.017220),
	cpv(92.415570, 167.095480),
	cpv(93.477223, 167.113680),
	cpv(94.513629, 166.472570),
	cpv(96.251545, 164.243810),
	cpv(96.553520, 162.131010),
	cpv(96.695839, 159.827790),
	cpv(96.468078, 157.963510),
	cpv(95.532080, 156.447200),
	cpv(93.734102, 156.720950),
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
static const cpVect verts[27] = {
	cpv(97.972835, 155.612980),
	cpv(97.602218, 158.120000),
	cpv(97.365742, 160.569470),
	cpv(97.287822, 161.326830),
	cpv(97.159383, 163.211190),
	cpv(97.064933, 164.487970),
	cpv(97.032893, 165.855160),
	cpv(97.758801, 166.736490),
	cpv(98.907051, 166.797990),
	cpv(99.717030, 166.857990),
	cpv(100.605770, 166.925190),
	cpv(101.370590, 166.041490),
	cpv(101.440790, 164.913140),
	cpv(100.555880, 164.670160),
	cpv(99.664327, 164.780200),
	cpv(98.744325, 164.697000),
	cpv(98.522088, 164.043100),
	cpv(98.868907, 162.616490),
	cpv(99.320905, 160.931620),
	cpv(99.748475, 159.047230),
	cpv(99.841265, 158.724380),
	cpv(99.942638, 158.014310),
	cpv(99.989158, 157.048140),
	cpv(99.587205, 156.018970),
	cpv(98.656784, 155.643880),
	cpv(98.379080, 155.526820),
	cpv(97.972835, 155.612980),
};
static shape_user_data user_data = {
	.verts = verts,
	.nr_verts = 27,
};
cpShape *level = cpPolyShapeNew(staticBody, 27, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[31] = {
	cpv(108.505380, 155.644450),
	cpv(108.334160, 156.971920),
	cpv(107.682840, 157.917880),
	cpv(106.541300, 157.307720),
	cpv(105.251500, 157.288020),
	cpv(104.922630, 158.234630),
	cpv(105.731860, 159.392030),
	cpv(106.770370, 160.450810),
	cpv(107.820420, 161.776080),
	cpv(108.491140, 163.598680),
	cpv(108.497140, 165.116020),
	cpv(107.553210, 166.347780),
	cpv(105.437900, 167.112340),
	cpv(104.010510, 167.269750),
	cpv(102.775620, 166.808710),
	cpv(102.094000, 165.313370),
	cpv(102.037700, 164.229460),
	cpv(102.253550, 163.925390),
	cpv(103.400920, 164.494060),
	cpv(104.607300, 164.389360),
	cpv(105.796370, 164.173550),
	cpv(106.406640, 163.925390),
	cpv(106.090590, 162.935100),
	cpv(103.739470, 160.895160),
	cpv(102.852980, 159.753290),
	cpv(102.509780, 158.216240),
	cpv(102.981470, 156.023650),
	cpv(104.071720, 154.908440),
	cpv(105.145470, 155.117240),
	cpv(106.392940, 155.464470),
	cpv(108.504930, 155.644440),
};
static shape_user_data user_data = {
	.verts = verts,
	.nr_verts = 31,
};
cpShape *level = cpPolyShapeNew(staticBody, 31, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[25] = {
	cpv(61.658079, 174.315600),
	cpv(59.735384, 174.347000),
	cpv(57.239028, 176.863260),
	cpv(55.832479, 178.864680),
	cpv(55.435863, 181.432950),
	cpv(56.024080, 183.763500),
	cpv(56.874640, 185.781100),
	cpv(58.115474, 185.199640),
	cpv(60.236381, 182.392760),
	cpv(60.571076, 182.283940),
	cpv(61.595927, 184.066730),
	cpv(62.203073, 186.033730),
	cpv(62.869125, 187.079250),
	cpv(64.129398, 186.309550),
	cpv(65.082256, 185.026090),
	cpv(64.622000, 184.224410),
	cpv(63.850881, 183.647140),
	cpv(63.321094, 183.205430),
	cpv(62.324165, 182.103720),
	cpv(62.470469, 181.068290),
	cpv(63.224802, 179.231090),
	cpv(63.991365, 177.184000),
	cpv(63.937145, 175.232980),
	cpv(62.625765, 174.553940),
	cpv(61.658082, 174.315510),
};
static shape_user_data user_data = {
	.verts = verts,
	.nr_verts = 25,
};
cpShape *level = cpPolyShapeNew(staticBody, 25, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[42] = {
	cpv(66.804914, 175.613620),
	cpv(66.971415, 177.181960),
	cpv(67.257321, 179.580260),
	cpv(67.432878, 181.417590),
	cpv(67.531528, 183.185220),
	cpv(67.713191, 184.988080),
	cpv(68.258153, 185.132310),
	cpv(69.232682, 184.931880),
	cpv(70.402838, 184.771650),
	cpv(70.802073, 184.421760),
	cpv(71.138625, 182.712110),
	cpv(71.359852, 181.148290),
	cpv(71.410972, 180.617320),
	cpv(71.863343, 182.030180),
	cpv(72.375579, 183.617910),
	cpv(72.738879, 184.555310),
	cpv(73.707682, 184.843770),
	cpv(74.614614, 184.951220),
	cpv(75.274763, 183.208960),
	cpv(75.894535, 180.300640),
	cpv(76.287264, 178.833540),
	cpv(76.879035, 177.124050),
	cpv(76.943815, 176.056100),
	cpv(76.341936, 175.720670),
	cpv(75.024772, 175.022170),
	cpv(74.549080, 175.360660),
	cpv(74.486830, 176.386800),
	cpv(74.014836, 178.716650),
	cpv(73.586537, 179.796160),
	cpv(72.659830, 178.988360),
	cpv(71.830555, 178.353860),
	cpv(70.801203, 179.147170),
	cpv(70.099486, 180.585090),
	cpv(69.740263, 180.878050),
	cpv(69.650733, 179.579770),
	cpv(69.541953, 177.452910),
	cpv(69.348928, 175.577480),
	cpv(69.113780, 174.203590),
	cpv(68.731804, 174.394850),
	cpv(67.381752, 175.168370),
	cpv(67.357982, 175.174370),
	cpv(66.804903, 175.613510),
};
static shape_user_data user_data = {
	.verts = verts,
	.nr_verts = 42,
};
cpShape *level = cpPolyShapeNew(staticBody, 42, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpShapeSetFilter(level, cpShapeFilterNew(0, 1 << CP_CATEGORY_LEVEL, ~(1 << CP_CATEGORY_RAGDOLL)));
cpShapeSetUserData(level, &user_data);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[17] = {
	cpv(80.126023, 174.387740),
	cpv(79.174864, 175.377880),
	cpv(78.303663, 176.744920),
	cpv(77.431934, 179.022640),
	cpv(77.347744, 181.887390),
	cpv(77.825098, 183.329460),
	cpv(78.912457, 184.754770),
	cpv(80.315271, 185.294410),
	cpv(81.970422, 185.049160),
	cpv(84.364546, 183.257280),
	cpv(85.817756, 180.733410),
	cpv(86.245471, 178.277800),
	cpv(85.653070, 175.954550),
	cpv(84.506233, 174.593280),
	cpv(82.977725, 173.668090),
	cpv(81.379466, 173.688390),
	cpv(80.126019, 174.387740),
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
static const cpVect verts[22] = {
	cpv(88.724177, 173.955070),
	cpv(88.494456, 175.775420),
	cpv(88.119507, 178.606440),
	cpv(87.507691, 181.561060),
	cpv(87.207466, 183.329250),
	cpv(87.089305, 184.410970),
	cpv(88.314717, 184.919610),
	cpv(89.868501, 185.204160),
	cpv(90.304112, 184.910220),
	cpv(90.175967, 183.275360),
	cpv(90.165197, 180.588540),
	cpv(90.116777, 179.507500),
	cpv(90.722208, 179.452200),
	cpv(92.146405, 179.115330),
	cpv(93.828207, 178.249870),
	cpv(94.840565, 177.128480),
	cpv(95.066924, 175.685320),
	cpv(94.266330, 174.204620),
	cpv(92.816088, 173.360010),
	cpv(91.681661, 173.135550),
	cpv(89.995499, 173.183950),
	cpv(88.724170, 173.955040),
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
static const cpVect verts[13] = {
	cpv(62.520205, 161.217380),
	cpv(62.094313, 161.454860),
	cpv(61.767747, 162.121340),
	cpv(61.178164, 163.002090),
	cpv(60.768784, 163.916760),
	cpv(60.816304, 164.137470),
	cpv(61.180105, 164.373410),
	cpv(61.763321, 164.534670),
	cpv(62.271143, 164.442770),
	cpv(63.183461, 163.664450),
	cpv(63.427572, 162.740640),
	cpv(63.214074, 162.004600),
	cpv(62.520205, 161.217360),
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
static const cpVect verts[14] = {
	cpv(60.901214, 176.912380),
	cpv(60.507662, 176.767390),
	cpv(59.881554, 177.203500),
	cpv(58.647127, 178.455180),
	cpv(58.189124, 179.192420),
	cpv(58.053976, 179.980880),
	cpv(58.307201, 180.573200),
	cpv(58.780643, 180.515700),
	cpv(59.474209, 180.069550),
	cpv(60.339301, 179.108030),
	cpv(60.805003, 178.243230),
	cpv(61.076815, 177.317300),
	cpv(60.961601, 176.930700),
	cpv(60.901211, 176.912400),
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
static const cpVect verts[14] = {
	cpv(81.488403, 177.416610),
	cpv(80.902808, 177.697370),
	cpv(80.224409, 178.214040),
	cpv(79.756572, 178.784300),
	cpv(79.403272, 180.022560),
	cpv(79.978733, 180.894110),
	cpv(80.837800, 180.806910),
	cpv(81.475983, 180.478580),
	cpv(82.134128, 179.988430),
	cpv(82.741809, 179.251850),
	cpv(82.731909, 178.292880),
	cpv(82.019103, 177.534600),
	cpv(81.488430, 177.416460),
	cpv(81.488403, 177.416610),
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
static const cpVect verts[14] = {
	cpv(87.755420, 158.271390),
	cpv(86.799124, 158.600220),
	cpv(86.665476, 159.244570),
	cpv(86.726036, 159.496890),
	cpv(86.805656, 159.521790),
	cpv(87.070189, 159.633360),
	cpv(87.163229, 159.633520),
	cpv(87.497710, 159.712120),
	cpv(87.791526, 159.626520),
	cpv(87.998963, 159.384900),
	cpv(88.148979, 159.028170),
	cpv(88.212019, 158.685790),
	cpv(88.136359, 158.285170),
	cpv(87.755422, 158.271470),
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
static const cpVect verts[14] = {
	cpv(90.676917, 175.435070),
	cpv(90.364422, 175.472270),
	cpv(90.125325, 175.795890),
	cpv(89.943594, 176.230090),
	cpv(89.885294, 176.478350),
	cpv(89.881994, 176.628840),
	cpv(90.249477, 176.694940),
	cpv(90.998798, 176.622740),
	cpv(91.286980, 176.522170),
	cpv(91.481770, 176.203590),
	cpv(91.526500, 175.827710),
	cpv(91.352819, 175.506010),
	cpv(90.910145, 175.415610),
	cpv(90.676911, 175.435110),
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
static const cpVect verts[11] = {
	cpv(93.719593, 159.785350),
	cpv(93.320465, 160.136520),
	cpv(93.145415, 160.664380),
	cpv(93.061455, 161.435340),
	cpv(93.259679, 162.935460),
	cpv(93.579770, 162.805570),
	cpv(93.920037, 162.338450),
	cpv(94.122242, 161.368580),
	cpv(94.254920, 160.355330),
	cpv(93.719588, 159.785320),
	cpv(93.719593, 159.785350),
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
static const cpVect verts[14] = {
	cpv(111.427660, 158.557820),
	cpv(111.081560, 158.554820),
	cpv(110.891480, 158.894380),
	cpv(110.733050, 159.552480),
	cpv(110.930800, 160.016310),
	cpv(111.306350, 160.193580),
	cpv(111.797070, 160.194110),
	cpv(112.052590, 160.080100),
	cpv(112.248940, 159.884450),
	cpv(112.363000, 159.332320),
	cpv(112.219760, 158.922100),
	cpv(111.701000, 158.543130),
	cpv(111.427640, 158.558430),
	cpv(111.427660, 158.557820),
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
static const cpVect verts[14] = {
	cpv(111.251390, 162.545410),
	cpv(110.905290, 162.542410),
	cpv(110.715210, 162.881970),
	cpv(110.556780, 163.540070),
	cpv(110.754530, 164.003890),
	cpv(111.130080, 164.181170),
	cpv(111.620810, 164.181700),
	cpv(111.876330, 164.067690),
	cpv(112.072680, 163.872040),
	cpv(112.186740, 163.319910),
	cpv(112.043500, 162.909680),
	cpv(111.524730, 162.530720),
	cpv(111.251370, 162.546020),
	cpv(111.251390, 162.545410),
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
static const cpVect verts[14] = {
	cpv(242.412350, -246.512530),
	cpv(243.967810, -246.512530),
	cpv(245.936680, -241.262210),
	cpv(247.915890, -246.512530),
	cpv(249.471350, -246.512530),
	cpv(249.471350, -238.797240),
	cpv(248.453330, -238.797240),
	cpv(248.453330, -245.572020),
	cpv(246.463780, -240.280360),
	cpv(245.414750, -240.280360),
	cpv(243.425210, -245.572020),
	cpv(243.425210, -238.797240),
	cpv(242.412350, -238.797240),
	cpv(242.412350, -246.512530),
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
	cpv(237.213700, -245.804570),
	cpv(235.405030, -244.957070),
	cpv(234.738400, -242.647140),
	cpv(235.405030, -240.342370),
	cpv(237.213700, -239.494880),
	cpv(239.012040, -240.342370),
	cpv(239.678670, -242.647140),
	cpv(239.012040, -244.957070),
	cpv(237.213700, -245.804570),
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
	cpv(237.213700, -246.652060),
	cpv(239.807860, -245.561690),
	cpv(240.779380, -242.647140),
	cpv(239.807860, -239.732590),
	cpv(237.213700, -238.647380),
	cpv(234.609210, -239.732590),
	cpv(233.637690, -242.647140),
	cpv(234.609210, -245.561690),
	cpv(237.213700, -246.652060),
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
	cpv(232.459470, -245.918260),
	cpv(232.459470, -244.817550),
	cpv(231.332920, -245.551350),
	cpv(230.066850, -245.794230),
	cpv(228.041140, -244.982910),
	cpv(227.338340, -242.647140),
	cpv(228.041140, -240.311360),
	cpv(230.066850, -239.505210),
	cpv(231.332920, -239.748090),
	cpv(232.459470, -240.481890),
	cpv(232.459470, -239.391520),
	cpv(231.296750, -238.833420),
	cpv(230.004840, -238.647380),
	cpv(227.245320, -239.717080),
	cpv(226.237630, -242.647140),
	cpv(227.245320, -245.577190),
	cpv(230.004840, -246.652060),
	cpv(231.307090, -246.466020),
	cpv(232.459470, -245.918260),
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
	cpv(223.405760, -240.109820),
	cpv(224.496130, -240.109820),
	cpv(224.496130, -238.797240),
	cpv(223.405760, -238.797240),
	cpv(223.405760, -240.109820),
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
	cpv(216.615480, -246.512530),
	cpv(221.493730, -246.512530),
	cpv(221.493730, -245.634030),
	cpv(217.659340, -245.634030),
	cpv(217.659340, -243.349940),
	cpv(221.333540, -243.349940),
	cpv(221.333540, -242.471440),
	cpv(217.659340, -242.471440),
	cpv(217.659340, -239.675740),
	cpv(221.586750, -239.675740),
	cpv(221.586750, -238.797240),
	cpv(216.615480, -238.797240),
	cpv(216.615480, -246.512530),
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
	cpv(214.992840, -245.918260),
	cpv(214.992840, -244.817550),
	cpv(213.866290, -245.551350),
	cpv(212.600220, -245.794230),
	cpv(210.574500, -244.982910),
	cpv(209.871700, -242.647140),
	cpv(210.574500, -240.311360),
	cpv(212.600220, -239.505210),
	cpv(213.866290, -239.748090),
	cpv(214.992840, -240.481890),
	cpv(214.992840, -239.391520),
	cpv(213.830120, -238.833420),
	cpv(212.538210, -238.647380),
	cpv(209.778680, -239.717080),
	cpv(208.770990, -242.647140),
	cpv(209.778680, -245.577190),
	cpv(212.538210, -246.652060),
	cpv(213.840450, -246.466020),
	cpv(214.992840, -245.918260),
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
	cpv(201.298580, -246.512530),
	cpv(202.704180, -246.512530),
	cpv(206.125160, -240.058150),
	cpv(206.125160, -246.512530),
	cpv(207.138020, -246.512530),
	cpv(207.138020, -238.797240),
	cpv(205.732420, -238.797240),
	cpv(202.311440, -245.251630),
	cpv(202.311440, -238.797240),
	cpv(201.298580, -238.797240),
	cpv(201.298580, -246.512530),
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
	cpv(196.642530, -245.484170),
	cpv(195.226600, -241.644620),
	cpv(198.063640, -241.644620),
	cpv(196.642530, -245.484170),
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
	cpv(196.053420, -246.512530),
	cpv(197.236810, -246.512530),
	cpv(200.177200, -238.797240),
	cpv(199.092000, -238.797240),
	cpv(198.389200, -240.776450),
	cpv(194.911380, -240.776450),
	cpv(194.208580, -238.797240),
	cpv(193.107870, -238.797240),
	cpv(196.053420, -246.512530),
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
	cpv(187.924720, -246.512530),
	cpv(188.968590, -246.512530),
	cpv(188.968590, -239.675740),
	cpv(192.725460, -239.675740),
	cpv(192.725460, -238.797240),
	cpv(187.924720, -238.797240),
	cpv(187.924720, -246.512530),
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
	cpv(180.007890, -246.512530),
	cpv(181.413490, -246.512530),
	cpv(184.834470, -240.058150),
	cpv(184.834470, -246.512530),
	cpv(185.847330, -246.512530),
	cpv(185.847330, -238.797240),
	cpv(184.441730, -238.797240),
	cpv(181.020750, -245.251630),
	cpv(181.020750, -238.797240),
	cpv(180.007890, -238.797240),
	cpv(180.007890, -246.512530),
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
	cpv(173.310630, -246.512530),
	cpv(178.188880, -246.512530),
	cpv(178.188880, -245.634030),
	cpv(174.354490, -245.634030),
	cpv(174.354490, -243.349940),
	cpv(178.028680, -243.349940),
	cpv(178.028680, -242.471440),
	cpv(174.354490, -242.471440),
	cpv(174.354490, -239.675740),
	cpv(178.281900, -239.675740),
	cpv(178.281900, -238.797240),
	cpv(173.310630, -238.797240),
	cpv(173.310630, -246.512530),
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
	cpv(167.967280, -245.654710),
	cpv(167.967280, -242.755660),
	cpv(169.279870, -242.755660),
	cpv(170.406410, -243.132900),
	cpv(170.804320, -244.207770),
	cpv(170.406410, -245.277470),
	cpv(169.279870, -245.654710),
	cpv(167.967280, -245.654710),
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
	cpv(166.923420, -246.512530),
	cpv(169.279870, -246.512530),
	cpv(171.238400, -245.923420),
	cpv(171.905030, -244.207770),
	cpv(171.238400, -242.481770),
	cpv(169.279870, -241.897830),
	cpv(167.967280, -241.897830),
	cpv(167.967280, -238.797240),
	cpv(166.923420, -238.797240),
	cpv(166.923420, -246.512530),
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
	cpv(161.580080, -245.654710),
	cpv(161.580080, -242.755660),
	cpv(162.892660, -242.755660),
	cpv(164.019200, -243.132900),
	cpv(164.417110, -244.207770),
	cpv(164.019200, -245.277470),
	cpv(162.892660, -245.654710),
	cpv(161.580080, -245.654710),
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
	cpv(160.536210, -246.512530),
	cpv(162.892660, -246.512530),
	cpv(164.851190, -245.923420),
	cpv(165.517820, -244.207770),
	cpv(164.851190, -242.481770),
	cpv(162.892660, -241.897830),
	cpv(161.580080, -241.897830),
	cpv(161.580080, -238.797240),
	cpv(160.536210, -238.797240),
	cpv(160.536210, -246.512530),
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
	cpv(155.880160, -245.484170),
	cpv(154.464230, -241.644620),
	cpv(157.301270, -241.644620),
	cpv(155.880160, -245.484170),
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
	cpv(155.291050, -246.512530),
	cpv(156.474450, -246.512530),
	cpv(159.414830, -238.797240),
	cpv(158.329630, -238.797240),
	cpv(157.626830, -240.776450),
	cpv(154.149010, -240.776450),
	cpv(153.446210, -238.797240),
	cpv(152.345500, -238.797240),
	cpv(155.291050, -246.512530),
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
	cpv(145.343340, -246.512530),
	cpv(146.387210, -246.512530),
	cpv(146.387210, -243.349940),
	cpv(150.180260, -243.349940),
	cpv(150.180260, -246.512530),
	cpv(151.224120, -246.512530),
	cpv(151.224120, -238.797240),
	cpv(150.180260, -238.797240),
	cpv(150.180260, -242.471440),
	cpv(146.387210, -242.471440),
	cpv(146.387210, -238.797240),
	cpv(145.343340, -238.797240),
	cpv(145.343340, -246.512530),
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
	cpv(174.411320, 200.113350),
	cpv(191.516570, -145.733431),
	cpv(236.711850, -191.196515),
	cpv(216.105360, 209.735040),
	cpv(174.411320, 200.113350),
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
