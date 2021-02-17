#ifndef __Z64OVL_Z_BG_MIZU_WATER__
#define __Z64OVL_Z_BG_MIZU_WATER__

#define Z_BG_MIZU_WATER_ACTOR_NUMBER     0x0065
#define Z_BG_MIZU_WATER_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MIZU_WATER_OBJECT_NUMBER    0x0059
#define Z_BG_MIZU_WATER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_mizu_water_s z_bg_mizu_water_t;
struct z_bg_mizu_water_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ int no;
    /* 0x144 */ float aim_pos_y;
    /* 0x148 */ float default_pos_y;
    /* 0x14C */ int sw_num;
}; /* size = 0x0160 */

#endif /* __Z64OVL_Z_BG_MIZU_WATER__ */
