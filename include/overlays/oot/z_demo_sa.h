#ifndef __Z64OVL_Z_DEMO_SA__
#define __Z64OVL_Z_DEMO_SA__

#define Z_DEMO_SA_ACTOR_NUMBER     0x00C9
#define Z_DEMO_SA_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_DEMO_SA_OBJECT_NUMBER    0x00BC
#define Z_DEMO_SA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_demo_sa_s z_demo_sa_t;
struct z_demo_sa_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ Eye_Anime eye_anime;
    /* 0x184 */ Eye_Anime mouth_anime;
    /* 0x188 */ int main_mode;
    /* 0x18C */ int draw_mode;
    /* 0x190 */ float alpha_timer;
    /* 0x194 */ unint alpha;
    /* 0x198 */ int birth_6k_flag;
    /* 0x19C */ int old_dousa;
    /* 0x1A0 */ int draw_ocarina;
}; /* size = 0x01B4 */

#endif /* __Z64OVL_Z_DEMO_SA__ */
