#ifndef __Z64OVL_Z_EN_FIRE_ROCK__
#define __Z64OVL_Z_EN_FIRE_ROCK__

#define Z_EN_FIRE_ROCK_ACTOR_NUMBER     0x00B5
#define Z_EN_FIRE_ROCK_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_FIRE_ROCK_OBJECT_NUMBER    0x0092
#define Z_EN_FIRE_ROCK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_fire_rock_s z_en_fire_rock_t;
struct z_en_fire_rock_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ROCKLIST rockpos;
    /* 0x158 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x15C */ float scale;
    /* 0x160 */ xyz_t real_pos;
    /* 0x16C */ xyz_t pl_srch_pos;
    /* 0x178 */ short no_check_timer;
    /* 0x17A */ short wait_timer;
    /* 0x17C */ short index;
    /* 0x17E */ u8 hani_out_frag;
    /* 0x180 */ ACTOR* En_Mother;
    /* 0x184 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x01E0 */

#endif /* __Z64OVL_Z_EN_FIRE_ROCK__ */
