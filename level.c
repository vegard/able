{
static const cpVect verts[20] = {
	cpv(-13.229167, 181.857140),
	cpv(25.702381, 175.053570),
	cpv(146.421310, 174.720350),
	cpv(197.254470, 182.359530),
	cpv(236.329650, 183.181200),
	cpv(300.640130, 180.351040),
	cpv(320.025040, 179.967260),
	cpv(343.202390, 179.967260),
	cpv(345.470240, 195.842260),
	cpv(315.232150, 203.779760),
	cpv(271.386910, 217.008930),
	cpv(192.071220, 224.190480),
	cpv(143.252970, 224.190480),
	cpv(109.613090, 212.473210),
	cpv(73.139066, 210.584130),
	cpv(48.940099, 209.449400),
	cpv(18.898809, 206.425590),
	cpv(-9.071428, 204.913690),
	cpv(-11.717262, 184.880950),
	cpv(-13.229167, 181.857140),
};
cpShape *level = cpPolyShapeNew(staticBody, 20, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[12] = {
	cpv(-6.425595, -9.020832),
	cpv(-12.903903, 9.933430),
	cpv(-17.957877, 44.029770),
	cpv(-18.341154, 135.192670),
	cpv(-23.434524, 200.755950),
	cpv(-4.604658, 207.562440),
	cpv(16.109791, 200.855410),
	cpv(18.511421, 178.681460),
	cpv(16.448426, 102.197030),
	cpv(12.453680, 45.855810),
	cpv(10.583333, -13.556546),
	cpv(-6.425595, -9.020832),
};
cpShape *level = cpPolyShapeNew(staticBody, 12, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[17] = {
	cpv(319.389890, -11.288689),
	cpv(313.267720, 14.701010),
	cpv(309.452290, 35.412530),
	cpv(304.720220, 61.935390),
	cpv(301.784300, 84.042750),
	cpv(300.437170, 103.424930),
	cpv(298.641140, 134.405280),
	cpv(298.223220, 173.647140),
	cpv(298.223220, 183.369050),
	cpv(314.508430, 189.038690),
	cpv(332.619050, 189.038690),
	cpv(338.288680, 174.578900),
	cpv(338.224180, 22.768910),
	cpv(336.725350, 2.508637),
	cpv(336.776750, -11.666665),
	cpv(319.389870, -11.288689),
	cpv(319.389890, -11.288689),
};
cpShape *level = cpPolyShapeNew(staticBody, 17, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[15] = {
	cpv(122.464280, 180.723210),
	cpv(119.615770, 157.091780),
	cpv(113.726300, 111.874470),
	cpv(111.903360, 89.386060),
	cpv(111.174650, 72.200550),
	cpv(109.251040, 32.991820),
	cpv(120.952380, 27.264880),
	cpv(122.088720, 46.714730),
	cpv(120.568780, 71.366930),
	cpv(119.818500, 98.158350),
	cpv(120.049900, 118.558350),
	cpv(127.806120, 149.417740),
	cpv(131.144170, 164.268870),
	cpv(131.535730, 182.235120),
	cpv(122.464280, 180.723210),
};
cpShape *level = cpPolyShapeNew(staticBody, 15, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[15] = {
	cpv(205.619050, 26.508930),
	cpv(190.438550, 56.276060),
	cpv(180.993190, 82.059810),
	cpv(177.624510, 119.475970),
	cpv(175.870770, 160.474310),
	cpv(172.357140, 189.005360),
	cpv(183.234480, 193.696260),
	cpv(188.228780, 178.519530),
	cpv(190.927150, 159.919560),
	cpv(194.844530, 140.145890),
	cpv(195.375750, 125.282060),
	cpv(195.522680, 72.673030),
	cpv(203.542370, 53.436440),
	cpv(210.129930, 36.739120),
	cpv(205.619050, 26.508930),
};
cpShape *level = cpPolyShapeNew(staticBody, 15, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[20] = {
	cpv(-23.434524, 6.098220),
	cpv(8.399338, 9.846970),
	cpv(57.324164, -23.964008),
	cpv(92.523363, -41.560003),
	cpv(150.333000, -60.323082),
	cpv(188.210210, -54.483402),
	cpv(230.586550, -41.899733),
	cpv(259.335990, -20.914314),
	cpv(298.735730, -3.508717),
	cpv(336.020830, -1.461308),
	cpv(335.027840, -20.447089),
	cpv(253.131480, -81.052492),
	cpv(207.391580, -102.297531),
	cpv(169.962130, -92.760393),
	cpv(122.895750, -67.810849),
	cpv(82.161846, -60.007751),
	cpv(31.687708, -59.228223),
	cpv(4.580623, -40.059787),
	cpv(-21.520578, -0.242359),
	cpv(-23.434524, 6.098220),
};
cpShape *level = cpPolyShapeNew(staticBody, 20, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpSpaceAddShape(space, level);
}
{
static const cpVect verts[15] = {
	cpv(242.660710, 93.788690),
	cpv(238.015640, 94.854600),
	cpv(231.430690, 98.626530),
	cpv(227.933620, 103.905840),
	cpv(227.919620, 113.821420),
	cpv(232.000120, 115.886380),
	cpv(237.862490, 116.409020),
	cpv(244.844460, 116.437320),
	cpv(249.551780, 116.108770),
	cpv(252.901210, 113.419450),
	cpv(255.133900, 109.237350),
	cpv(255.133900, 100.970160),
	cpv(248.612190, 95.262280),
	cpv(242.660710, 93.788670),
	cpv(242.660710, 93.788690),
};
cpShape *level = cpPolyShapeNew(staticBody, 15, verts, cpTransformIdentity, 0);
cpShapeSetElasticity(level, .2);
cpShapeSetFriction(level, 1.);
cpShapeSetCollisionType(level, 0);
cpSpaceAddShape(space, level);
}
