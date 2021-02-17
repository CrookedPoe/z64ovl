#ifndef __Z64OVL_Z_BG_JYA_KANAAMI__
#define __Z64OVL_Z_BG_JYA_KANAAMI__

#define Z_BG_JYA_KANAAMI_ACTOR_NUMBER     0x00FD
#define Z_BG_JYA_KANAAMI_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_JYA_KANAAMI_OBJECT_NUMBER    0x00F1
#define Z_BG_JYA_KANAAMI_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_jya_kanaami_s z_bg_jya_kanaami_t;
struct z_bg_jya_kanaami_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ short ang_spdX;
    /* 0x15A */ short count;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_JYA_KANAAMI__ */
