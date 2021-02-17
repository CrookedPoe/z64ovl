#ifndef __Z64OVL_Z_EN_BOMBERS2__
#define __Z64OVL_Z_EN_BOMBERS2__

#define Z_EN_BOMBERS2_ACTOR_NUMBER     0x0281
#define Z_EN_BOMBERS2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_BOMBERS2_OBJECT_NUMBER    0x0110
#define Z_EN_BOMBERS2_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_bombers2_s z_en_bombers2_t;
struct z_en_bombers2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[21];
    /* 0x206 */ s_xyz joint2[21];
    /* 0x284 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x288 */ s_xyz neck_angle;
    /* 0x28E */ s_xyz neck_max_angle;
    /* 0x294 */ s_xyz body_angle;
    /* 0x29C */ xyz_t side_pos;
    /* 0x2A8 */ int sundry_count;
    /* 0x2AC */ u8 back_flag;
    /* 0x2AE */ short c_change_flag;
    /* 0x2B0 */ short Event_now;
    /* 0x2B2 */ short wait_timer;
    /* 0x2B4 */ short message_stat;
    /* 0x2B6 */ short search_angle;
    /* 0x2B8 */ float end_frame;
    /* 0x2BC */ short eye_cont;
    /* 0x2BE */ short eye_timer;
    /* 0x2C0 */ short stat_mode;
    /* 0x2C2 */ short talk_count;
    /* 0x2C4 */ short aikotoba_check_count[5];
    /* 0x2CE */ short message_end_code;
    /* 0x2D0 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x031C */

#endif /* __Z64OVL_Z_EN_BOMBERS2__ */
