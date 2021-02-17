#ifndef __Z64OVL_Z_EN_MA1__
#define __Z64OVL_Z_EN_MA1__

#define Z_EN_MA1_ACTOR_NUMBER     0x00E7
#define Z_EN_MA1_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MA1_OBJECT_NUMBER    0x00E0
#define Z_EN_MA1_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_ma1_s z_en_ma1_t;
struct z_en_ma1_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe;
    /* 0x1D0 */ short sound_flag;
    /* 0x1D2 */ short timer;
    /* 0x1D4 */ short count;
    /* 0x1D6 */ short mouth;
    /* 0x1D8 */ NpcBasicAct npcbasic;
}; /* size = 0x0210 */

#endif /* __Z64OVL_Z_EN_MA1__ */
