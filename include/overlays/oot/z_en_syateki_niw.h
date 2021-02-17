#ifndef __Z64OVL_Z_EN_SYATEKI_NIW__
#define __Z64OVL_Z_EN_SYATEKI_NIW__

#define Z_EN_SYATEKI_NIW_ACTOR_NUMBER     0x0143
#define Z_EN_SYATEKI_NIW_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_SYATEKI_NIW_OBJECT_NUMBER    0x0013
#define Z_EN_SYATEKI_NIW_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_syateki_niw_s z_en_syateki_niw_t;
struct z_en_syateki_niw_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[16];
    /* 0x1E0 */ s_xyz joint2[16];
    /* 0x240 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x244 */ short neck_change_timer;
    /* 0x246 */ short foot_change_timer;
    /* 0x248 */ short wing_change_timer;
    /* 0x24A */ short work_timer;
    /* 0x24C */ short move_timer;
    /* 0x24E */ short wait_timer;
    /* 0x250 */ short anime_wait_timer;
    /* 0x252 */ short sound_timer;
    /* 0x254 */ float parts_max_angle[10];
    /* 0x27C */ short part_check_cont;
    /* 0x27E */ short neck_count;
    /* 0x280 */ short foot_count;
    /* 0x282 */ short wing_count;
    /* 0x284 */ short move_count;
    /* 0x286 */ short parts_anime_stat;
    /* 0x288 */ short drunk_count;
    /* 0x28A */ short syateki_mode;
    /* 0x28C */ short BG_grand_HIT;
    /* 0x28E */ short type_index;
    /* 0x290 */ short feather_broken;
    /* 0x294 */ xyz_t right_wing_angle;
    /* 0x2A0 */ xyz_t left_wing_angle;
    /* 0x2AC */ float neck_angle;
    /* 0x2B0 */ float head_angle;
    /* 0x2B4 */ float right_foot_angle;
    /* 0x2B8 */ float left_foot_angle;
    /* 0x2BC */ float move_speed;
    /* 0x2C0 */ float turn_speed;
    /* 0x2C4 */ float eye_pos;
    /* 0x2C8 */ float work_angle;
    /* 0x2CC */ xyz_t start_pos;
    /* 0x2D8 */ xyz_t move_pos;
    /* 0x2E4 */ float size;
    /* 0x2E8 */ u8 damage_frag;
    /* 0x2EC */ ClObjPipe acoc_pipe_info;
    /* 0x338 */ NIW_SYATEKI_EFF niw_syateki_eff[5];
}; /* size = 0x0460 */

#endif /* __Z64OVL_Z_EN_SYATEKI_NIW__ */
