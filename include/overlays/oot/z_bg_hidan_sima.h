#ifndef __Z64OVL_Z_BG_HIDAN_SIMA__
#define __Z64OVL_Z_BG_HIDAN_SIMA__

#define Z_BG_HIDAN_SIMA_ACTOR_NUMBER     0x0046
#define Z_BG_HIDAN_SIMA_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HIDAN_SIMA_OBJECT_NUMBER    0x002C
#define Z_BG_HIDAN_SIMA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_hidan_sima_s z_bg_hidan_sima_t;
struct z_bg_hidan_sima_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer;
    /* 0x15C */ ClObjJntSph at_jntsph;
    /* 0x17C */ ClObjJntSphElem sph_elem[2];
}; /* size = 0x020C */

#endif /* __Z64OVL_Z_BG_HIDAN_SIMA__ */
