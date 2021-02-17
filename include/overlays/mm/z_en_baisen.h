#ifndef __Z64OVL_Z_EN_BAISEN__
#define __Z64OVL_Z_EN_BAISEN__

#define Z_EN_BAISEN_ACTOR_NUMBER     0x026C
#define Z_EN_BAISEN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_BAISEN_OBJECT_NUMBER    0x0247
#define Z_EN_BAISEN_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_baisen_s z_en_baisen_t;
struct z_en_baisen_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[20];
    /* 0x200 */ s_xyz joint2[20];
    /* 0x278 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x27C */ s_xyz neck_angle;
    /* 0x282 */ s_xyz neck_max_angle;
    /* 0x288 */ int c_change_flag;
    /* 0x28C */ int index;
    /* 0x290 */ int neck_flag;
    /* 0x294 */ short wait_timer;
    /* 0x298 */ float end_frame;
    /* 0x29C */ short stat_mode;
    /* 0x29E */ short search_angle;
    /* 0x2A0 */ short talk_count;
    /* 0x2A4 */ ACTOR* Demo_Actor;
    /* 0x2A8 */ ACTOR* Heishi_Actor;
    /* 0x2AC */ int demo_count;
    /* 0x2B0 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x02FC */

#endif /* __Z64OVL_Z_EN_BAISEN__ */
