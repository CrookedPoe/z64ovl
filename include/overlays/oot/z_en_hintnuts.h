#ifndef __Z64OVL_Z_EN_HINTNUTS__
#define __Z64OVL_Z_EN_HINTNUTS__

#define Z_EN_HINTNUTS_ACTOR_NUMBER     0x0192
#define Z_EN_HINTNUTS_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_HINTNUTS_OBJECT_NUMBER    0x0164
#define Z_EN_HINTNUTS_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_hintnuts_s z_en_hintnuts_t;
struct z_en_hintnuts_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ short timer;
    /* 0x186 */ short aim_angle_y;
    /* 0x188 */ unsigned short keep_talk_message;
    /* 0x18A */ s_xyz joint1[10];
    /* 0x1C6 */ s_xyz joint2[10];
    /* 0x204 */ ClObjPipe acoc_pipe;
}; /* size = 0x0260 */

#endif /* __Z64OVL_Z_EN_HINTNUTS__ */
