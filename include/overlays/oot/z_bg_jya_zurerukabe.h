#ifndef __Z64OVL_Z_BG_JYA_ZURERUKABE__
#define __Z64OVL_Z_BG_JYA_ZURERUKABE__

#define Z_BG_JYA_ZURERUKABE_ACTOR_NUMBER     0x00FA
#define Z_BG_JYA_ZURERUKABE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_JYA_ZURERUKABE_OBJECT_NUMBER    0x00F1
#define Z_BG_JYA_ZURERUKABE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_jya_zurerukabe_s z_bg_jya_zurerukabe_t;
struct z_bg_jya_zurerukabe_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ short type;
    /* 0x15A */ short timer;
    /* 0x15C */ short posIdx;
    /* 0x15E */ short posDir;
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_BG_JYA_ZURERUKABE__ */
