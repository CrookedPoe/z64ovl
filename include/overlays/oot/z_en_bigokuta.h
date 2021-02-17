#ifndef __Z64OVL_Z_EN_BIGOKUTA__
#define __Z64OVL_Z_EN_BIGOKUTA__

#define Z_EN_BIGOKUTA_ACTOR_NUMBER     0x00C6
#define Z_EN_BIGOKUTA_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BIGOKUTA_OBJECT_NUMBER    0x015F
#define Z_EN_BIGOKUTA_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_bigokuta_s z_en_bigokuta_t;
struct z_en_bigokuta_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ signed char move_direction_flg;
    /* 0x185 */ unsigned char turn_flg;
    /* 0x186 */ short timer;
    /* 0x188 */ short down_timer;
    /* 0x18A */ short rot_direction;
    /* 0x18C */ s_xyz joint1[20];
    /* 0x204 */ s_xyz joint2[20];
    /* 0x27C */ ClObjJntSph all_jntsph;
    /* 0x29C */ ClObjJntSphElem sph_elem;
    /* 0x2DC */ ClObjPipe all_pipe[2];
}; /* size = 0x0384 */

#endif /* __Z64OVL_Z_EN_BIGOKUTA__ */
