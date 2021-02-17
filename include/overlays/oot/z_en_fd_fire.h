#ifndef __Z64OVL_Z_EN_FD_FIRE__
#define __Z64OVL_Z_EN_FD_FIRE__

#define Z_EN_FD_FIRE_ACTOR_NUMBER     0x00A3
#define Z_EN_FD_FIRE_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_FD_FIRE_OBJECT_NUMBER    0x0003
#define Z_EN_FD_FIRE_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_fd_fire_s z_en_fd_fire_t;
struct z_en_fd_fire_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjPipe all_pipe;
    /* 0x18C */ float range;
    /* 0x190 */ float scale;
    /* 0x194 */ short count;
    /* 0x196 */ short timer;
    /* 0x198 */ short tex_speed;
}; /* size = 0x01AC */

#endif /* __Z64OVL_Z_EN_FD_FIRE__ */
