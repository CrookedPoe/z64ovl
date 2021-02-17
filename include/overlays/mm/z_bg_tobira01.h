#ifndef __Z64OVL_Z_BG_TOBIRA01__
#define __Z64OVL_Z_BG_TOBIRA01__

#define Z_BG_TOBIRA01_ACTOR_NUMBER     0x01E0
#define Z_BG_TOBIRA01_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_TOBIRA01_OBJECT_NUMBER    0x01BF
#define Z_BG_TOBIRA01_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_tobira01_s z_bg_tobira01_t;
struct z_bg_tobira01_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ short timer;
    /* 0x162 */ short count;
    /* 0x164 */ float off_y;
    /* 0x168 */ int demo_flg;
    /* 0x16C */ int demo_cnt;
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_BG_TOBIRA01__ */
