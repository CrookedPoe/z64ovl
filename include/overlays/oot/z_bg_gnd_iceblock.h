#ifndef __Z64OVL_Z_BG_GND_ICEBLOCK__
#define __Z64OVL_Z_BG_GND_ICEBLOCK__

#define Z_BG_GND_ICEBLOCK_ACTOR_NUMBER     0x01B7
#define Z_BG_GND_ICEBLOCK_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_GND_ICEBLOCK_OBJECT_NUMBER    0x0179
#define Z_BG_GND_ICEBLOCK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_gnd_iceblock_s z_bg_gnd_iceblock_t;
struct z_bg_gnd_iceblock_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ xyz_t aim_pos;
}; /* size = 0x0174 */

#endif /* __Z64OVL_Z_BG_GND_ICEBLOCK__ */
