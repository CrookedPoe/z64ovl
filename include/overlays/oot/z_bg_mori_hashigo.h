#ifndef __Z64OVL_Z_BG_MORI_HASHIGO__
#define __Z64OVL_Z_BG_MORI_HASHIGO__

#define Z_BG_MORI_HASHIGO_ACTOR_NUMBER     0x00E2
#define Z_BG_MORI_HASHIGO_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MORI_HASHIGO_OBJECT_NUMBER    0x0072
#define Z_BG_MORI_HASHIGO_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_mori_hashigo_s z_bg_mori_hashigo_t;
struct z_bg_mori_hashigo_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ ClObjJntSph sph;
    /* 0x174 */ ClObjJntSphElem elem;
    /* 0x1B4 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x1B8 */ short timer;
    /* 0x1BA */ short bound_count;
    /* 0x1BC */ signed char tex_bank_ID;
}; /* size = 0x01D0 */

#endif /* __Z64OVL_Z_BG_MORI_HASHIGO__ */
