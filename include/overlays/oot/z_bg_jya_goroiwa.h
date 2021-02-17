#ifndef __Z64OVL_Z_BG_JYA_GOROIWA__
#define __Z64OVL_Z_BG_JYA_GOROIWA__

#define Z_BG_JYA_GOROIWA_ACTOR_NUMBER     0x00F9
#define Z_BG_JYA_GOROIWA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_JYA_GOROIWA_OBJECT_NUMBER    0x011F
#define Z_BG_JYA_GOROIWA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_jya_goroiwa_s z_bg_jya_goroiwa_t;
struct z_bg_jya_goroiwa_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjJntSph sph;
    /* 0x160 */ ClObjJntSphElem elem;
    /* 0x1A0 */ float spd_k;
    /* 0x1A4 */ short attack_flag;
    /* 0x1A6 */ short timer;
    /* 0x1A8 */ float shp_offset_spd;
}; /* size = 0x01BC */

#endif /* __Z64OVL_Z_BG_JYA_GOROIWA__ */
