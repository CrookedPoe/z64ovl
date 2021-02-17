#ifndef __Z64OVL_Z_EN_TANRON6__
#define __Z64OVL_Z_EN_TANRON6__

#define Z_EN_TANRON6_ACTOR_NUMBER     0x0269
#define Z_EN_TANRON6_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_TANRON6_OBJECT_NUMBER    0x0240
#define Z_EN_TANRON6_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_tanron6_s z_en_tanron6_t;
struct z_en_tanron6_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[10];
    /* 0x1C4 */ s_xyz joint2[10];
    /* 0x200 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0204 */

#endif /* __Z64OVL_Z_EN_TANRON6__ */
