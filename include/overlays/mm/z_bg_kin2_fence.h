#ifndef __Z64OVL_Z_BG_KIN2_FENCE__
#define __Z64OVL_Z_BG_KIN2_FENCE__

#define Z_BG_KIN2_FENCE_ACTOR_NUMBER     0x020F
#define Z_BG_KIN2_FENCE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_KIN2_FENCE_OBJECT_NUMBER    0x01F5
#define Z_BG_KIN2_FENCE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_kin2_fence_s z_bg_kin2_fence_t;
struct z_bg_kin2_fence_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjJntSph sph;
    /* 0x17C */ ClObjJntSphElem elem[4];
    /* 0x27C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x280 */ signed char ok_counter;
    /* 0x281 */ signed char ac_canncel_timer;
    /* 0x282 */ signed char mode_timer;
    /* 0x283 */ unsigned char pad_0[1];
}; /* size = 0x0284 */

#endif /* __Z64OVL_Z_BG_KIN2_FENCE__ */
