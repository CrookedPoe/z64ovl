#ifndef __Z64OVL_Z_BG_HIDAN_SYOKU__
#define __Z64OVL_Z_BG_HIDAN_SYOKU__

#define Z_BG_HIDAN_SYOKU_ACTOR_NUMBER     0x0047
#define Z_BG_HIDAN_SYOKU_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HIDAN_SYOKU_OBJECT_NUMBER    0x002C
#define Z_BG_HIDAN_SYOKU_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_hidan_syoku_s z_bg_hidan_syoku_t;
struct z_bg_hidan_syoku_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short player_ride_flg;
    /* 0x15A */ short timer;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_HIDAN_SYOKU__ */
