#ifndef __Z64OVL_Z_EN_MA3__
#define __Z64OVL_Z_EN_MA3__

#define Z_EN_MA3_ACTOR_NUMBER     0x01C5
#define Z_EN_MA3_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MA3_OBJECT_NUMBER    0x00D0
#define Z_EN_MA3_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_ma3_s z_en_ma3_t;
struct z_en_ma3_s {
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

#endif /* __Z64OVL_Z_EN_MA3__ */
