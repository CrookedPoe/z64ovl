#ifndef __Z64OVL_Z_BG_MIZU_BWALL__
#define __Z64OVL_Z_BG_MIZU_BWALL__

#define Z_BG_MIZU_BWALL_ACTOR_NUMBER     0x01BA
#define Z_BG_MIZU_BWALL_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MIZU_BWALL_OBJECT_NUMBER    0x0059
#define Z_BG_MIZU_BWALL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_mizu_bwall_s z_bg_mizu_bwall_t;
struct z_bg_mizu_bwall_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ ClObjTris tris;
    /* 0x174 */ ClObjTrisElem triselem[3];
    /* 0x288 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x28C */ float default_pos_y;
    /* 0x290 */ int scr_per1;
    /* 0x294 */ int scr_per2;
    /* 0x298 */ int scr_per3;
    /* 0x29C */ int scr_per4;
    /* 0x2A0 */ int timer0;
    /* 0x2A4 */ int timer1;
    /* 0x2A8 */ Gfx* shape_modelP;
}; /* size = 0x02BC */

#endif /* __Z64OVL_Z_BG_MIZU_BWALL__ */
