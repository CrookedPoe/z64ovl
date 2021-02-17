#ifndef __Z64OVL_Z_DEMO_IK__
#define __Z64OVL_Z_DEMO_IK__

#define Z_DEMO_IK_ACTOR_NUMBER     0x0114
#define Z_DEMO_IK_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_DEMO_IK_OBJECT_NUMBER    0x0106
#define Z_DEMO_IK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_demo_ik_s z_demo_ik_t;
struct z_demo_ik_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[2];
    /* 0x18C */ s_xyz joint2[2];
    /* 0x198 */ int main_mode;
    /* 0x19C */ int draw_mode;
    /* 0x1A0 */ int old_dousa;
}; /* size = 0x01B4 */

#endif /* __Z64OVL_Z_DEMO_IK__ */
