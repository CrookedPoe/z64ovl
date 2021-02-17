#ifndef __Z64OVL_Z_BG_JYA_BOMBCHUIWA__
#define __Z64OVL_Z_BG_JYA_BOMBCHUIWA__

#define Z_BG_JYA_BOMBCHUIWA_ACTOR_NUMBER     0x0159
#define Z_BG_JYA_BOMBCHUIWA_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_JYA_BOMBCHUIWA_OBJECT_NUMBER    0x00F1
#define Z_BG_JYA_BOMBCHUIWA_FLAGS            (ACTORFLAG_TARGET)

typedef struct z_bg_jya_bombchuiwa_s z_bg_jya_bombchuiwa_t;
struct z_bg_jya_bombchuiwa_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjJntSph sph;
    /* 0x160 */ ClObjJntSphElem elem;
    /* 0x1A0 */ float alpha;
    /* 0x1A4 */ short count;
    /* 0x1A6 */ unsigned char flag;
}; /* size = 0x01B8 */

#endif /* __Z64OVL_Z_BG_JYA_BOMBCHUIWA__ */
