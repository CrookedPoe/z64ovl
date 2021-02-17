#ifndef __Z64OVL_Z_EN_NIW__
#define __Z64OVL_Z_EN_NIW__

#define Z_EN_NIW_ACTOR_NUMBER     0x0019
#define Z_EN_NIW_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_NIW_OBJECT_NUMBER    0x0013
#define Z_EN_NIW_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_THROW_ONLY)

typedef struct z_en_niw_s z_en_niw_t;
struct z_en_niw_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[16];
    /* 0x1E0 */ s_xyz joint2[16];
    /* 0x240 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x244 */ short neck_change_timer;
    /* 0x246 */ short wing_change_timer;
    /* 0x248 */ short work_timer;
    /* 0x24A */ short move_timer;
    /* 0x24C */ short wait_timer;
    /* 0x24E */ short runaway_timer;
    /* 0x250 */ short sound_timer;
    /* 0x252 */ short sound2_timer;
    /* 0x254 */ short sound3_timer;
    /* 0x256 */ short fainal_wait_timer;
    /* 0x258 */ short no_check_timer;
    /* 0x25A */ short non_player_damage_time;
    /* 0x25C */ float parts_max_angle[10];
    /* 0x284 */ short part_check_cont;
    /* 0x286 */ short summon_count;
    /* 0x288 */ short neck_count;
    /* 0x28A */ short foot_count;
    /* 0x28C */ short wing_count;
    /* 0x28E */ short move_count;
    /* 0x290 */ short drunk_count;
    /* 0x292 */ short parts_anime_stat;
    /* 0x294 */ short anger_meter;
    /* 0x296 */ short feather_broken;
    /* 0x298 */ short damage_frag;
    /* 0x29A */ short index;
    /* 0x29C */ xyz_t start_pos;
    /* 0x2A8 */ xyz_t move_pos;
    /* 0x2B4 */ xyz_t right_wing_angle;
    /* 0x2C0 */ xyz_t left_wing_angle;
    /* 0x2CC */ float neck_angle;
    /* 0x2D0 */ float head_angle;
    /* 0x2D4 */ short work_angle;
    /* 0x2D6 */ short head_check_cont;
    /* 0x2D8 */ short tonzura_go;
    /* 0x2DA */ short path_point;
    /* 0x2DC */ short path_num;
    /* 0x2E0 */ xyz_t angle_ret;
    /* 0x2EC */ float move_speed;
    /* 0x2F0 */ float turn_speed;
    /* 0x2F4 */ float eye_pos;
    /* 0x2F8 */ u8 move_stop;
    /* 0x2FC */ ClObjPipe acoc_pipe_info;
    /* 0x348 */ NIW_EFF niw_eff[20];
}; /* size = 0x07B8 */

#endif /* __Z64OVL_Z_EN_NIW__ */
