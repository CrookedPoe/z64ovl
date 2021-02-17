#ifndef __Z64OVL_Z_EN_FU_KAGO__
#define __Z64OVL_Z_EN_FU_KAGO__

#define Z_EN_FU_KAGO_ACTOR_NUMBER     0x01B4
#define Z_EN_FU_KAGO_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_FU_KAGO_OBJECT_NUMBER    0x01A1
#define Z_EN_FU_KAGO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_fu_kago_s z_en_fu_kago_t;
struct z_en_fu_kago_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ ClObjSph all_sph;
    /* 0x1B8 */ Fu_Kago_Parts parts[6];
    /* 0x338 */ short break_timer;
    /* 0x33A */ short alive_flag;
    /* 0x33C */ short vanish_flag;
}; /* size = 0x0340 */

#endif /* __Z64OVL_Z_EN_FU_KAGO__ */
