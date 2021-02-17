#ifndef __Z64OVL_Z_EN_FG__
#define __Z64OVL_Z_EN_FG__

#define Z_EN_FG_ACTOR_NUMBER     0x0147
#define Z_EN_FG_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_FG_OBJECT_NUMBER    0x00BC
#define Z_EN_FG_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_CAN_HOOKSHOT_GRAB | ACTORFLAG_ARROW_CARRY)

typedef struct z_en_fg_s z_en_fg_t;
struct z_en_fg_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ ClObjPipe all_pipe;
    /* 0x1D8 */ s_xyz jnt[24][2];
    /* 0x2F8 */ short timer;
    /* 0x2FA */ short count;
    /* 0x2FC */ Eff_s eff[10];
}; /* size = 0x0554 */

#endif /* __Z64OVL_Z_EN_FG__ */
