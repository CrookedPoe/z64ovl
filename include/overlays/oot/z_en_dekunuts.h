#ifndef __Z64OVL_Z_EN_DEKUNUTS__
#define __Z64OVL_Z_EN_DEKUNUTS__

#define Z_EN_DEKUNUTS_ACTOR_NUMBER     0x0060
#define Z_EN_DEKUNUTS_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_DEKUNUTS_OBJECT_NUMBER    0x004A
#define Z_EN_DEKUNUTS_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_dekunuts_s z_en_dekunuts_t;
struct z_en_dekunuts_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ unsigned char se_flg;
    /* 0x185 */ unsigned char reverse_timer;
    /* 0x186 */ short timer;
    /* 0x188 */ short aim_angle_y;
    /* 0x18A */ short attack_cnt;
    /* 0x18C */ s_xyz joint1[25];
    /* 0x222 */ s_xyz joint2[25];
    /* 0x2B8 */ ClObjPipe acoc_pipe;
}; /* size = 0x0314 */

#endif /* __Z64OVL_Z_EN_DEKUNUTS__ */
