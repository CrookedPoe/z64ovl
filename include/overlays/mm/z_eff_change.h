#ifndef __Z64OVL_Z_EFF_CHANGE__
#define __Z64OVL_Z_EFF_CHANGE__

#define Z_EFF_CHANGE_ACTOR_NUMBER     0x0160
#define Z_EFF_CHANGE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EFF_CHANGE_OBJECT_NUMBER    0x0001
#define Z_EFF_CHANGE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_eff_change_s z_eff_change_t;
struct z_eff_change_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ cKF_SkeletonInfo_c kf_si;
    /* 0x174 */ s_xyz joint[6];
    /* 0x198 */ s_xyz morph[6];
    /* 0x1BC */ short timer;
    /* 0x1BE */ unchar prim[4];
    /* 0x1C2 */ unchar env[4];
    /* 0x1C8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01CC */

#endif /* __Z64OVL_Z_EFF_CHANGE__ */
