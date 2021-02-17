#ifndef __Z64OVL_Z_BG_SPOT18_BASKET__
#define __Z64OVL_Z_BG_SPOT18_BASKET__

#define Z_BG_SPOT18_BASKET_ACTOR_NUMBER     0x015C
#define Z_BG_SPOT18_BASKET_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_SPOT18_BASKET_OBJECT_NUMBER    0x00AF
#define Z_BG_SPOT18_BASKET_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_spot18_basket_s z_bg_spot18_basket_t;
struct z_bg_spot18_basket_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ ClObjJntSph sph;
    /* 0x174 */ ClObjJntSphElem elem[2];
    /* 0x1F4 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x1F8 */ float revolve_r;
    /* 0x1FC */ short revolve_y_spd;
    /* 0x1FE */ short revolve_ang;
    /* 0x200 */ short rotate_y_spd;
    /* 0x202 */ short axis_ang_y;
    /* 0x204 */ short axis_ang_zx;
    /* 0x206 */ short timer;
    /* 0x208 */ short face_idx;
    /* 0x20A */ unsigned char h_kakera_flag;
}; /* size = 0x021C */

#endif /* __Z64OVL_Z_BG_SPOT18_BASKET__ */
