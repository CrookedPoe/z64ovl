#ifndef __Z64OVL_Z_BG_TOKI_HIKARI__
#define __Z64OVL_Z_BG_TOKI_HIKARI__

#define Z_BG_TOKI_HIKARI_ACTOR_NUMBER     0x006A
#define Z_BG_TOKI_HIKARI_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_TOKI_HIKARI_OBJECT_NUMBER    0x005E
#define Z_BG_TOKI_HIKARI_FLAGS            (ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_toki_hikari_s z_bg_toki_hikari_t;
struct z_bg_toki_hikari_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ float parcent;
    /* 0x140 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_BG_TOKI_HIKARI__ */
