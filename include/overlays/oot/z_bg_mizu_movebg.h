#ifndef __Z64OVL_Z_BG_MIZU_MOVEBG__
#define __Z64OVL_Z_BG_MIZU_MOVEBG__

#define Z_BG_MIZU_MOVEBG_ACTOR_NUMBER     0x0064
#define Z_BG_MIZU_MOVEBG_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MIZU_MOVEBG_OBJECT_NUMBER    0x0059
#define Z_BG_MIZU_MOVEBG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_mizu_movebg_s z_bg_mizu_movebg_t;
struct z_bg_mizu_movebg_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ float default_pos_y;
    /* 0x15C */ int scr_per1;
    /* 0x160 */ int scr_per2;
    /* 0x164 */ int scr_per3;
    /* 0x168 */ int scr_per4;
    /* 0x16C */ unsigned char snd_flag;
    /* 0x170 */ Gfx* shape_modelP;
    /* 0x174 */ int path_no;
}; /* size = 0x0188 */

#endif /* __Z64OVL_Z_BG_MIZU_MOVEBG__ */
