#ifndef __Z64OVL_GRAPHICS_FUNCTIONS_INCLUDED__
#define __Z64OVL_GRAPHICS_FUNCTIONS_INCLUDED__

#include "types.h"
#include "geometry/geometry.h"

/**********
* Set the anchor origin of a sprite tile.
* Helper Author: <CrookedPoe>
**********/
static inline void zh_gfx_set_tile_anchor(gfx_tile_t* tile)
{
   /* Anchor Coordinates */
   if (tile->anchor == TIMG_A(C)) /* Center */
   {
      tile->x -= (tile->width/2);
      tile->y -= (tile->height/2);
   }
   else
   {
      if (tile->anchor & TIMG_A(U))
         tile->y += 0; /* Default */
      if (tile->anchor & TIMG_A(R))
         tile->x = tile->width;
      if (tile->anchor & TIMG_A(D))
         tile->y = tile->height;
      if (tile->anchor & TIMG_A(L))
         tile->x += 0; /* Default */
   }
}

/**********
* Draw a sprite to a specified graphics buffer.
* Helper Author: <CrookedPoe>
**********/
static inline Gfx* zh_gfx_draw_texture_rectangle(Gfx* buf, gfx_sprite_t* img)
{
    if ((img->tile).width == 0) (img->tile).width++;
	if ((img->tile).height == 0) (img->tile).height++;
    gDPLoadTextureBlock(
        buf++
        , (img->texture).timg, (img->texture).format, (img->texture).bit_size
        , (img->texture).width, (img->texture).height, 0
        , G_TX_NOMIRROR, G_TX_NOMIRROR
        , G_TX_NOMASK, G_TX_NOMASK
        , G_TX_NOLOD, G_TX_NOLOD
    );
    gSPTextureRectangle(
		buf++
		, qs102((img->tile).x) & ~3
		, qs102((img->tile).y) & ~3
		, qs102((img->tile).x + (img->tile).width) & ~3
		, qs102((img->tile).y + (img->tile).height) & ~3
		, G_TX_RENDERTILE
		, qu105(0), qu105(0)
		, qu510((img->texture).width / (img->tile).width)
		, qu510((img->texture).height / (img->tile).height)
	);
    return buf;
}

static inline void zh_gfx_draw_tile(disp_buf_t* buf, gfx_sprite_t* sprite)
{
    if ((sprite->tile).width == 0) (sprite->tile).width++;
	if ((sprite->tile).height == 0) (sprite->tile).height++;
	gSPTextureRectangle(
		buf->p++
		, qs102((sprite->tile).x) & ~3
		, qs102((sprite->tile).y) & ~3
		, qs102((sprite->tile).x + (sprite->tile).width) & ~3
		, qs102((sprite->tile).y + (sprite->tile).height) & ~3
		, G_TX_RENDERTILE
		, qu105(0), qu105(0)
		, qu510((sprite->texture).width / (sprite->tile).width)
		, qu510((sprite->texture).height / (sprite->tile).height)
	);
}

static inline void zh_gfx_font(global_t* gl, gfx_text_printer_t* printer, char* string, float x, float y, float scale)
{
    char buf[64];
    disp_buf_t* opa = &(gl->state).gfx_context->poly_opa;
    gfx_sprite_t letter;

    sprintf(buf, string);

    gDPSetCombineMode(opa->p++, G_CC_INT4, G_CC_INT4);

    for (char* str = buf; *str; ++str)
    {
        int i = *str - ' ';

        letter = (gfx_sprite_t){
            .texture = {
                .timg = (printer->timg) + (i * 0x80)
                , .width = 16
                , .height = 16
                , .format = G_IM_FMT_I
                , .bit_size = G_IM_SIZ_4b
            }
            , .tile = {
                x, y
                , TIMG_A(U) | TIMG_A(L)
                , floorf(16 * scale)
                , floorf(16 * scale)
            }
        };
        x += floorf(printer->width_table[i] * scale);

        /* Load Texture Block */
        gDPLoadTextureBlock(
            opa->p++
            , (letter.texture).timg, (letter.texture).format, (letter.texture).bit_size
            , (letter.texture).width, (letter.texture).height
            , 0
            , G_TX_CLAMP, G_TX_CLAMP
            , G_TX_NOMASK, G_TX_NOMASK
            , G_TX_NOLOD, G_TX_NOLOD
        );

        if (printer->shadow)
        {
            /* Push */
            letter.tile.x++;
            letter.tile.y++;

            /* Draw */
            gDPSetPrimColor(opa->p++, 0, 0, 0, 0, 0, 255);
            gDPSetEnvColor(opa->p++, 0, 0, 0, 255);
            gDPPipeSync(opa->p++);
            zh_gfx_draw_tile(opa, &letter);

            /* Pop */
            letter.tile.x--;
            letter.tile.y--;
        }

        gDPSetPrimColor(opa->p++, 0, 0, (printer->color).r, (printer->color).g, (printer->color).b, (printer->color).a);
        gDPSetEnvColor(opa->p++, 0, 0, 0, 255);
        gDPPipeSync(opa->p++);
        zh_gfx_draw_tile(opa, &letter);
    }
}

