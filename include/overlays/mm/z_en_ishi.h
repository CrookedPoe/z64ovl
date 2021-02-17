#ifndef __Z64OVL_Z_EN_ISHI__
#define __Z64OVL_Z_EN_ISHI__

#define Z_EN_ISHI_ACTOR_NUMBER     0x00B0
#define Z_EN_ISHI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_ISHI_OBJECT_NUMBER    0x0001
#define Z_EN_ISHI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_THROW_ONLY)

typedef struct z_en_ishi_s z_en_ishi_t;
struct z_en_ishi_s {
    /* 0x0 */ ACTOR a;
    /* 0x144 */ ClObjPipe pipe;
    /* 0x190 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x194 */ signed char timer;
    /* 0x195 */ signed char no_hm_timer;
    /* 0x196 */ signed char bank_pos;
    /* 0x197 */ unsigned char info;
}; /* size = 0x0198 */

#endif /* __Z64OVL_Z_EN_ISHI__ */
