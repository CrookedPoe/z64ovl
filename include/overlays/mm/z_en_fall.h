#ifndef __Z64OVL_Z_EN_FALL__
#define __Z64OVL_Z_EN_FALL__

#define Z_EN_FALL_ACTOR_NUMBER     0x017C
#define Z_EN_FALL_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_FALL_OBJECT_NUMBER    0x0001
#define Z_EN_FALL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_fall_s z_en_fall_t;
struct z_en_fall_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ unshort time;
    /* 0x146 */ unshort day;
    /* 0x148 */ unchar bank;
    /* 0x14C */ float scl;
    /* 0x150 */ float rate;
    /* 0x154 */ unshort flag;
    /* 0x158 */ int now_move;
    /* 0x15C */ short scroll;
    /* 0x15E */ short scroll2;
    /* 0x160 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_EN_FALL__ */