/**********
* Draw an arbitrary cylinder to the XLU buffer.
* Helper Author: <CrookedPoe>
**********/
#define zh_draw_cylinder_xlu(gl, x, y, z, radius, height)       \
{                                                               \
    disp_buf_t* xlu = &((gl)->state).gfx_context->poly_xlu;     \
    gSPDisplayList(xlu->p++, xlu_material);                     \
    zh_draw_cylinder(                                           \
        ((gl)->state).gfx_context                               \
        , &xlu->p                                               \
        , &xlu->d                                               \
        , (x), (y), (z), (radius), (height)                     \
    );                                                          \
}

/**********
* Draw an arbitrary cylinder to a specified graphics buffer.
* Helper Author: <CrookedPoe>
**********/
static inline void zh_draw_cylinder(gfx_t* gfx, Gfx** p_gfx_p, Gfx** p_gfx_d, float x, float y, float z, int32_t radius, int32_t height)
{
    Mtx m;
    {
        float mf[4][4];
        float ms[4][4];
        guTranslateF(mf, x, y, z);
        guScaleF(ms, (radius / 128.0f), (height / 204.0f), (radius / 128.0f));
        guMtxCatF(ms, mf, mf);
        guMtxF2L(mf, &m);
    }
    Mtx* mtx = z_matrix_new_fixed(gfx);
    bcopy(&m, (void*)mtx, sizeof(Mtx));
    gSPMatrix((*p_gfx_p)++, mtx, G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_PUSH);
    gSPDisplayList((*p_gfx_p)++, dl_cylinder);
    gSPPopMatrix((*p_gfx_p)++, G_MTX_MODELVIEW);
}

#define zh_draw_cone_xlu(gl, x, y, z, radius, height)           \
{                                                               \
    disp_buf_t* xlu = &((gl)->state).gfx_context->poly_xlu;    \
    gSPDisplayList(xlu->p++, xlu_material);                     \
    zh_draw_cone(                                               \
        ((gl)->state).gfx_context                                  \
        , &xlu->p                                               \
        , &xlu->d                                               \
        , (x), (y), (z), (radius), (height)                     \
    );                                                          \
}

static inline void zh_draw_cone(gfx_t* gfx, Gfx** p_gfx_p, Gfx** p_gfx_d, float x, float y, float z, int32_t radius, int32_t height)
{
    Mtx m;
    {
        float mf[4][4];
        float ms[4][4];
        guTranslateF(mf, x, y, z);
        guScaleF(ms, (radius / 128.0f), (height / 128.0f), (radius / 128.0f));
        guMtxCatF(ms, mf, mf);
        guMtxF2L(mf, &m);
    }
    Mtx* mtx = z_matrix_new_fixed(gfx);
    bcopy(&m, (void*)mtx, sizeof(Mtx));
    gSPMatrix((*p_gfx_p)++, mtx, G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_PUSH);
    gSPDisplayList((*p_gfx_p)++, dl_cone);
    gSPPopMatrix((*p_gfx_p)++, G_MTX_MODELVIEW);
}

