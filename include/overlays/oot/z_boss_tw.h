#ifndef __Z64OVL_Z_BOSS_TW__
#define __Z64OVL_Z_BOSS_TW__

#define Z_BOSS_TW_ACTOR_NUMBER     0x00DC
#define Z_BOSS_TW_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_TW_OBJECT_NUMBER    0x00D3
#define Z_BOSS_TW_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_tw_s z_boss_tw_t;
struct z_boss_tw_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short work[20];
    /* 0x168 */ short timer[5];
    /* 0x174 */ float fwork[20];
    /* 0x1C4 */ float fog_R;
    /* 0x1C8 */ float fog_G;
    /* 0x1CC */ float fog_B;
    /* 0x1D0 */ float fog_N;
    /* 0x1D4 */ float fog_F;
    /* 0x1D8 */ xyz_t move_pos[50];
    /* 0x430 */ short move_mode;
    /* 0x434 */ xyz_t head_pos;
    /* 0x440 */ xyz_t tail_pos[5];
    /* 0x47C */ xyz_t magic_pos;
    /* 0x488 */ xyz_t l_hand_pos;
    /* 0x494 */ xyz_t r_hand_pos;
    /* 0x4A0 */ xyz_t target_pos;
    /* 0x4AC */ xyz_t ice_floor_pos;
    /* 0x4B8 */ float turn_spd;
    /* 0x4BC */ short eye_tex_no;
    /* 0x4BE */ short eye_tex_no2;
    /* 0x4C0 */ float houki_a;
    /* 0x4C4 */ float magic_a;
    /* 0x4C8 */ float magic_a2;
    /* 0x4CC */ float magic_a3;
    /* 0x4D0 */ float magic_r;
    /* 0x4D4 */ float magic_r_spd;
    /* 0x4D8 */ float magic_ang;
    /* 0x4DC */ float magic_ang2;
    /* 0x4E0 */ float magic_ang_spd2;
    /* 0x4E4 */ u8 beam_hit;
    /* 0x4E8 */ float beam_scale;
    /* 0x4EC */ short beam_mode;
    /* 0x4F0 */ xyz_t beam_gnd_pos;
    /* 0x4FC */ xyz_t beam_pos;
    /* 0x508 */ xyz_t beam_ang;
    /* 0x514 */ s_xyz beam_ang_s;
    /* 0x51C */ float beam_range;
    /* 0x520 */ xyz_t beam_pos2;
    /* 0x52C */ xyz_t beam_ang2;
    /* 0x538 */ float beam_range2;
    /* 0x53C */ xyz_t beam_camera_position;
    /* 0x548 */ xyz_t beam_camera_position2;
    /* 0x554 */ u8 disp_on;
    /* 0x555 */ u8 hit_ok;
    /* 0x556 */ short mother_arg;
    /* 0x558 */ SKELETON_INFO skeleton;
    /* 0x59C */ ClObjPipe acoc_pipe_info;
    /* 0x5E8 */ u8 head_flag;
    /* 0x5E9 */ u8 camera_sw;
    /* 0x5EA */ short demo_mode;
    /* 0x5EC */ short camera_no;
    /* 0x5EE */ short demo_ct;
    /* 0x5F0 */ xyz_t eye;
    /* 0x5FC */ xyz_t way;
    /* 0x608 */ xyz_t up;
    /* 0x614 */ xyz_t eye2;
    /* 0x620 */ xyz_t way2;
    /* 0x62C */ xyz_t eyeS;
    /* 0x638 */ xyz_t wayS;
    /* 0x644 */ xyz_t eye_spd;
    /* 0x650 */ xyz_t way_spd;
    /* 0x65C */ xyz_t eye_target;
    /* 0x668 */ xyz_t eye_target_ad;
    /* 0x674 */ xyz_t way_target;
    /* 0x680 */ xyz_t way_target_ad;
    /* 0x68C */ float camera_morf;
    /* 0x690 */ float camera_morf_spd;
    /* 0x694 */ float eye_range;
    /* 0x698 */ float eye_range_spd;
    /* 0x69C */ float eye_angle_Y;
    /* 0x6A0 */ float eye_angle_spd;
}; /* size = 0x06B4 */

#endif /* __Z64OVL_Z_BOSS_TW__ */
