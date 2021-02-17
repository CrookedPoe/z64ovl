#ifndef __Z64OVL_Z_BG_JYA_MEGAMI__
#define __Z64OVL_Z_BG_JYA_MEGAMI__

#define Z_BG_JYA_MEGAMI_ACTOR_NUMBER     0x0156
#define Z_BG_JYA_MEGAMI_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_JYA_MEGAMI_OBJECT_NUMBER    0x00F1
#define Z_BG_JYA_MEGAMI_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_jya_megami_s z_bg_jya_megami_t;
struct z_bg_jya_megami_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ ClObjJntSph sph;
    /* 0x178 */ ClObjJntSphElem elem;
    /* 0x1B8 */ short light_cnt;
    /* 0x1BA */ short break_cnt;
    /* 0x1BC */ short ptn_num;
    /* 0x1C0 */ Megami_Hahen hahen[13];
}; /* size = 0x033C */

#endif /* __Z64OVL_Z_BG_JYA_MEGAMI__ */
