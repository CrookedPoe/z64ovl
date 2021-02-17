#ifndef __Z64OVL_Z_EN_OKUTA__
#define __Z64OVL_Z_EN_OKUTA__

#define Z_EN_OKUTA_ACTOR_NUMBER     0x000E
#define Z_EN_OKUTA_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_OKUTA_OBJECT_NUMBER    0x0007
#define Z_EN_OKUTA_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_okuta_s z_en_okuta_t;
struct z_en_okuta_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ short timer;
    /* 0x186 */ short attack_cnt;
    /* 0x188 */ s_xyz joint1[38];
    /* 0x26C */ s_xyz joint2[38];
    /* 0x350 */ float aim_pos_y;
    /* 0x354 */ xyz_t head_scale;
    /* 0x360 */ ClObjPipe all_pipe;
}; /* size = 0x03BC */

#endif /* __Z64OVL_Z_EN_OKUTA__ */
