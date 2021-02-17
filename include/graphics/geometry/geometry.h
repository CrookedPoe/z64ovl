#ifndef __Z64OVL_GRAPHICS_GEO_INCLUDED__
#define __Z64OVL_GRAPHICS_GEO_INCLUDED__

/* translucent material */
static Gfx xlu_material[] = {
	gsSPTexture(qu016(0.999985), qu016(0.999985), 0, G_TX_RENDERTILE, G_OFF),
	gsDPPipeSync(),
	gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | FORCE_BL | CVG_DST_CLAMP | ZMODE_XLU | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA), G_RM_AA_ZB_TEX_EDGE2),
	gsDPSetCombineLERP(
		0, 0, 0, ENVIRONMENT
		, 0, 0, 0, ENVIRONMENT
		, 0, 0, 0, COMBINED
		, 0, 0, 0, COMBINED
	),
	gsSPEndDisplayList()
};

/* Scale Factor is * 128 */
static Vtx v_cylinder[26] = {
	gdSPDefVtxN(0, -128, 0, 0, 0, 0, 0, -127, 255),
	gdSPDefVtxN(0, 128, 0, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(0, -128, -128, 0, 0, 0, 96, -82, 255),
	gdSPDefVtxN(0, 128, -128, 0, 0, 0, 96, 82, 255),
	gdSPDefVtxN(64, -128, -110, 0, 0, 48, 83, -82, 255),
	gdSPDefVtxN(64, 128, -110, 0, 0, 48, 83, 82, 255),
	gdSPDefVtxN(110, -128, -63, 0, 0, 83, 48, -82, 255),
	gdSPDefVtxN(110, 128, -63, 0, 0, 83, 48, 82, 255),
	gdSPDefVtxN(128, -128, 0, 0, 0, 96, 0, -82, 255),
	gdSPDefVtxN(128, 128, 0, 0, 0, 96, 0, 82, 255),
	gdSPDefVtxN(110, -128, 64, 0, 0, 83, -48, -82, 255),
	gdSPDefVtxN(110, 128, 64, 0, 0, 83, -48, 82, 255),
	gdSPDefVtxN(64, -128, 110, 0, 0, 48, -83, -82, 255),
	gdSPDefVtxN(64, 128, 110, 0, 0, 48, -83, 82, 255),
	gdSPDefVtxN(0, -128, 128, 0, 0, 0, -96, -82, 255),
	gdSPDefVtxN(0, 128, 128, 0, 0, 0, -96, 82, 255),
	gdSPDefVtxN(-63, -128, 110, 0, 0, -48, -83, -82, 255),
	gdSPDefVtxN(-63, 128, 110, 0, 0, -48, -83, 82, 255),
	gdSPDefVtxN(-110, -128, 64, 0, 0, -83, -48, -82, 255),
	gdSPDefVtxN(-110, 128, 64, 0, 0, -83, -48, 82, 255),
	gdSPDefVtxN(-128, -128, 0, 0, 0, -96, 0, -82, 255),
	gdSPDefVtxN(-128, 128, 0, 0, 0, -96, 0, 82, 255),
	gdSPDefVtxN(-110, -128, -63, 0, 0, -83, 48, -82, 255),
	gdSPDefVtxN(-110, 128, -63, 0, 0, -83, 48, 82, 255),
	gdSPDefVtxN(-64, -128, -110, 0, 0, -48, 83, -82, 255),
	gdSPDefVtxN(-64, 128, -110, 0, 0, -48, 83, 82, 255)
};

static Gfx dl_cylinder[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsSPVertex(&v_cylinder, 26, 0),
	gsSP2Triangles(0, 2, 4, 0, 1, 5, 3, 0),
	gsSP2Triangles(3, 4, 2, 0, 0, 4, 6, 0),
	gsSP2Triangles(1, 7, 5, 0, 5, 6, 4, 0),
	gsSP2Triangles(0, 6, 8, 0, 1, 9, 7, 0),
	gsSP2Triangles(7, 8, 6, 0, 0, 8, 10, 0),
	gsSP2Triangles(1, 11, 9, 0, 9, 10, 8, 0),
	gsSP2Triangles(0, 10, 12, 0, 1, 13, 11, 0),
	gsSP2Triangles(11, 12, 10, 0, 0, 12, 14, 0),
	gsSP2Triangles(1, 15, 13, 0, 13, 14, 12, 0),
	gsSP2Triangles(0, 14, 16, 0, 1, 17, 15, 0),
	gsSP2Triangles(15, 16, 14, 0, 0, 16, 18, 0),
	gsSP2Triangles(1, 19, 17, 0, 17, 18, 16, 0),
	gsSP2Triangles(0, 18, 20, 0, 1, 21, 19, 0),
	gsSP2Triangles(19, 20, 18, 0, 0, 20, 22, 0),
	gsSP2Triangles(1, 23, 21, 0, 21, 22, 20, 0),
	gsSP2Triangles(0, 22, 24, 0, 1, 25, 23, 0),
	gsSP2Triangles(23, 24, 22, 0, 0, 24, 2, 0),
	gsSP2Triangles(1, 3, 25, 0, 25, 2, 24, 0),
	gsSP2Triangles(3, 5, 4, 0, 5, 7, 6, 0),
	gsSP2Triangles(7, 9, 8, 0, 9, 11, 10, 0),
	gsSP2Triangles(11, 13, 12, 0, 13, 15, 14, 0),
	gsSP2Triangles(15, 17, 16, 0, 17, 19, 18, 0),
	gsSP2Triangles(19, 21, 20, 0, 21, 23, 22, 0),
	gsSP2Triangles(23, 25, 24, 0, 25, 3, 2, 0),
	gsSPClearGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsSPEndDisplayList()
};

static Vtx v_sphere[30] = {
	gdSPDefVtxN(0, 103, -75, 0, 0, 0, 81, 97, 255),
	gdSPDefVtxN(0, 39, -121, 0, 0, 0, 121, 36, 255),
	gdSPDefVtxN(0, -39, -121, 0, 0, 0, 121, -36, 255),
	gdSPDefVtxN(0, -103, -75, 0, 0, 0, 81, -97, 255),
	gdSPDefVtxN(58, 103, -46, 0, 0, 63, 50, 97, 255),
	gdSPDefVtxN(95, 39, -75, 0, 0, 95, 75, 36, 255),
	gdSPDefVtxN(95, -39, -75, 0, 0, 95, 75, -36, 255),
	gdSPDefVtxN(58, -103, -46, 0, 0, 63, 50, -97, 255),
	gdSPDefVtxN(73, 103, 16, 0, 0, 79, -18, 97, 255),
	gdSPDefVtxN(118, 39, 27, 0, 0, 118, -27, 36, 255),
	gdSPDefVtxN(118, -39, 27, 0, 0, 118, -27, -36, 255),
	gdSPDefVtxN(73, -103, 16, 0, 0, 79, -18, -97, 255),
	gdSPDefVtxN(32, 103, 67, 0, 0, 35, -73, 97, 255),
	gdSPDefVtxN(52, 39, 109, 0, 0, 52, -109, 36, 255),
	gdSPDefVtxN(52, -39, 109, 0, 0, 52, -109, -36, 255),
	gdSPDefVtxN(32, -103, 67, 0, 0, 35, -73, -97, 255),
	gdSPDefVtxN(0, 128, 0, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(-32, 103, 67, 0, 0, -35, -73, 97, 255),
	gdSPDefVtxN(-52, 39, 109, 0, 0, -52, -109, 36, 255),
	gdSPDefVtxN(-52, -39, 109, 0, 0, -52, -109, -36, 255),
	gdSPDefVtxN(-32, -103, 67, 0, 0, -35, -73, -97, 255),
	gdSPDefVtxN(-73, 103, 16, 0, 0, -79, -18, 97, 255),
	gdSPDefVtxN(-118, 39, 27, 0, 0, -118, -27, 36, 255),
	gdSPDefVtxN(-118, -39, 27, 0, 0, -118, -27, -36, 255),
	gdSPDefVtxN(-73, -103, 16, 0, 0, -79, -18, -97, 255),
	gdSPDefVtxN(-58, 103, -46, 0, 0, -63, 50, 97, 255),
	gdSPDefVtxN(-95, 39, -75, 0, 0, -95, 75, 36, 255),
	gdSPDefVtxN(-95, -39, -75, 0, 0, -95, 75, -36, 255),
	gdSPDefVtxN(-58, -103, -46, 0, 0, -63, 50, -97, 255),
	gdSPDefVtxN(0, -128, 0, 0, 0, 0, 0, -127, 255)
};

static Gfx dl_sphere[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsSPVertex(&v_sphere, 30, 0),
	gsSP2Triangles(0, 16, 4, 0, 2, 7, 3, 0),
	gsSP2Triangles(1, 4, 5, 0, 29, 3, 7, 0),
	gsSP2Triangles(1, 6, 2, 0, 29, 7, 11, 0),
	gsSP2Triangles(5, 10, 6, 0, 4, 16, 8, 0),
	gsSP2Triangles(6, 11, 7, 0, 5, 8, 9, 0),
	gsSP2Triangles(29, 11, 15, 0, 9, 14, 10, 0),
	gsSP2Triangles(8, 16, 12, 0, 10, 15, 11, 0),
	gsSP2Triangles(8, 13, 9, 0, 29, 15, 20, 0),
	gsSP2Triangles(14, 18, 19, 0, 12, 16, 17, 0),
	gsSP2Triangles(14, 20, 15, 0, 12, 18, 13, 0),
	gsSP2Triangles(29, 20, 24, 0, 19, 22, 23, 0),
	gsSP2Triangles(17, 16, 21, 0, 19, 24, 20, 0),
	gsSP2Triangles(17, 22, 18, 0, 29, 24, 28, 0),
	gsSP2Triangles(23, 26, 27, 0, 21, 16, 25, 0),
	gsSP2Triangles(24, 27, 28, 0, 21, 26, 22, 0),
	gsSP2Triangles(29, 28, 3, 0, 27, 1, 2, 0),
	gsSP2Triangles(25, 16, 0, 0, 28, 2, 3, 0),
	gsSP2Triangles(25, 1, 26, 0, 2, 6, 7, 0),
	gsSP2Triangles(1, 0, 4, 0, 1, 5, 6, 0),
	gsSP2Triangles(5, 9, 10, 0, 6, 10, 11, 0),
	gsSP2Triangles(5, 4, 8, 0, 9, 13, 14, 0),
	gsSP2Triangles(10, 14, 15, 0, 8, 12, 13, 0),
	gsSP2Triangles(14, 13, 18, 0, 14, 19, 20, 0),
	gsSP2Triangles(12, 17, 18, 0, 19, 18, 22, 0),
	gsSP2Triangles(19, 23, 24, 0, 17, 21, 22, 0),
	gsSP2Triangles(23, 22, 26, 0, 24, 23, 27, 0),
	gsSP2Triangles(21, 25, 26, 0, 27, 26, 1, 0),
	gsSP2Triangles(28, 27, 2, 0, 25, 0, 1, 0),
	gsSPClearGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsSPEndDisplayList()
};

static Vtx v_circle[19] = {
	gdSPDefVtxN(0, 0, 0, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(0, 0, -128, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(-43, 0, -120, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(-82, 0, -98, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(-110, 0, -63, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(-126, 0, -22, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(-126, 0, 22, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(-110, 0, 64, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(-82, 0, 98, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(-43, 0, 120, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(0, 0, 128, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(43, 0, 120, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(82, 0, 98, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(110, 0, 64, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(126, 0, 22, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(126, 0, -22, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(110, 0, -63, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(82, 0, -98, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(43, 0, -120, 0, 0, 0, 0, 127, 255)
};

static Gfx dl_circle[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsSPVertex(&v_circle, 19, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
	gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
	gsSP2Triangles(0, 7, 8, 0, 0, 8, 9, 0),
	gsSP2Triangles(0, 9, 10, 0, 0, 10, 11, 0),
	gsSP2Triangles(0, 11, 12, 0, 0, 12, 13, 0),
	gsSP2Triangles(0, 13, 14, 0, 0, 14, 15, 0),
	gsSP2Triangles(0, 15, 16, 0, 0, 16, 17, 0),
	gsSP2Triangles(0, 17, 18, 0, 0, 18, 1, 0),
	gsSPClearGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsSPEndDisplayList()
};

static Vtx v_cone[14] = {
	gdSPDefVtxN(0, -128, 0, 0, 0, 0, 0, -127, 255),
	gdSPDefVtxN(0, -128, -128, 0, 0, 0, 112, -59, 255),
	gdSPDefVtxN(64, -128, -110, 0, 0, 56, 96, -59, 255),
	gdSPDefVtxN(110, -128, -63, 0, 0, 96, 56, -59, 255),
	gdSPDefVtxN(128, -128, 0, 0, 0, 112, 0, -59, 255),
	gdSPDefVtxN(110, -128, 64, 0, 0, 96, -56, -59, 255),
	gdSPDefVtxN(64, -128, 110, 0, 0, 56, -96, -59, 255),
	gdSPDefVtxN(0, -128, 128, 0, 0, 0, -112, -59, 255),
	gdSPDefVtxN(-63, -128, 110, 0, 0, -56, -96, -59, 255),
	gdSPDefVtxN(-110, -128, 64, 0, 0, -96, -56, -59, 255),
	gdSPDefVtxN(-128, -128, 0, 0, 0, -112, 0, -59, 255),
	gdSPDefVtxN(-110, -128, -63, 0, 0, -96, 56, -59, 255),
	gdSPDefVtxN(-64, -128, -110, 0, 0, -56, 96, -59, 255),
	gdSPDefVtxN(0, 128, 0, 0, 0, 0, 0, 127, 255)
};

static Gfx dl_cone[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsSPVertex(&v_cone, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 13, 2, 0),
	gsSP2Triangles(0, 2, 3, 0, 2, 13, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 3, 13, 4, 0),
	gsSP2Triangles(0, 4, 5, 0, 4, 13, 5, 0),
	gsSP2Triangles(0, 5, 6, 0, 5, 13, 6, 0),
	gsSP2Triangles(0, 6, 7, 0, 6, 13, 7, 0),
	gsSP2Triangles(0, 7, 8, 0, 7, 13, 8, 0),
	gsSP2Triangles(0, 8, 9, 0, 8, 13, 9, 0),
	gsSP2Triangles(0, 9, 10, 0, 9, 13, 10, 0),
	gsSP2Triangles(0, 10, 11, 0, 10, 13, 11, 0),
	gsSP2Triangles(0, 11, 12, 0, 11, 13, 12, 0),
	gsSP2Triangles(0, 12, 1, 0, 12, 13, 1, 0),
	gsSPClearGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsSPEndDisplayList()
};

static Vtx v_cube[8] = {
	gdSPDefVtxN(128, 128, -128, 0, 0, 73, 73, 73, 255),
	gdSPDefVtxN(128, -128, -128, 0, 0, 73, 73, -73, 255),
	gdSPDefVtxN(128, 128, 128, 0, 0, 73, -73, 73, 255),
	gdSPDefVtxN(128, -128, 128, 0, 0, 73, -73, -73, 255),
	gdSPDefVtxN(-128, 128, -128, 0, 0, -73, 73, 73, 255),
	gdSPDefVtxN(-128, -128, -128, 0, 0, -73, 73, -73, 255),
	gdSPDefVtxN(-128, 128, 128, 0, 0, -73, -73, 73, 255),
	gdSPDefVtxN(-128, -128, 128, 0, 0, -73, -73, -73, 255)
};

static Gfx dl_cube[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsSPVertex(&v_cube, 8, 0),
	gsSP2Triangles(4, 2, 0, 0, 1, 7, 5, 0),
	gsSP2Triangles(2, 7, 3, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 1, 5, 0, 6, 5, 7, 0),
	gsSP2Triangles(4, 6, 2, 0, 1, 3, 7, 0),
	gsSP2Triangles(2, 6, 7, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 0, 1, 0, 6, 4, 5, 0),
	gsSPClearGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsSPEndDisplayList()
};

static Vtx v_plane[4] = {
	gdSPDefVtxN(-128, 0, 128, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(128, 0, 128, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(-128, 0, -128, 0, 0, 0, 0, 127, 255),
	gdSPDefVtxN(128, 0, -128, 0, 0, 0, 0, 127, 255)
};

static Gfx dl_plane[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsSPVertex(&v_plane, 4, 0),
	gsSP2Triangles(1, 2, 0, 0, 1, 3, 2, 0),
	gsSPClearGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsSPEndDisplayList()
};

#endif /* __Z64OVL_GRAPHICS_GEO_INCLUDED__ */