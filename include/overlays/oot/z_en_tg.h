#ifndef __Z64OVL_Z_EN_TG__
#define __Z64OVL_Z_EN_TG__

#define Z_EN_TG_ACTOR_NUMBER     0x01AC
#define Z_EN_TG_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TG_OBJECT_NUMBER    0x0182
#define Z_EN_TG_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_tg_s z_en_tg_t;
struct z_en_tg_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe;
    /* 0x1D0 */ NpcBasicAct npcbasic;
    /* 0x1F8 */ unsigned char mescnt;
}; /* size = 0x020C */

#endif /* __Z64OVL_Z_EN_TG__ */
