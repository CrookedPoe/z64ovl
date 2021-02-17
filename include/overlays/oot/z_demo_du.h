#ifndef __Z64OVL_Z_DEMO_DU__
#define __Z64OVL_Z_DEMO_DU__

#define Z_DEMO_DU_ACTOR_NUMBER     0x00A8
#define Z_DEMO_DU_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_DEMO_DU_OBJECT_NUMBER    0x009D
#define Z_DEMO_DU_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_demo_du_s z_demo_du_t;
struct z_demo_du_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ Eye_Anime eye_anime;
    /* 0x184 */ Eye_Anime mouth_anime;
    /* 0x188 */ int main_mode;
    /* 0x18C */ int draw_mode;
    /* 0x190 */ float timer;
    /* 0x194 */ float alpha_timer;
    /* 0x198 */ unint alpha;
    /* 0x19C */ int birth_6k_flag;
    /* 0x1A0 */ int old_dousa;
}; /* size = 0x01B4 */

#endif /* __Z64OVL_Z_DEMO_DU__ */
