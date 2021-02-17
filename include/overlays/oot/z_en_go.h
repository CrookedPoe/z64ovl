#ifndef __Z64OVL_Z_EN_GO__
#define __Z64OVL_Z_EN_GO__

#define Z_EN_GO_ACTOR_NUMBER     0x0152
#define Z_EN_GO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GO_OBJECT_NUMBER    0x00C9
#define Z_EN_GO_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_go_s z_en_go_t;
struct z_en_go_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe;
    /* 0x1D0 */ NpcBasicAct npcbasic;
    /* 0x1F8 */ float aim_speedF;
    /* 0x1FC */ short item_flags;
    /* 0x1FE */ short atck_timer;
    /* 0x200 */ short wake_timer;
    /* 0x202 */ short wait_timer;
    /* 0x204 */ short timer;
    /* 0x206 */ short count;
    /* 0x208 */ short path_count;
    /* 0x20A */ short bound;
    /* 0x20C */ short b_timer;
    /* 0x20E */ short d_timer;
    /* 0x210 */ short pw_wk_y[18];
    /* 0x234 */ short pw_wk_z[18];
    /* 0x258 */ GoEff eff[20];
}; /* size = 0x06C8 */

#endif /* __Z64OVL_Z_EN_GO__ */
