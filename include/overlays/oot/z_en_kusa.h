#ifndef __Z64OVL_Z_EN_KUSA__
#define __Z64OVL_Z_EN_KUSA__

#define Z_EN_KUSA_ACTOR_NUMBER     0x0125
#define Z_EN_KUSA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_KUSA_OBJECT_NUMBER    0x0001
#define Z_EN_KUSA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_THROW_ONLY)

typedef struct z_en_kusa_s z_en_kusa_t;
struct z_en_kusa_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjPipe pipe;
    /* 0x18C */ short counter;
    /* 0x18E */ signed char bank_ID;
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_EN_KUSA__ */
