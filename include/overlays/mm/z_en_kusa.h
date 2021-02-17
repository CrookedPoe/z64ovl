#ifndef __Z64OVL_Z_EN_KUSA__
#define __Z64OVL_Z_EN_KUSA__

#define Z_EN_KUSA_ACTOR_NUMBER     0x0090
#define Z_EN_KUSA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_KUSA_OBJECT_NUMBER    0x0001
#define Z_EN_KUSA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_THROW_ONLY)

typedef struct z_en_kusa_s z_en_kusa_t;
struct z_en_kusa_s {
    /* 0x0 */ ACTOR a;
    /* 0x144 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjPipe pipe;
    /* 0x194 */ unsigned char counter;
    /* 0x195 */ signed char bank_ID;
    /* 0x196 */ signed char swing_idx;
    /* 0x197 */ unsigned char zombi_flag;
    /* 0x198 */ unsigned char info;
}; /* size = 0x019C */

#endif /* __Z64OVL_Z_EN_KUSA__ */
