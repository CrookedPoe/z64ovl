#ifndef __Z64OVL_Z_EN_ENDING_HERO__
#define __Z64OVL_Z_EN_ENDING_HERO__

#define Z_EN_ENDING_HERO_ACTOR_NUMBER     0x02A2
#define Z_EN_ENDING_HERO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ENDING_HERO_OBJECT_NUMBER    0x0241
#define Z_EN_ENDING_HERO_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ending_hero_s z_en_ending_hero_t;
struct z_en_ending_hero_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[15];
    /* 0x1E2 */ s_xyz joint2[15];
    /* 0x23C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x240 */ short eye_timer;
    /* 0x242 */ short eye_cont;
    /* 0x244 */ short stat_mode;
}; /* size = 0x0248 */

#endif /* __Z64OVL_Z_EN_ENDING_HERO__ */