#define zh_draw_sphere_xlu(gl, x, y, z, radius)                 \
{                                                               \
    disp_buf_t* xlu = &((gl)->state).gfx_context->poly_xlu;    \
    gSPDisplayList(xlu->p++, xlu_material);                     \
    zh_draw_sphere(                                             \
        ((gl)->state).gfx_context                                  \
        , &xlu->p                                               \
        , &xlu->d                                               \
        , (x), (y), (z), (radius)                               \
    );                                                          \
}

static inline void zh_draw_sphere(gfx_t* gfx, Gfx** p_gfx_p, Gfx** p_gfx_d, float x, float y, float z, int32_t radius)
{
    Mtx m;
    {
        float mf[4][4];
        float ms[4][4];
        guTranslateF(mf, x, y, z);
        guScaleF(ms, (radius / 128.0f), (radius / 128.0f), (radius / 128.0f));
        guMtxCatF(ms, mf, mf);
        guMtxF2L(mf, &m);
    }
    Mtx* mtx = z_matrix_new_fixed(gfx);
    bcopy(&m, (void*)mtx, sizeof(Mtx));
    gSPMatrix((*p_gfx_p)++, mtx, G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_PUSH);
    gSPDisplayList((*p_gfx_p)++, dl_sphere);
    gSPPopMatrix((*p_gfx_p)++, G_MTX_MODELVIEW);
}

#define zh_draw_circle_xlu(gl, x, y, z, radius)                 \
{                                                               \
    disp_buf_t* xlu = &((gl)->state).gfx_context->poly_xlu;    \
    gSPDisplayList(xlu->p++, xlu_material);                     \
    zh_draw_circle(                                             \
        ((gl)->state).gfx_context                                  \
        , &xlu->p                                               \
        , &xlu->d                                               \
        , (x), (y), (z), (radius)                               \
    );                                                          \
}

static inline void zh_draw_circle(gfx_t* gfx, Gfx** p_gfx_p, Gfx** p_gfx_d, float x, float y, float z, int32_t radius)
{
    Mtx m;
    {
        float mf[4][4];
        float ms[4][4];
        guTranslateF(mf, x, y, z);
        guScaleF(ms, (radius / 128.0f), (radius / 128.0f), (radius / 128.0f));
        guMtxCatF(ms, mf, mf);
        guMtxF2L(mf, &m);
    }
    Mtx* mtx = z_matrix_new_fixed(gfx);
    bcopy(&m, (void*)mtx, sizeof(Mtx));
    gSPMatrix((*p_gfx_p)++, mtx, G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_PUSH);
    gSPDisplayList((*p_gfx_p)++, dl_circle);
    gSPPopMatrix((*p_gfx_p)++, G_MTX_MODELVIEW);
}

#define zh_draw_rectangle_prism_xlu(gl, x, y, z, width, height, depth)  \
{                                                                       \
    disp_buf_t* xlu = &((gl)->state).gfx_context->poly_xlu;            \
    gSPDisplayList(xlu->p++, xlu_material);                             \
    zh_draw_rectangle_prism(                                            \
        ((gl)->state).gfx_context                                          \
        , &xlu->p                                                       \
        , &xlu->d                                                       \
        , (x), (y), (z), (width), (height), (depth)                     \
    );                                                                  \
}

static inline void zh_draw_rectangle_prism(gfx_t* gfx, Gfx** p_gfx_p, Gfx** p_gfx_d, float x, float y, float z, int32_t width, int32_t height, int32_t depth)
{
    Mtx m;
    {
        float mf[4][4];
        float ms[4][4];
        guTranslateF(mf, x, y, z);
        guScaleF(ms, (width / 128.0f), (height / 128.0f), (depth / 128.0f));
        guMtxCatF(ms, mf, mf);
        guMtxF2L(mf, &m);
    }
    Mtx* mtx = z_matrix_new_fixed(gfx);
    bcopy(&m, (void*)mtx, sizeof(Mtx));
    gSPMatrix((*p_gfx_p)++, mtx, G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_PUSH);
    gSPDisplayList((*p_gfx_p)++, dl_cube);
    gSPPopMatrix((*p_gfx_p)++, G_MTX_MODELVIEW);
}

