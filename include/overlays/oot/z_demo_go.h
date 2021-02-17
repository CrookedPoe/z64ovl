#ifndef __Z64OVL_Z_DEMO_GO__
#define __Z64OVL_Z_DEMO_GO__

#define Z_DEMO_GO_ACTOR_NUMBER     0x00CA
#define Z_DEMO_GO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_DEMO_GO_OBJECT_NUMBER    0x00C9
#define Z_DEMO_GO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_demo_go_s z_demo_go_t;
struct z_demo_go_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ Eye_Anime eye_anime;
    /* 0x184 */ int main_mode;
    /* 0x188 */ int draw_mode;
    /* 0x18C */ float timer;
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_DEMO_GO__ */
