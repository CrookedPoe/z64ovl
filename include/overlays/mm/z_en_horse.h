#ifndef __Z64OVL_Z_EN_HORSE__
#define __Z64OVL_Z_EN_HORSE__

#define Z_EN_HORSE_ACTOR_NUMBER     0x000D
#define Z_EN_HORSE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_HORSE_OBJECT_NUMBER    0x0001
#define Z_EN_HORSE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_horse_s z_en_horse_t;
struct z_en_horse_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ EN_HORSE_ACTION_MODE mode;
    /* 0x148 */ int timer;
    /* 0x14C */ int max_timer;
    /* 0x150 */ HL_OUTSIDE outside;
    /* 0x154 */ signed char change_bank_ID;
    /* 0x158 */ Skin_AnimationWorkBuffer2 skin_awb2;
    /* 0x1E8 */ unsigned long status;
    /* 0x1EC */ unsigned long status2;
    /* 0x1F0 */ xyz_t old_pos;
    /* 0x1FC */ short old_angle_sy;
    /* 0x200 */ int rail_wrk;
    /* 0x204 */ int muti_speed;
    /* 0x208 */ int control_flag;
    /* 0x20C */ EN_HORSE_ANIM_TYPE anim_type;
    /* 0x210 */ float current_frame;
    /* 0x214 */ int sound_cnt;
    /* 0x218 */ xyz_t sound_head_pos;
    /* 0x224 */ xyz_t sound_head_calc_pos;
    /* 0x230 */ int effect_cnt;
    /* 0x234 */ unsigned char muti_counter;
    /* 0x238 */ int muti_recover_timer;
    /* 0x23C */ int muti_timer;
    /* 0x240 */ void (*draw_after)(/* ECOFF does not store param types */);
    /* 0x244 */ float front_y;
    /* 0x248 */ float back_y;
    /* 0x24C */ int front_movebg_actor_index;
    /* 0x250 */ short frame_cnt;
    /* 0x254 */ EN_HORSE_ACTION_MODE mode_old;
    /* 0x258 */ xyz_t ride_pos;
    /* 0x264 */ xy_t stick;
    /* 0x26C */ xy_t old_stick;
    /* 0x274 */ float demo_start_y;
    /* 0x278 */ ClObjPipe acoc_pipe_info;
    /* 0x2C4 */ ClObjPipe acoc_pipe_info_back;
    /* 0x310 */ ClObjJntSph acoc_jntsph_info;
    /* 0x330 */ ClObjJntSphElem sph[1];
    /* 0x370 */ PLAYER_POS_RELATION ppr;
    /* 0x374 */ short standing_rot_y;
    /* 0x376 */ short target_angle;
    /* 0x378 */ short target_step_angle;
    /* 0x37A */ unsigned char mepachi_index;
    /* 0x37C */ short work[1];
    /* 0x380 */ HL_DEMO_TYPE demo;
    /* 0x388 */ HL_RACE_TYPE race;
    /* 0x39C */ HL_YABUSAME_TYPE yabu;
    /* 0x3AC */ HlDust dust;
    /* 0x3E0 */ HL_DEMO2_TYPE demo2;
    /* 0x3E8 */ float offset_y_diff;
    /* 0x3EC */ short old_frame_angle_sy;
    /* 0x3EE */ s_xyz joint1[26];
    /* 0x48A */ s_xyz joint2[26];
    /* 0x528 */ float scale_param;
    /* 0x52C */ int pad_no;
    /* 0x530 */ int dno;
    /* 0x534 */ int pull_rail;
    /* 0x538 */ int pull_command;
    /* 0x53C */ int rail_id;
    /* 0x540 */ xyz_t yt_start;
    /* 0x54C */ int yatou_old_id;
    /* 0x550 */ int yatou_target_id;
    /* 0x554 */ int yatou_basha_rail_id;
    /* 0x558 */ int target_tubo;
    /* 0x55C */ int yt_frame;
    /* 0x560 */ int yt_max_frame;
    /* 0x564 */ int yt_path_type;
    /* 0x568 */ float yt_target_param;
    /* 0x56C */ float yt_now_speed;
    /* 0x570 */ xyz_t yt_set_pos;
    /* 0x57C */ xyz_t old_pos2;
    /* 0x588 */ short yt_basha_angle_sy;
    /* 0x58C */ int damage_timer;
    /* 0x590 */ int burn_timer;
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ HGC_MOVE_TYPE move_index;
    /* 0x160 */ int arg1;
    /* 0x164 */ Hgc_Union u;
}; /* size = 0x0594 */

#endif /* __Z64OVL_Z_EN_HORSE__ */
