#ifndef __Z64OVL_Z_EN_BOMJIMA__
#define __Z64OVL_Z_EN_BOMJIMA__

#define Z_EN_BOMJIMA_ACTOR_NUMBER     0x027E
#define Z_EN_BOMJIMA_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_BOMJIMA_OBJECT_NUMBER    0x0110
#define Z_EN_BOMJIMA_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_bomjima_s z_en_bomjima_t;
struct z_en_bomjima_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[21];
    /* 0x206 */ s_xyz joint2[21];
    /* 0x284 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x288 */ s_xyz neck_angle;
    /* 0x28E */ s_xyz neck_max_angle;
    /* 0x294 */ s_xyz body_angle;
    /* 0x29A */ s_xyz body_max_angle;
    /* 0x2A0 */ short stat_mode;
    /* 0x2A2 */ short move_stat;
    /* 0x2A4 */ xyz_t move_pos;
    /* 0x2B0 */ xyz_t Balloon_pos;
    /* 0x2BC */ short sundry_count;
    /* 0x2BE */ short move_timer;
    /* 0x2C0 */ short wait_timer;
    /* 0x2C2 */ short stop_timer;
    /* 0x2C4 */ short demo_timer;
    /* 0x2C6 */ short walk_timer;
    /* 0x2C8 */ short talk_count;
    /* 0x2CA */ short mes_stat;
    /* 0x2CC */ float end_frame;
    /* 0x2D0 */ float move_speed;
    /* 0x2D4 */ short Event_now[4];
    /* 0x2DC */ short search_angle;
    /* 0x2DE */ short demo_end_flag;
    /* 0x2E0 */ short eye_cont;
    /* 0x2E2 */ short eye_timer;
    /* 0x2E4 */ short index;
    /* 0x2E6 */ short type_index;
    /* 0x2E8 */ short demo_select_no_nuts;
    /* 0x2EA */ short demo_select_no_link;
    /* 0x2EC */ int c_change_flag;
    /* 0x2F0 */ ACTOR* BalloonActor;
    /* 0x2F4 */ short Event_Balloon;
    /* 0x2F8 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x0344 */

#endif /* __Z64OVL_Z_EN_BOMJIMA__ */
