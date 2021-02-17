#ifndef __Z64OVL_Z_EN_MA2__
#define __Z64OVL_Z_EN_MA2__

#define Z_EN_MA2_ACTOR_NUMBER     0x00D9
#define Z_EN_MA2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MA2_OBJECT_NUMBER    0x00D0
#define Z_EN_MA2_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_ma2_s z_en_ma2_t;
struct z_en_ma2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe;
    /* 0x1D0 */ NpcBasicAct npcbasic;
    /* 0x1F8 */ short s_timer;
    /* 0x1FA */ short sound_flag;
    /* 0x1FC */ short timer;
    /* 0x1FE */ short count;
    /* 0x200 */ short mouth;
    /* 0x202 */ s_xyz pw_work[19];
}; /* size = 0x0284 */

#endif /* __Z64OVL_Z_EN_MA2__ */
