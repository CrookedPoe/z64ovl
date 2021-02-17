#ifndef __Z64OVL_Z_BG_HIDAN_KOWARERUKABE__
#define __Z64OVL_Z_BG_HIDAN_KOWARERUKABE__

#define Z_BG_HIDAN_KOWARERUKABE_ACTOR_NUMBER     0x00CF
#define Z_BG_HIDAN_KOWARERUKABE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HIDAN_KOWARERUKABE_OBJECT_NUMBER    0x002C
#define Z_BG_HIDAN_KOWARERUKABE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_hidan_kowarerukabe_s z_bg_hidan_kowarerukabe_t;
struct z_bg_hidan_kowarerukabe_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ ClObjJntSph sph;
    /* 0x174 */ ClObjJntSphElem elem;
}; /* size = 0x01C4 */

#endif /* __Z64OVL_Z_BG_HIDAN_KOWARERUKABE__ */
