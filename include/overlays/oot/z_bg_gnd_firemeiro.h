#ifndef __Z64OVL_Z_BG_GND_FIREMEIRO__
#define __Z64OVL_Z_BG_GND_FIREMEIRO__

#define Z_BG_GND_FIREMEIRO_ACTOR_NUMBER     0x01B3
#define Z_BG_GND_FIREMEIRO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_GND_FIREMEIRO_OBJECT_NUMBER    0x0179
#define Z_BG_GND_FIREMEIRO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_gnd_firemeiro_s z_bg_gnd_firemeiro_t;
struct z_bg_gnd_firemeiro_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ xyz_t start;
    /* 0x160 */ unshort wait_timer;
    /* 0x164 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0178 */

#endif /* __Z64OVL_Z_BG_GND_FIREMEIRO__ */
