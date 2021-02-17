#ifndef __Z64OVL_Z_EN_ENDING_HERO4__
#define __Z64OVL_Z_EN_ENDING_HERO4__

#define Z_EN_ENDING_HERO4_ACTOR_NUMBER     0x02AA
#define Z_EN_ENDING_HERO4_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ENDING_HERO4_OBJECT_NUMBER    0x01B6
#define Z_EN_ENDING_HERO4_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ending_hero4_s z_en_ending_hero4_t;
struct z_en_ending_hero4_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[17];
    /* 0x1EE */ s_xyz joint2[17];
    /* 0x254 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x258 */ short stat_mode;
}; /* size = 0x025C */

#endif /* __Z64OVL_Z_EN_ENDING_HERO4__ */
