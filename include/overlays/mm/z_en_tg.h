#ifndef __Z64OVL_Z_EN_TG__
#define __Z64OVL_Z_EN_TG__

#define Z_EN_TG_ACTOR_NUMBER     0x00E9
#define Z_EN_TG_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TG_OBJECT_NUMBER    0x0140
#define Z_EN_TG_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_tg_s z_en_tg_t;
struct z_en_tg_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ ClObjPipe all_pipe;
    /* 0x1D8 */ xyz_t foot_pos[2];
    /* 0x1F0 */ s_xyz jnt[21][2];
    /* 0x2EC */ short timer;
    /* 0x2F0 */ Eff_s eff[10];
}; /* size = 0x0548 */

#endif /* __Z64OVL_Z_EN_TG__ */
