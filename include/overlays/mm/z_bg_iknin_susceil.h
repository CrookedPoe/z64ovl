#ifndef __Z64OVL_Z_BG_IKNIN_SUSCEIL__
#define __Z64OVL_Z_BG_IKNIN_SUSCEIL__

#define Z_BG_IKNIN_SUSCEIL_ACTOR_NUMBER     0x028E
#define Z_BG_IKNIN_SUSCEIL_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_IKNIN_SUSCEIL_OBJECT_NUMBER    0x0236
#define Z_BG_IKNIN_SUSCEIL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_iknin_susceil_s z_bg_iknin_susceil_t;
struct z_bg_iknin_susceil_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ EvwAnimeInfo* evw;
    /* 0x160 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x164 */ short mode_timer;
    /* 0x166 */ short through_timer;
    /* 0x168 */ short restrain_timer;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_IKNIN_SUSCEIL__ */
