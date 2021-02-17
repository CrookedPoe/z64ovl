#ifndef __Z64OVL_Z_EN_STOP_HEISHI__
#define __Z64OVL_Z_EN_STOP_HEISHI__

#define Z_EN_STOP_HEISHI_ACTOR_NUMBER     0x01C7
#define Z_EN_STOP_HEISHI_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_STOP_HEISHI_OBJECT_NUMBER    0x01B6
#define Z_EN_STOP_HEISHI_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_stop_heishi_s z_en_stop_heishi_t;
struct z_en_stop_heishi_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[17];
    /* 0x1EE */ s_xyz joint2[17];
    /* 0x254 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x258 */ s_xyz neck_angle;
    /* 0x25E */ s_xyz neck_max_angle;
    /* 0x264 */ u8 senter_return;
    /* 0x265 */ u8 check_on;
    /* 0x268 */ int c_change_flag;
    /* 0x26C */ float end_frame;
    /* 0x270 */ short wait_timer;
    /* 0x272 */ short buruburu_timer;
    /* 0x274 */ short haba_mode_stat;
    /* 0x276 */ short index;
    /* 0x278 */ short stat_mode;
    /* 0x27A */ short save_bit;
    /* 0x27C */ short talk_count;
    /* 0x27E */ short next_talk_message;
    /* 0x280 */ short search_angle_Y;
    /* 0x284 */ int kyorokyoro_count;
    /* 0x288 */ float check_pos;
    /* 0x28C */ float move_speed;
    /* 0x290 */ xyz_t face_pos;
    /* 0x29C */ ClObjPipe acoc_pipe_info;
}; /* size = 0x02E8 */

#endif /* __Z64OVL_Z_EN_STOP_HEISHI__ */
