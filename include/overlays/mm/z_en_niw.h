#ifndef __Z64OVL_Z_EN_NIW__
#define __Z64OVL_Z_EN_NIW__

#define Z_EN_NIW_ACTOR_NUMBER     0x0011
#define Z_EN_NIW_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_NIW_OBJECT_NUMBER    0x000F
#define Z_EN_NIW_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_THROW_ONLY)

typedef struct z_en_niw_s z_en_niw_t;
struct z_en_niw_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[16];
    /* 0x1E8 */ s_xyz joint2[16];
    /* 0x248 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x24C */ short neck_change_timer;
    /* 0x24E */ short wing_change_timer;
    /* 0x250 */ short move_timer;
    /* 0x252 */ short wait_timer;
    /* 0x254 */ short runaway_timer;
    /* 0x256 */ short sound_timer;
    /* 0x258 */ short sound2_timer;
    /* 0x25A */ short sound3_timer;
    /* 0x25C */ short no_check_timer;
    /* 0x25E */ short non_player_damage_time;
    /* 0x260 */ short damage_timer;
    /* 0x264 */ float parts_max_angle[10];
    /* 0x28C */ short part_check_cont;
    /* 0x28E */ short stat_mode;
    /* 0x290 */ short summon_count;
    /* 0x292 */ short neck_count;
    /* 0x294 */ short foot_count;
    /* 0x296 */ short wing_count;
    /* 0x298 */ short move_count;
    /* 0x29A */ short drunk_count;
    /* 0x29C */ short parts_anime_stat;
    /* 0x29E */ short feather_broken;
    /* 0x2A0 */ short attacker_frag;
    /* 0x2A2 */ short index;
    /* 0x2A4 */ xyz_t start_pos;
    /* 0x2B0 */ xyz_t move_pos;
    /* 0x2BC */ xyz_t dush_pos;
    /* 0x2C8 */ xyz_t right_wing_angle;
    /* 0x2D4 */ xyz_t left_wing_angle;
    /* 0x2E0 */ float neck_angle;
    /* 0x2E4 */ float head_angle;
    /* 0x2E8 */ short work_angle;
    /* 0x2EA */ short head_check_cont;
    /* 0x2EC */ short ground_frag;
    /* 0x2EE */ short path_point;
    /* 0x2F0 */ short path_num;
    /* 0x2F4 */ xyz_t angle_ret;
    /* 0x300 */ float move_speed;
    /* 0x304 */ float turn_speed;
    /* 0x308 */ float eye_pos;
    /* 0x30C */ u8 move_stop;
    /* 0x310 */ ClObjPipe acoc_pipe_info;
    /* 0x35C */ NIW_EFF niw_eff[20];
}; /* size = 0x07BC */

#endif /* __Z64OVL_Z_EN_NIW__ */
