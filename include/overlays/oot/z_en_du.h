#ifndef __Z64OVL_Z_EN_DU__
#define __Z64OVL_Z_EN_DU__

#define Z_EN_DU_ACTOR_NUMBER     0x0098
#define Z_EN_DU_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DU_OBJECT_NUMBER    0x009D
#define Z_EN_DU_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_du_s z_en_du_t;
struct z_en_du_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe;
    /* 0x1D0 */ short s_timer;
    /* 0x1D2 */ short timer;
    /* 0x1D4 */ short count;
    /* 0x1D6 */ short du_dance_seq;
    /* 0x1D8 */ short du_dance_typ;
    /* 0x1DA */ short demoseq;
    /* 0x1DC */ unsigned char eye_mode;
    /* 0x1DD */ unsigned char mou_mode;
    /* 0x1DE */ unsigned char han_mode;
    /* 0x1DF */ unsigned char eye;
    /* 0x1E0 */ unsigned char mou;
    /* 0x1E1 */ unsigned char han;
    /* 0x1E2 */ short eyetimer;
    /* 0x1E4 */ NpcBasicAct npcbasic;
}; /* size = 0x021C */

#endif /* __Z64OVL_Z_EN_DU__ */
