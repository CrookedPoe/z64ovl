#ifndef __Z64OVL_Z_EN_ISHI__
#define __Z64OVL_Z_EN_ISHI__

#define Z_EN_ISHI_ACTOR_NUMBER     0x014E
#define Z_EN_ISHI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_ISHI_OBJECT_NUMBER    0x0002
#define Z_EN_ISHI_FLAGS            (ACTORFLAG_THROW_ONLY)

typedef struct z_en_ishi_s z_en_ishi_t;
struct z_en_ishi_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjPipe pipe;
}; /* size = 0x019C */

#endif /* __Z64OVL_Z_EN_ISHI__ */
