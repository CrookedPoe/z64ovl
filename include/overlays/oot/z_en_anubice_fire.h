#ifndef __Z64OVL_Z_EN_ANUBICE_FIRE__
#define __Z64OVL_Z_EN_ANUBICE_FIRE__

#define Z_EN_ANUBICE_FIRE_ACTOR_NUMBER     0x00E1
#define Z_EN_ANUBICE_FIRE_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_ANUBICE_FIRE_OBJECT_NUMBER    0x00D6
#define Z_EN_ANUBICE_FIRE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_anubice_fire_s z_en_anubice_fire_t;
struct z_en_anubice_fire_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ float scale;
    /* 0x144 */ float scale_max;
    /* 0x148 */ short index;
    /* 0x14A */ short time;
    /* 0x14C */ short bg_hit_time;
    /* 0x14E */ short dead_frag;
    /* 0x150 */ xyz_t move_pos[6];
    /* 0x198 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x01F4 */

#endif /* __Z64OVL_Z_EN_ANUBICE_FIRE__ */
