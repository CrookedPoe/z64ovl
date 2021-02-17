#ifndef __Z64OVL_Z_EN_STH2__
#define __Z64OVL_Z_EN_STH2__

#define Z_EN_STH2_ACTOR_NUMBER     0x0279
#define Z_EN_STH2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_STH2_OBJECT_NUMBER    0x0001
#define Z_EN_STH2_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_sth2_s z_en_sth2_t;
struct z_en_sth2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[16];
    /* 0x1E8 */ s_xyz joint2[16];
    /* 0x248 */ unshort flag;
    /* 0x24A */ unsigned char bank;
    /* 0x24C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0250 */

#endif /* __Z64OVL_Z_EN_STH2__ */