#define zh_draw_cube_xlu(gl, x, y, z, size)                             \
{                                                                       \
    disp_buf_t* xlu = &((gl)->state).gfx_context->poly_xlu;            \
    gSPDisplayList(xlu->p++, xlu_material);                             \
    zh_draw_cube(                                                       \
        ((gl)->state).gfx_context                                          \
        , &xlu->p                                                       \
        , &xlu->d                                                       \
        , (x), (y), (z), (size)                                         \
    );                                                                  \
}

static inline void zh_draw_cube(gfx_t* gfx, Gfx** p_gfx_p, Gfx** p_gfx_d, float x, float y, float z, int32_t size)
{
    Mtx m;
    {
        float mf[4][4];
        float ms[4][4];
        guTranslateF(mf, x, y, z);
        guScaleF(ms, (size / 128.0f), (size / 128.0f), (size / 128.0f));
        guMtxCatF(ms, mf, mf);
        guMtxF2L(mf, &m);
    }
    Mtx* mtx = z_matrix_new_fixed(gfx);
    bcopy(&m, (void*)mtx, sizeof(Mtx));
    gSPMatrix((*p_gfx_p)++, mtx, G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_PUSH);
    gSPDisplayList((*p_gfx_p)++, dl_cube);
    gSPPopMatrix((*p_gfx_p)++, G_MTX_MODELVIEW);
}

#define zh_draw_quad_xlu(gl, x, y, z, width, length)                    \
{                                                                       \
    disp_buf_t* xlu = &((gl)->state).gfx_context->poly_xlu;            \
    gSPDisplayList(xlu->p++, xlu_material);                             \
    zh_draw_quad(                                                       \
        ((gl)->state).gfx_context                                          \
        , &xlu->p                                                       \
        , &xlu->d                                                       \
        , (x), (y), (z), (width), (length)                              \
    );                                                                  \
}

static inline void zh_draw_quad(gfx_t* gfx, Gfx** p_gfx_p, Gfx** p_gfx_d, float x, float y, float z, int32_t width, int32_t length)
{
    Mtx m;
    {
        float mf[4][4];
        float ms[4][4];
        guTranslateF(mf, x, y, z);
        guScaleF(ms, (width / 128.0f), 0, (length / 128.0f));
        guMtxCatF(ms, mf, mf);
        guMtxF2L(mf, &m);
    }
    Mtx* mtx = z_matrix_new_fixed(gfx);
    bcopy(&m, (void*)mtx, sizeof(Mtx));
    gSPMatrix((*p_gfx_p)++, mtx, G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_PUSH);
    gSPDisplayList((*p_gfx_p)++, dl_plane);
    gSPPopMatrix((*p_gfx_p)++, G_MTX_MODELVIEW);
}

/**********
* Inlitialize the graphics state for a gsSPLine3D or gsSPLineW3D
* Helper Author: <CrookedPoe> additionally modified from `init_line_gfx();`
* from <https://github.com/glankk/gz/blob/master/src/gz/gz_col_view.c>
**********/
static inline void zh_init_line(gfx_t* gfx, Gfx** p_gfx_p, Gfx** p_gfx_d, int xlu)
{
    uint32_t rm_c1;
    uint32_t rm_c2;

    if (xlu) {
        rm_c1 = G_RM_AA_ZB_XLU_LINE;
        rm_c2 = G_RM_AA_ZB_XLU_LINE2;
    }
    else {
        rm_c1 = G_RM_AA_ZB_DEC_LINE;
        rm_c2 = G_RM_AA_ZB_DEC_LINE2;
    }

    Mtx *p_m = z_matrix_new_fixed(gfx);
    guMtxIdent(p_m);

    gSPLoadGeometryMode((*p_gfx_p)++, G_ZBUFFER);
    gSPTexture((*p_gfx_p)++, qu016(0.5), qu016(0.5), 0, G_TX_RENDERTILE, G_OFF);
    gSPMatrix((*p_gfx_p)++, p_m, G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH);

    gDPPipeSync((*p_gfx_p)++);
    gDPSetCycleType((*p_gfx_p)++, G_CYC_1CYCLE);
    gDPSetRenderMode((*p_gfx_p)++, rm_c1, rm_c2);
    gDPSetCombineMode((*p_gfx_p)++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
}

#endif /* __Z64OVL_GRAPHICS_FUNCTIONS_INCLUDED__ */