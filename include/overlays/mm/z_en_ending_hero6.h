#ifndef __Z64OVL_Z_EN_ENDING_HERO6__
#define __Z64OVL_Z_EN_ENDING_HERO6__

#define Z_EN_ENDING_HERO6_ACTOR_NUMBER     0x02AC
#define Z_EN_ENDING_HERO6_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ENDING_HERO6_OBJECT_NUMBER    0x0001
#define Z_EN_ENDING_HERO6_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ending_hero6_s z_en_ending_hero6_t;
struct z_en_ending_hero6_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[20];
    /* 0x200 */ s_xyz joint2[20];
    /* 0x278 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x27C */ int c_change_flag;
    /* 0x280 */ int index;
    /* 0x284 */ signed char change_bank_ID;
    /* 0x286 */ short wait_timer;
    /* 0x288 */ short eye_timer;
    /* 0x28A */ short eye_cont;
    /* 0x28C */ float end_frame;
    /* 0x290 */ short stat_mode;
    /* 0x292 */ short talk_count;
}; /* size = 0x0294 */

#endif /* __Z64OVL_Z_EN_ENDING_HERO6__ */
