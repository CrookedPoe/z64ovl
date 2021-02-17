#ifndef __Z64OVL_Z_BG_JYA_HAHENIRON__
#define __Z64OVL_Z_BG_JYA_HAHENIRON__

#define Z_BG_JYA_HAHENIRON_ACTOR_NUMBER     0x018F
#define Z_BG_JYA_HAHENIRON_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_JYA_HAHENIRON_OBJECT_NUMBER    0x016C
#define Z_BG_JYA_HAHENIRON_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_jya_haheniron_s z_bg_jya_haheniron_t;
struct z_bg_jya_haheniron_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjJntSph sph;
    /* 0x160 */ ClObjJntSphElem elem;
    /* 0x1A0 */ short count;
}; /* size = 0x01B4 */

#endif /* __Z64OVL_Z_BG_JYA_HAHENIRON__ */
