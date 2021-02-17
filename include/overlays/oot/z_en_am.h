#ifndef __Z64OVL_Z_EN_AM__
#define __Z64OVL_Z_EN_AM__

#define Z_EN_AM_ACTOR_NUMBER     0x0054
#define Z_EN_AM_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_AM_OBJECT_NUMBER    0x0038
#define Z_EN_AM_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_PRESS_SWITCH)

typedef struct z_en_am_s z_en_am_t;
struct z_en_am_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ SKELETON_INFO skeleton;
    /* 0x198 */ int mode;
    /* 0x19C */ s_xyz joint1[14];
    /* 0x1F0 */ s_xyz joint2[14];
    /* 0x244 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x248 */ short timer;
    /* 0x24A */ short timer2;
    /* 0x24C */ short timer3;
    /* 0x24E */ short timer4;
    /* 0x250 */ short timer5;
    /* 0x252 */ short aim_angle_y;
    /* 0x254 */ short attack_flg;
    /* 0x256 */ unsigned char env_a;
    /* 0x257 */ unsigned char reaction_buf;
    /* 0x258 */ xyz_t old_p;
    /* 0x264 */ ClObjPipe body_pipe;
    /* 0x2B0 */ ClObjPipe shield_pipe;
    /* 0x2FC */ ClObjSwrd sword_pos;
}; /* size = 0x038C */

#endif /* __Z64OVL_Z_EN_AM__ */
