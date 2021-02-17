#ifndef __Z64OVL_Z_BG_HIDAN_DALM__
#define __Z64OVL_Z_BG_HIDAN_DALM__

#define Z_BG_HIDAN_DALM_ACTOR_NUMBER     0x0040
#define Z_BG_HIDAN_DALM_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HIDAN_DALM_OBJECT_NUMBER    0x002C
#define Z_BG_HIDAN_DALM_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_hidan_dalm_s z_bg_hidan_dalm_t;
struct z_bg_hidan_dalm_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned char sw_num;
    /* 0x15C */ ClObjTris ac_tris;
    /* 0x17C */ ClObjTrisElem tris_elem[4];
}; /* size = 0x02FC */

#endif /* __Z64OVL_Z_BG_HIDAN_DALM__ */
