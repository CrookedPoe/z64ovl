#ifndef __Z64OVL_Z_BG_HAKA_WATER__
#define __Z64OVL_Z_BG_HAKA_WATER__

#define Z_BG_HAKA_WATER_ACTOR_NUMBER     0x00D7
#define Z_BG_HAKA_WATER_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_HAKA_WATER_OBJECT_NUMBER    0x008D
#define Z_BG_HAKA_WATER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_haka_water_s z_bg_haka_water_t;
struct z_bg_haka_water_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ unsigned char sw_flg;
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_BG_HAKA_WATER__ */
