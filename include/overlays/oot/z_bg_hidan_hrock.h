#ifndef __Z64OVL_Z_BG_HIDAN_HROCK__
#define __Z64OVL_Z_BG_HIDAN_HROCK__

#define Z_BG_HIDAN_HROCK_ACTOR_NUMBER     0x0041
#define Z_BG_HIDAN_HROCK_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HIDAN_HROCK_OBJECT_NUMBER    0x002C
#define Z_BG_HIDAN_HROCK_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_hidan_hrock_s z_bg_hidan_hrock_t;
struct z_bg_hidan_hrock_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer;
    /* 0x15A */ unsigned char sw_num;
    /* 0x15C */ ClObjTris ac_tris;
    /* 0x17C */ ClObjTrisElem tris_elem[2];
}; /* size = 0x0244 */

#endif /* __Z64OVL_Z_BG_HIDAN_HROCK__ */
