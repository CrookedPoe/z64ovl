#ifndef __Z64OVL_Z_BG_SPOT01_OBJECTS2__
#define __Z64OVL_Z_BG_SPOT01_OBJECTS2__

#define Z_BG_SPOT01_OBJECTS2_ACTOR_NUMBER     0x019D
#define Z_BG_SPOT01_OBJECTS2_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT01_OBJECTS2_OBJECT_NUMBER    0x0001
#define Z_BG_SPOT01_OBJECTS2_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_spot01_objects2_s z_bg_spot01_objects2_t;
struct z_bg_spot01_objects2_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ float tgt_pos;
    /* 0x15C */ float pos_mov_per;
    /* 0x160 */ float pos_spd_max;
    /* 0x164 */ float def_pos_y;
    /* 0x168 */ int bank;
    /* 0x16C */ signed char change_bank_ID;
}; /* size = 0x0180 */

#endif /* __Z64OVL_Z_BG_SPOT01_OBJECTS2__ */
