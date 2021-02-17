#ifndef __Z64OVL_Z_EN_MUTO__
#define __Z64OVL_Z_EN_MUTO__

#define Z_EN_MUTO_ACTOR_NUMBER     0x026B
#define Z_EN_MUTO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MUTO_OBJECT_NUMBER    0x00F0
#define Z_EN_MUTO_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_muto_s z_en_muto_t;
struct z_en_muto_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[17];
    /* 0x1EE */ s_xyz joint2[17];
    /* 0x254 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x258 */ s_xyz neck_angle;
    /* 0x25E */ s_xyz neck_max_angle;
    /* 0x264 */ s_xyz body_angle;
    /* 0x26A */ s_xyz body_max_angle;
    /* 0x270 */ short wait_timer;
    /* 0x274 */ float end_frame;
    /* 0x278 */ short stat_mode;
    /* 0x27A */ short talk_count;
    /* 0x27C */ short search_angle;
    /* 0x280 */ int index;
    /* 0x284 */ int neck_flag;
    /* 0x288 */ ACTOR* Demo_Actor;
    /* 0x28C */ int demo_count;
    /* 0x290 */ int c_change_flag;
    /* 0x294 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x02E0 */

#endif /* __Z64OVL_Z_EN_MUTO__ */
