#ifndef __Z64OVL_Z_DEMO_EXT__
#define __Z64OVL_Z_DEMO_EXT__

#define Z_DEMO_EXT_ACTOR_NUMBER     0x0118
#define Z_DEMO_EXT_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_DEMO_EXT_OBJECT_NUMBER    0x005A
#define Z_DEMO_EXT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_demo_ext_s z_demo_ext_t;
struct z_demo_ext_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ int main_mode;
    /* 0x140 */ int draw_mode;
    /* 0x144 */ int old_dousa;
    /* 0x148 */ short scroll_speed[4];
    /* 0x150 */ short scroll_pos[4];
    /* 0x158 */ short roll_angle;
    /* 0x15C */ float timer;
    /* 0x160 */ unint alpha1;
    /* 0x164 */ unint alpha2;
    /* 0x168 */ float scale[3];
}; /* size = 0x0184 */

#endif /* __Z64OVL_Z_DEMO_EXT__ */
