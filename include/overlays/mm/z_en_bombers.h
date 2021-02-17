#ifndef __Z64OVL_Z_EN_BOMBERS__
#define __Z64OVL_Z_EN_BOMBERS__

#define Z_EN_BOMBERS_ACTOR_NUMBER     0x0280
#define Z_EN_BOMBERS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_BOMBERS_OBJECT_NUMBER    0x0110
#define Z_EN_BOMBERS_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_bombers_s z_en_bombers_t;
struct z_en_bombers_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[21];
    /* 0x206 */ s_xyz joint2[21];
    /* 0x284 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x288 */ s_xyz neck_angle;
    /* 0x28E */ s_xyz neck_max_angle;
    /* 0x294 */ xyz_t move_pos;
    /* 0x2A0 */ short move_stat;
    /* 0x2A2 */ short sundry_count;
    /* 0x2A4 */ short search_angle;
    /* 0x2A6 */ short message_end_code;
    /* 0x2A8 */ short wait_timer;
    /* 0x2AA */ short move_timer;
    /* 0x2AC */ short demo_timer;
    /* 0x2B0 */ float end_frame;
    /* 0x2B4 */ float move_speed;
    /* 0x2B8 */ short eye_cont;
    /* 0x2BA */ short eye_timer;
    /* 0x2BC */ short type_index;
    /* 0x2BE */ short index;
    /* 0x2C0 */ short stat_mode;
    /* 0x2C2 */ short talk_count;
    /* 0x2C4 */ int c_change_flag;
    /* 0x2C8 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x0314 */

#endif /* __Z64OVL_Z_EN_BOMBERS__ */
