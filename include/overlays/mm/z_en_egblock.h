#ifndef __Z64OVL_Z_EN_EGBLOCK__
#define __Z64OVL_Z_EN_EGBLOCK__

#define Z_EN_EGBLOCK_ACTOR_NUMBER     0x019F
#define Z_EN_EGBLOCK_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_EGBLOCK_OBJECT_NUMBER    0x018D
#define Z_EN_EGBLOCK_FLAGS            (ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_egblock_s z_en_egblock_t;
struct z_en_egblock_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ SKELETON_INFO skeleton;
    /* 0x1A0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1A4 */ short index;
    /* 0x1A6 */ short item_no;
    /* 0x1A8 */ short save_bit;
    /* 0x1AA */ short wait_timer;
    /* 0x1AC */ short stat_mode;
    /* 0x1B0 */ ClObjPipe acoc_pipe_info;
    /* 0x1FC */ EN_EGBLOCK_EFF en_egblock_eff[50];
}; /* size = 0x0DB4 */

#endif /* __Z64OVL_Z_EN_EGBLOCK__ */
