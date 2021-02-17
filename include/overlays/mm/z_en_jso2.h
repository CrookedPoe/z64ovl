#ifndef __Z64OVL_Z_EN_JSO2__
#define __Z64OVL_Z_EN_JSO2__

#define Z_EN_JSO2_ACTOR_NUMBER     0x0182
#define Z_EN_JSO2_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_JSO2_OBJECT_NUMBER    0x0155
#define Z_EN_JSO2_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_SFX_SYSTEM)

typedef struct z_en_jso2_s z_en_jso2_t;
struct z_en_jso2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[20];
    /* 0x200 */ s_xyz joint2[20];
    /* 0x278 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x27C */ Demo_Walk_Status demo_walk_status;
    /* 0x284 */ short stat_mode;
    /* 0x286 */ short move_angle;
    /* 0x288 */ short move_angle_speed;
    /* 0x28A */ short move_timer;
    /* 0x28C */ short stop_timer;
    /* 0x28E */ short attack_timer;
    /* 0x290 */ short wait_timer;
    /* 0x294 */ float camera_mof_add;
    /* 0x298 */ float camera_mof_max;
    /* 0x29C */ int index;
    /* 0x2A0 */ short special_damage_timer;
    /* 0x2A2 */ short special_index;
    /* 0x2A4 */ float special_scale;
    /* 0x2A8 */ float special_scale2;
    /* 0x2AC */ float special_scale_max;
    /* 0x2B0 */ short special_count;
    /* 0x2B4 */ int dead_clear;
    /* 0x2B8 */ xyz_t back_pos;
    /* 0x2C4 */ xyz_t bomb_pos;
    /* 0x2D0 */ ACTOR* bomb_actor;
    /* 0x2D4 */ xyz_t shape_pos[12];
    /* 0x364 */ short shape_count;
    /* 0x366 */ short alpha;
    /* 0x368 */ u8 blure_flag;
    /* 0x36C */ int shield_flag;
    /* 0x370 */ u8 attack_return;
    /* 0x371 */ u8 sword_no_HIT;
    /* 0x374 */ float end_frame;
    /* 0x378 */ float scale;
    /* 0x37C */ float move_speed;
    /* 0x380 */ int blure_effect_indexR;
    /* 0x384 */ int blure_effect_indexL;
    /* 0x388 */ int shadow_count;
    /* 0x38C */ short shadow_point;
    /* 0x38E */ short txt_num;
    /* 0x390 */ xyz_t shadow_pos[20];
    /* 0x480 */ s_xyz shadow_rot[20];
    /* 0x4F8 */ s_xyz shadow[20][20];
    /* 0xE58 */ xyz_t damage_spd;
    /* 0xE64 */ xyz_t frame_pos[6];
    /* 0xEAC */ xyz_t frame_size[6];
    /* 0xEF4 */ ClObjPipe acoc_pipe_info;
    /* 0xF40 */ ClObjSwrd sword_Rpos;
    /* 0xFC0 */ ClObjSwrd sword_Lpos;
    /* 0x1040 */ int c_change_flag;
    /* 0x1044 */ short demo_timer;
    /* 0x1046 */ short demo_stat;
    /* 0x1048 */ short camera_no;
    /* 0x104A */ short demo_count;
    /* 0x104C */ float fovy;
    /* 0x1050 */ float fovy_max;
    /* 0x1054 */ xyz_t eye;
    /* 0x1060 */ xyz_t way;
    /* 0x106C */ xyz_t init_pos;
    /* 0x1078 */ xyz_t eye_max;
    /* 0x1084 */ xyz_t way_max;
}; /* size = 0x1090 */

#endif /* __Z64OVL_Z_EN_JSO2__ */
