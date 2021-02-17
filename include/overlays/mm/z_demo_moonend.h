#ifndef __Z64OVL_Z_DEMO_MOONEND__
#define __Z64OVL_Z_DEMO_MOONEND__

#define Z_DEMO_MOONEND_ACTOR_NUMBER     0x0296
#define Z_DEMO_MOONEND_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_DEMO_MOONEND_OBJECT_NUMBER    0x0270
#define Z_DEMO_MOONEND_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_demo_moonend_s z_demo_moonend_t;
struct z_demo_moonend_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ cKF_SkeletonInfo_c kf_si;
    /* 0x174 */ s_xyz joint[30];
    /* 0x228 */ s_xyz morph[30];
    /* 0x2DC */ unshort part;
    /* 0x2DE */ unshort dousa;
    /* 0x2E0 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02E4 */

#endif /* __Z64OVL_Z_DEMO_MOONEND__ */
