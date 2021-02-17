#ifndef __Z64OVL_Z_EN_BOMJIMB__
#define __Z64OVL_Z_EN_BOMJIMB__

#define Z_EN_BOMJIMB_ACTOR_NUMBER     0x027F
#define Z_EN_BOMJIMB_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_BOMJIMB_OBJECT_NUMBER    0x0110
#define Z_EN_BOMJIMB_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_bomjimb_s z_en_bomjimb_t;
struct z_en_bomjimb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[21];
    /* 0x206 */ s_xyz joint2[21];
    /* 0x284 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x288 */ s_xyz neck_angle;
    /* 0x28E */ s_xyz neck_max_angle;
    /* 0x294 */ xyz_t move_pos;
    /* 0x2A0 */ xyz_t home_pos;
    /* 0x2AC */ short turn_timer;
    /* 0x2AE */ short wait_timer;
    /* 0x2B0 */ short move_timer;
    /* 0x2B2 */ short wipe_out;
    /* 0x2B4 */ float move_speed;
    /* 0x2B8 */ float end_frame;
    /* 0x2BC */ float water_surface_pos_y;
    /* 0x2C0 */ short sundry_count;
    /* 0x2C2 */ short eye_cont;
    /* 0x2C4 */ short eye_timer;
    /* 0x2C6 */ short type_index;
    /* 0x2C8 */ short index;
    /* 0x2CA */ short stat_mode;
    /* 0x2CC */ short move_stat;
    /* 0x2D0 */ int bg_count;
    /* 0x2D4 */ short exit_angle;
    /* 0x2D6 */ short search_angle;
    /* 0x2D8 */ short talk_count;
    /* 0x2DC */ int c_change_flag;
    /* 0x2E0 */ u8 sound_flag;
    /* 0x2E4 */ ACTOR* etc_Actor;
    /* 0x2E8 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x0334 */

#endif /* __Z64OVL_Z_EN_BOMJIMB__ */
