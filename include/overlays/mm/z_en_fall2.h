#ifndef __Z64OVL_Z_EN_FALL2__
#define __Z64OVL_Z_EN_FALL2__

#define Z_EN_FALL2_ACTOR_NUMBER     0x029C
#define Z_EN_FALL2_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_FALL2_OBJECT_NUMBER    0x0269
#define Z_EN_FALL2_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_fall2_s z_en_fall2_t;
struct z_en_fall2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ cKF_SkeletonInfo_c kf_si;
    /* 0x174 */ s_xyz joint[30];
    /* 0x228 */ s_xyz morph[30];
    /* 0x2DC */ void* evw_anime;
    /* 0x2E0 */ float alpha;
    /* 0x2E4 */ short dousa;
    /* 0x2E6 */ unshort part;
    /* 0x2E8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02EC */

#endif /* __Z64OVL_Z_EN_FALL2__ */
