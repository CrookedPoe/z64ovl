#ifndef __Z64OVL_Z_EN_ENDING_HERO3__
#define __Z64OVL_Z_EN_ENDING_HERO3__

#define Z_EN_ENDING_HERO3_ACTOR_NUMBER     0x02A9
#define Z_EN_ENDING_HERO3_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ENDING_HERO3_OBJECT_NUMBER    0x00F0
#define Z_EN_ENDING_HERO3_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ending_hero3_s z_en_ending_hero3_t;
struct z_en_ending_hero3_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[17];
    /* 0x1EE */ s_xyz joint2[17];
    /* 0x254 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x258 */ short stat_mode;
}; /* size = 0x025C */

#endif /* __Z64OVL_Z_EN_ENDING_HERO3__ */
