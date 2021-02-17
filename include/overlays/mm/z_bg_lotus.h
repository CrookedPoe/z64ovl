#ifndef __Z64OVL_Z_BG_LOTUS__
#define __Z64OVL_Z_BG_LOTUS__

#define Z_BG_LOTUS_ACTOR_NUMBER     0x01B9
#define Z_BG_LOTUS_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_LOTUS_OBJECT_NUMBER    0x01A5
#define Z_BG_LOTUS_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_lotus_s z_bg_lotus_t;
struct z_bg_lotus_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ float water_pos;
    /* 0x164 */ unsigned char ride_flg;
    /* 0x166 */ short timer;
    /* 0x168 */ short float_timer;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_LOTUS__ */
