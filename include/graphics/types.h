#ifndef __Z64OVL_GRAPHICS_TYPES_INCLUDED__
#define __Z64OVL_GRAPHICS_TYPES_INCLUDED__

#include "../include.h"

#define G_TX_ANCHOR_C  0b0000
#define G_TX_ANCHOR_U  0b0001
#define G_TX_ANCHOR_R  0b0010
#define G_TX_ANCHOR_D  0b0100
#define G_TX_ANCHOR_L  0b1000
#define G_TX_ANCHOR_UL (G_TX_ANCHOR_U | G_TX_ANCHOR_L)
#define G_TX_ANCHOR_UR (G_TX_ANCHOR_U | G_TX_ANCHOR_R)
#define G_TX_ANCHOR_DL (G_TX_ANCHOR_D | G_TX_ANCHOR_L)
#define G_TX_ANCHOR_DR (G_TX_ANCHOR_D | G_TX_ANCHOR_R)
#define TIMG_A(TA0) G_TX_ANCHOR_##TA0

#define G_CC_INT4 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0
#define G_CC_MODULATERGB_PRIM_ENVA PRIMITIVE, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT
#define G_CC_PRIMITIVE_ENVA 0, 0, 0, PRIMITIVE, 0, 0, 0, ENVIRONMENT

/* TODO: Identify Main Use */
static Gfx RCP_PRESET_0[] = {
    gsDPPipeSync()
    , gsSPTexture(qu016(0.999985), qu016(0.999985), 0, G_TX_RENDERTILE, G_ON)
    , gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM)
    , gsDPSetOtherMode(G_AD_DISABLE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE, G_AC_THRESHOLD | G_ZS_PIXEL | G_RM_XLU_SURF | G_RM_XLU_SURF2)
    , gsSPLoadGeometryMode(G_SHADING_SMOOTH)
    , gsSPEndDisplayList()
};

typedef struct {                    /* Display List Buffer (TwoHeadGfxArena) */
    uint32_t    size;               /* Total Size */
    Gfx*        buf;                /* Buffer */
    union {                         /* Start */
        Gfx* p;
        Gfx* head;
    };
    union {                         /* End */
        Gfx* d;
        Gfx* tail;
    };
} disp_buf_t, TwoHeadGfxArena;

typedef union {
    struct {
        int16_t type;
    } gen;
    struct {
        int16_t type;
    } done;
    OSScMsg     app;
} gfx_msg_t;

typedef struct gfx_s {                           /* Graphics Context */
    /* 0x0000 */ Gfx*            poly_opa_buf;       /* POLY_OPA Buffer */
    /* 0x0004 */ Gfx*            poly_xlu_buf;       /* POLY_XLU Buffer */
    /* 0x0008 */ Gfx*            poly_02P_buf;
    /* 0x000C */ Gfx*            poly_03P_buf;
    /* 0x0010 */ Gfx*            poly_ovl_buf;       /* POLY_OVERLAY Buffer */
    /* 0x0014 */ Gfx*            gfx_save;
    /* 0x0018 */ gfx_msg_t   msg;
    /* 0x0038 */ OSMesg          gfx_reply[8];
    /* 0x0058 */ OSMesgQueue*    sched_msg_queue;
    /* 0x005C */ OSMesgQueue     queue;
    /* 0x0078 */ OSScTask        task00;
    /* 0x00E0 */ OSScTask        task01;
    /* 0x0148 */ OSScTask        task02;
    /* 0x01B0 */ Gfx*            poly_work_buf;      /* POLY_WORK Buffer */
    /* 0x01B4 */ disp_buf_t  poly_work;          /* TwoHeadGfxArena */
    /* 0x01C4 */ char            _task03[104 - sizeof(Gfx*) - sizeof(disp_buf_t)];
    /* 0x0218 */ char            _task04[104];
    /* 0x0280 */ OSSched*        sc;
    /* 0x0284 */ OSViMode*       vi_mode;
    /* 0x0288 */ disp_buf_t  line_opa;           /* TwoHeadGfxArena */
    /* 0x0298 */ disp_buf_t  line_xlu;           /* TwoHeadGfxArena */
    /* 0x02A8 */ disp_buf_t  poly_ovl;           /* TwoHeadGfxArena */
    /* 0x02B8 */ disp_buf_t  poly_opa;           /* TwoHeadGfxArena */
    /* 0x02C8 */ disp_buf_t  poly_xlu;           /* TwoHeadGfxArena */
    /* 0x02D8 */ int32_t         frame_counter;
    /* 0x02DC */ uint16_t*       frame_buf_now;      /* Current Frame Buffer */
    /* 0x02E0 */ uint16_t*       render_buffer;
    /* 0x02E4 */ uint32_t        vi_features;        /* osViSetSpecialFeatures */
    /* 0x02E8 */ int32_t         frame_buf_index;
    /* 0x02EC */ void            (*task_endcallback)(struct gfx_s*, void*);
    /* 0x02F0 */ void*           task_end_client;
    /* 0x02F4 */ float           vi_x_scale;
    /* 0x02F8 */ float           vi_y_scale;
} gfx_t, GraphicsContext; /* Size = 0x0300 */

typedef struct {
    void* timg;
    float width, height;
    uint8_t format, bit_size;
} gfx_texture_t;

typedef struct {
    float x, y;
    uint8_t anchor;
    float width, height;
} gfx_tile_t;

typedef struct {
    gfx_texture_t texture;
    gfx_tile_t tile;
} gfx_sprite_t;

typedef struct {
    void* timg;
    float* width_table;
    uint8_t shadow;
    rgba8_t color;
} gfx_text_printer_t;

#endif /* __Z64OVL_GRAPHICS_TYPES_INCLUDED__ */