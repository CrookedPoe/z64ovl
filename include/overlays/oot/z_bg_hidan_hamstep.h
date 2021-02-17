#ifndef __Z64OVL_Z_BG_HIDAN_HAMSTEP__
#define __Z64OVL_Z_BG_HIDAN_HAMSTEP__

#define Z_BG_HIDAN_HAMSTEP_ACTOR_NUMBER     0x0071
#define Z_BG_HIDAN_HAMSTEP_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HIDAN_HAMSTEP_OBJECT_NUMBER    0x002C
#define Z_BG_HIDAN_HAMSTEP_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_hidan_hamstep_s z_bg_hidan_hamstep_t;
struct z_bg_hidan_hamstep_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ ClObjTris ac_tris;
    /* 0x174 */ ClObjTrisElem ac_tris_elem[2];
    /* 0x22C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x230 */ int actState;
    /* 0x234 */ int bound;
}; /* size = 0x0248 */

#endif /* __Z64OVL_Z_BG_HIDAN_HAMSTEP__ */
