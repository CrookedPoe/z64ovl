#ifndef __Z64OVL_Z_BG_GND_DARKMEIRO__
#define __Z64OVL_Z_BG_GND_DARKMEIRO__

#define Z_BG_GND_DARKMEIRO_ACTOR_NUMBER     0x01B4
#define Z_BG_GND_DARKMEIRO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_GND_DARKMEIRO_OBJECT_NUMBER    0x0179
#define Z_BG_GND_DARKMEIRO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_gnd_darkmeiro_s z_bg_gnd_darkmeiro_t;
struct z_bg_gnd_darkmeiro_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ unshort flag;
    /* 0x156 */ short timer_1;
    /* 0x158 */ short timer_2;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_BG_GND_DARKMEIRO__ */
