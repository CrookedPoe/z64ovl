#ifndef __Z64OVL_Z_BG_HAKA_SHIP__
#define __Z64OVL_Z_BG_HAKA_SHIP__

#define Z_BG_HAKA_SHIP_ACTOR_NUMBER     0x00B0
#define Z_BG_HAKA_SHIP_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HAKA_SHIP_OBJECT_NUMBER    0x0069
#define Z_BG_HAKA_SHIP_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_haka_ship_s z_bg_haka_ship_t;
struct z_bg_haka_ship_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned char timer;
    /* 0x159 */ unsigned char sw_num;
    /* 0x15A */ short bell_angle_z;
    /* 0x15C */ xyz_t sound_pos;
}; /* size = 0x0178 */

#endif /* __Z64OVL_Z_BG_HAKA_SHIP__ */
