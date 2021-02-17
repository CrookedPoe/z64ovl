#ifndef __Z64OVL_Z_BG_KIN2_BOMBWALL__
#define __Z64OVL_Z_BG_KIN2_BOMBWALL__

#define Z_BG_KIN2_BOMBWALL_ACTOR_NUMBER     0x020E
#define Z_BG_KIN2_BOMBWALL_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_KIN2_BOMBWALL_OBJECT_NUMBER    0x01F5
#define Z_BG_KIN2_BOMBWALL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_SFX_TIMER)

typedef struct z_bg_kin2_bombwall_s z_bg_kin2_bombwall_t;
struct z_bg_kin2_bombwall_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjPipe pipe;
    /* 0x1A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1AC */ signed char mode_timer;
    /* 0x1AD */ unsigned char pad_0[3];
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_BG_KIN2_BOMBWALL__ */
