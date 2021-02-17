#ifndef __Z64OVL_Z_BG_FU_MIZU__
#define __Z64OVL_Z_BG_FU_MIZU__

#define Z_BG_FU_MIZU_ACTOR_NUMBER     0x01BC
#define Z_BG_FU_MIZU_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_FU_MIZU_OBJECT_NUMBER    0x01A0
#define Z_BG_FU_MIZU_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_fu_mizu_s z_bg_fu_mizu_t;
struct z_bg_fu_mizu_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ short appear_flag;
    /* 0x162 */ short cycle;
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_BG_FU_MIZU__ */
