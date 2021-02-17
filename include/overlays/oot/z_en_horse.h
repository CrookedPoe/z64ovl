#ifndef __Z64OVL_Z_EN_HORSE__
#define __Z64OVL_Z_EN_HORSE__

#define Z_EN_HORSE_ACTOR_NUMBER     0x0014
#define Z_EN_HORSE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_HORSE_OBJECT_NUMBER    0x001A
#define Z_EN_HORSE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_horse_s z_en_horse_t;
struct z_en_horse_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ EN_HORSE_ACTION_MODE mode;
    /* 0x140 */ int timer;
    /* 0x144 */ int max_timer;
    /* 0x148 */ HL_OUTSIDE outside;
    /* 0x14C */ signed char change_bank_ID;
    /* 0x150 */ Skin_AnimationWorkBuffer2 skin_awb2;
    /* 0x1E0 */ unsigned long status;
    /* 0x1E4 */ xyz_t old_pos;
    /* 0x1F0 */ short old_angle_sy;
    /* 0x1F4 */ int rail_wrk;
    /* 0x1F8 */ int muti_speed;
    /* 0x1FC */ int control_flag;
    /* 0x200 */ EN_HORSE_ANIM_TYPE anim_type;
    /* 0x204 */ float current_frame;
    /* 0x208 */ int sound_cnt;
    /* 0x20C */ xyz_t sound_head_pos;
    /* 0x218 */ xyz_t sound_head_calc_pos;
    /* 0x224 */ int effect_cnt;
    /* 0x228 */ unsigned char muti_counter;
    /* 0x22C */ int muti_recover_timer;
    /* 0x230 */ int muti_timer;
    /* 0x234 */ void (*draw_after)(/* ECOFF does not store param types */);
    /* 0x238 */ float front_y;
    /* 0x23C */ float back_y;
    /* 0x240 */ short frame_cnt;
    /* 0x244 */ EN_HORSE_ACTION_MODE mode_old;
    /* 0x248 */ xyz_t ride_pos;
    /* 0x254 */ xy_t stick;
    /* 0x25C */ xy_t old_stick;
    /* 0x264 */ float demo_start_y;
    /* 0x268 */ ClObjPipe acoc_pipe_info;
    /* 0x2B4 */ ClObjPipe acoc_pipe_info_back;
    /* 0x300 */ ClObjJntSph acoc_jntsph_info;
    /* 0x320 */ ClObjJntSphElem sph[1];
    /* 0x360 */ PLAYER_POS_RELATION ppr;
    /* 0x364 */ short standing_rot_y;
    /* 0x366 */ short target_angle;
    /* 0x368 */ short target_step_angle;
    /* 0x36A */ unsigned char mepachi_index;
    /* 0x36C */ short work[1];
    /* 0x370 */ HL_DEMO_TYPE demo;
    /* 0x378 */ HL_RACE_TYPE race;
    /* 0x38C */ HL_YABUSAME_TYPE yabu;
    /* 0x39C */ Spot09BridgeJump spot09_bj;
    /* 0x3B8 */ HlDust dust;
}; /* size = 0x03FC */

#endif /* __Z64OVL_Z_EN_HORSE__ */
