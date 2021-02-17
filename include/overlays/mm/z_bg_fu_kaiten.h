#ifndef __Z64OVL_Z_BG_FU_KAITEN__
#define __Z64OVL_Z_BG_FU_KAITEN__

#define Z_BG_FU_KAITEN_ACTOR_NUMBER     0x01AE
#define Z_BG_FU_KAITEN_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_FU_KAITEN_OBJECT_NUMBER    0x01A0
#define Z_BG_FU_KAITEN_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_fu_kaiten_s z_bg_fu_kaiten_t;
struct z_bg_fu_kaiten_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ float game_offset_y;
    /* 0x164 */ float cycle_height;
    /* 0x168 */ short angle_speed_y;
    /* 0x16A */ short cycle_speed;
    /* 0x16C */ short cycle;
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_BG_FU_KAITEN__ */
