#ifndef __Z64OVL_Z_EN_FIRE_ROCK__
#define __Z64OVL_Z_EN_FIRE_ROCK__

#define Z_EN_FIRE_ROCK_ACTOR_NUMBER     0x0060
#define Z_EN_FIRE_ROCK_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_FIRE_ROCK_OBJECT_NUMBER    0x0070
#define Z_EN_FIRE_ROCK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_fire_rock_s z_en_fire_rock_t;
struct z_en_fire_rock_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ROCKLIST rockpos;
    /* 0x160 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x164 */ float scale;
    /* 0x168 */ xyz_t real_pos;
    /* 0x174 */ xyz_t pl_srch_pos;
    /* 0x180 */ short no_check_timer;
    /* 0x182 */ short wait_timer;
    /* 0x184 */ short index;
    /* 0x186 */ u8 hani_out_frag;
    /* 0x188 */ ACTOR* En_Mother;
    /* 0x18C */ ClObjPipe acoc_pipe_info;
}; /* size = 0x01D8 */

#endif /* __Z64OVL_Z_EN_FIRE_ROCK__ */
