#ifndef __Z64OVL_Z_EN_MU__
#define __Z64OVL_Z_EN_MU__

#define Z_EN_MU_ACTOR_NUMBER     0x01AD
#define Z_EN_MU_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MU_OBJECT_NUMBER    0x0182
#define Z_EN_MU_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_mu_s z_en_mu_t;
struct z_en_mu_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe;
    /* 0x1D0 */ NpcBasicAct npcbasic;
    /* 0x1F8 */ unsigned short next_message;
    /* 0x1FA */ short pw_y[16];
    /* 0x21A */ short pw_z[16];
}; /* size = 0x024C */

#endif /* __Z64OVL_Z_EN_MU__ */
