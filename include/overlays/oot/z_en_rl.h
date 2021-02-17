#ifndef __Z64OVL_Z_EN_RL__
#define __Z64OVL_Z_EN_RL__

#define Z_EN_RL_ACTOR_NUMBER     0x00A6
#define Z_EN_RL_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_RL_OBJECT_NUMBER    0x00A7
#define Z_EN_RL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_rl_s z_en_rl_t;
struct z_en_rl_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ Eye_Anime eye_anime;
    /* 0x184 */ int main_mode;
    /* 0x188 */ int draw_mode;
    /* 0x18C */ float alpha_timer;
    /* 0x190 */ unint alpha;
    /* 0x194 */ int birth_6k_flag;
    /* 0x198 */ int birth_medal;
}; /* size = 0x01AC */

#endif /* __Z64OVL_Z_EN_RL__ */
