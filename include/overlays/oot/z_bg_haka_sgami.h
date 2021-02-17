#ifndef __Z64OVL_Z_BG_HAKA_SGAMI__
#define __Z64OVL_Z_BG_HAKA_SGAMI__

#define Z_BG_HAKA_SGAMI_ACTOR_NUMBER     0x00B1
#define Z_BG_HAKA_SGAMI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_HAKA_SGAMI_OBJECT_NUMBER    0x0001
#define Z_BG_HAKA_SGAMI_FLAGS            (ACTORFLAG_TARGET | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_haka_sgami_s z_bg_haka_sgami_t;
struct z_bg_haka_sgami_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ signed char change_bank_ID;
    /* 0x141 */ signed char invisible_flg;
    /* 0x142 */ short timer;
    /* 0x144 */ int blure_effect_index[2];
    /* 0x14C */ ClObjPipe oc_pipe;
    /* 0x198 */ ClObjTris at_tris;
    /* 0x1B8 */ ClObjTrisElem tris_elem[4];
}; /* size = 0x0338 */

#endif /* __Z64OVL_Z_BG_HAKA_SGAMI__ */
