#ifndef __Z64OVL_Z_EFF_STK__
#define __Z64OVL_Z_EFF_STK__

#define Z_EFF_STK_ACTOR_NUMBER     0x0275
#define Z_EFF_STK_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EFF_STK_OBJECT_NUMBER    0x01BE
#define Z_EFF_STK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_eff_stk_s z_eff_stk_t;
struct z_eff_stk_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ short count;
    /* 0x146 */ short trans;
    /* 0x148 */ float trans_f;
    /* 0x14C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_EFF_STK__ */
