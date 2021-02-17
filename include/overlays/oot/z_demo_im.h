#ifndef __Z64OVL_Z_DEMO_IM__
#define __Z64OVL_Z_DEMO_IM__

#define Z_DEMO_IM_ACTOR_NUMBER     0x00A9
#define Z_DEMO_IM_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_DEMO_IM_OBJECT_NUMBER    0x0087
#define Z_DEMO_IM_FLAGS            (ACTORFLAG_TARGET | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_demo_im_s z_demo_im_t;
struct z_demo_im_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[17];
    /* 0x1E6 */ s_xyz joint2[17];
    /* 0x24C */ Eye_Anime eye_anime;
    /* 0x250 */ int main_mode;
    /* 0x254 */ int draw_mode;
    /* 0x258 */ float alpha_timer;
    /* 0x25C */ unint alpha;
    /* 0x260 */ int birth_6k_flag;
    /* 0x264 */ int old_dousa;
    /* 0x268 */ float timer;
    /* 0x26C */ int birth_deku_flag;
    /* 0x270 */ int forLink_flag;
    /* 0x274 */ ClObjPipe stand_pipe;
    /* 0x2C0 */ int play_flag;
    /* 0x2C4 */ NpcBasicAct turn_work;
}; /* size = 0x02FC */

#endif /* __Z64OVL_Z_DEMO_IM__ */
