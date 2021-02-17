#ifndef __Z64OVL_Z_EN_BILI__
#define __Z64OVL_Z_EN_BILI__

#define Z_EN_BILI_ACTOR_NUMBER     0x0034
#define Z_EN_BILI_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BILI_OBJECT_NUMBER    0x0021
#define Z_EN_BILI_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_NO_QUAKE | ACTORFLAG_ARROW_CARRY)

typedef struct z_en_bili_s z_en_bili_t;
struct z_en_bili_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ unsigned char txt_num;
    /* 0x185 */ unsigned char se_flg;
    /* 0x186 */ short timer;
    /* 0x188 */ s_xyz joint1[5];
    /* 0x1A6 */ s_xyz joint2[5];
    /* 0x1C4 */ ClObjPipe all_pipe;
}; /* size = 0x0220 */

#endif /* __Z64OVL_Z_EN_BILI__ */
