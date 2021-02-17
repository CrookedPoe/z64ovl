#ifndef __Z64OVL_Z_EN_FHG_FIRE__
#define __Z64OVL_Z_EN_FHG_FIRE__

#define Z_EN_FHG_FIRE_ACTOR_NUMBER     0x0000
#define Z_EN_FHG_FIRE_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_FHG_FIRE_OBJECT_NUMBER    0x005A
#define Z_EN_FHG_FIRE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_fhg_fire_s z_en_fhg_fire_t;
struct z_en_fhg_fire_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short timer[2];
    /* 0x144 */ short work[5];
    /* 0x150 */ float fwork[15];
    /* 0x18C */ Light_list* light_list;
    /* 0x190 */ Light_data light_data;
    /* 0x1A0 */ ClObjPipe acoc_pipe_info;
    /* 0x1EC */ u8 fee_flag;
    /* 0x1EE */ short fee_time;
    /* 0x1F0 */ float fee_scale;
}; /* size = 0x0204 */

#endif /* __Z64OVL_Z_EN_FHG_FIRE__ */
