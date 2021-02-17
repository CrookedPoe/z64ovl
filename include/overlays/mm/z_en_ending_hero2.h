#ifndef __Z64OVL_Z_EN_ENDING_HERO2__
#define __Z64OVL_Z_EN_ENDING_HERO2__

#define Z_EN_ENDING_HERO2_ACTOR_NUMBER     0x02A8
#define Z_EN_ENDING_HERO2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ENDING_HERO2_OBJECT_NUMBER    0x0247
#define Z_EN_ENDING_HERO2_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ending_hero2_s z_en_ending_hero2_t;
struct z_en_ending_hero2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[20];
    /* 0x200 */ s_xyz joint2[20];
    /* 0x278 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x27C */ short stat_mode;
}; /* size = 0x0280 */

#endif /* __Z64OVL_Z_EN_ENDING_HERO2__ */
