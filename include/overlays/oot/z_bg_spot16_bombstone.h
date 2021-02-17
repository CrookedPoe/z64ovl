#ifndef __Z64OVL_Z_BG_SPOT16_BOMBSTONE__
#define __Z64OVL_Z_BG_SPOT16_BOMBSTONE__

#define Z_BG_SPOT16_BOMBSTONE_ACTOR_NUMBER     0x00CD
#define Z_BG_SPOT16_BOMBSTONE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_SPOT16_BOMBSTONE_OBJECT_NUMBER    0x00C2
#define Z_BG_SPOT16_BOMBSTONE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_spot16_bombstone_s z_bg_spot16_bombstone_t;
struct z_bg_spot16_bombstone_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ Gfx* model;
    /* 0x144 */ short timer;
    /* 0x146 */ short save_bit;
    /* 0x148 */ short idx;
    /* 0x14C */ float ss;
    /* 0x150 */ float cc;
    /* 0x154 */ ClObjJntSph oc_sph;
    /* 0x174 */ ClObjJntSphElem oc_sph_elem;
    /* 0x1B4 */ ClObjPipe b_burst_pipe;
    /* 0x200 */ short ang_spdX;
    /* 0x202 */ short ang_spdZ;
    /* 0x204 */ signed char hahen_bank_ID;
}; /* size = 0x0218 */

#endif /* __Z64OVL_Z_BG_SPOT16_BOMBSTONE__ */
