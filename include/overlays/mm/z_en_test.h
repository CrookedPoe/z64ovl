#ifndef __Z64OVL_Z_EN_TEST__
#define __Z64OVL_Z_EN_TEST__

#define Z_EN_TEST_ACTOR_NUMBER     0x0001
#define Z_EN_TEST_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_TEST_OBJECT_NUMBER    0x0001
#define Z_EN_TEST_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_test_s z_en_test_t;
struct z_en_test_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ cKF_SkeletonInfo_c kf_si;
    /* 0x174 */ unsigned long status;
    /* 0x178 */ s_xyz joint[12];
    /* 0x1C0 */ s_xyz morph[12];
    /* 0x208 */ unsigned char old_frame;
    /* 0x209 */ unsigned char remove_counter;
    /* 0x20A */ unsigned char sound_code;
    /* 0x20B */ unsigned char pad;
    /* 0x20C */ EN_TEST_EFF eff[20];
}; /* size = 0x06BC */

#endif /* __Z64OVL_Z_EN_TEST__ */
