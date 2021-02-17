#ifndef __Z64OVL_Z_EN_HEISHI__
#define __Z64OVL_Z_EN_HEISHI__

#define Z_EN_HEISHI_ACTOR_NUMBER     0x026D
#define Z_EN_HEISHI_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_HEISHI_OBJECT_NUMBER    0x01B6
#define Z_EN_HEISHI_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_heishi_s z_en_heishi_t;
struct z_en_heishi_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[17];
    /* 0x1EE */ s_xyz joint2[17];
    /* 0x254 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x258 */ s_xyz neck_angle;
    /* 0x25E */ s_xyz neck_max_angle;
    /* 0x264 */ int c_change_flag;
    /* 0x268 */ int index;
    /* 0x26C */ int neck_flag;
    /* 0x270 */ short wait_timer;
    /* 0x272 */ short search_angle;
    /* 0x274 */ float end_frame;
    /* 0x278 */ short stat_mode;
    /* 0x27A */ short talk_count;
    /* 0x27C */ ACTOR* Demo_Actor;
    /* 0x280 */ int demo_count;
    /* 0x284 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x02D0 */

#endif /* __Z64OVL_Z_EN_HEISHI__ */
