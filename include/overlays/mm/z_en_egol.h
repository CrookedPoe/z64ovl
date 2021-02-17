#ifndef __Z64OVL_Z_EN_EGOL__
#define __Z64OVL_Z_EN_EGOL__

#define Z_EN_EGOL_ACTOR_NUMBER     0x0184
#define Z_EN_EGOL_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_EGOL_OBJECT_NUMBER    0x018D
#define Z_EN_EGOL_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_egol_s z_en_egol_t;
struct z_en_egol_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[24];
    /* 0x218 */ s_xyz joint2[24];
    /* 0x2A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2AC */ Path_Info* path;
    /* 0x2B0 */ short path_count;
    /* 0x2B2 */ short stat_mode;
    /* 0x2B4 */ short wait_timer;
    /* 0x2B6 */ short mabuta_timer;
    /* 0x2B8 */ short body_angle;
    /* 0x2BA */ short save_bit;
    /* 0x2BC */ short special_damage_timer;
    /* 0x2C0 */ xyz_t shape_pos[12];
    /* 0x350 */ short shape_count;
    /* 0x352 */ short rail_index;
    /* 0x354 */ int c_change_flag;
    /* 0x358 */ u8 reverse_flag;
    /* 0x35C */ float end_frame;
    /* 0x360 */ float start_hani;
    /* 0x364 */ float beam_hani;
    /* 0x368 */ float back_move_speed;
    /* 0x36C */ float beam_ex_scale[2];
    /* 0x374 */ short mabuta_angle;
    /* 0x376 */ short mabuta_max_angle;
    /* 0x378 */ short timer_count;
    /* 0x37C */ int count;
    /* 0x380 */ int beam_ex_flag;
    /* 0x384 */ short beam_ex_rot;
    /* 0x388 */ int beam_ex_stat;
    /* 0x38C */ int attack_flag;
    /* 0x390 */ xyz_t damage_spd;
    /* 0x39C */ xyz_t eye_pos;
    /* 0x3A8 */ xyz_t beam_pos;
    /* 0x3B4 */ xyz_t beam_scale;
    /* 0x3C0 */ xyz_t beam_max_scale;
    /* 0x3CC */ xyz_t search_pos;
    /* 0x3D8 */ xyz_t left_foot_pos;
    /* 0x3E4 */ xyz_t right_foot_pos;
    /* 0x3F0 */ xyz_t left_hand_pos;
    /* 0x3FC */ xyz_t right_hand_pos;
    /* 0x408 */ xyz_t move_pos;
    /* 0x414 */ s_xyz eye_angle;
    /* 0x41A */ s_xyz beam_angle;
    /* 0x420 */ s_xyz prim;
    /* 0x426 */ s_xyz env;
    /* 0x42C */ short egol_beam_flag;
    /* 0x430 */ int tex_y;
    /* 0x434 */ EN_EGOL_EFF en_egol_eff[100];
    /* 0x1BA4 */ ClObjJntSph sph_pos;
    /* 0x1BC4 */ ClObjJntSphElem sph_elem[6];
    /* 0x1D44 */ ClObjJntSph sph_eye_pos;
    /* 0x1D64 */ ClObjJntSphElem sph_eye_elem[1];
    /* 0x1DA4 */ ClObjSwrd beam_sph_pos;
    /* 0x1E24 */ short demo_timer;
    /* 0x1E26 */ short demo_stat;
    /* 0x1E28 */ short camera_no;
    /* 0x1E2A */ short demo_count;
    /* 0x1E2C */ float fovy;
    /* 0x1E30 */ float fovy_max;
    /* 0x1E34 */ xyz_t eye;
    /* 0x1E40 */ xyz_t way;
    /* 0x1E4C */ xyz_t init_pos;
    /* 0x1E58 */ xyz_t eye_max;
    /* 0x1E64 */ xyz_t way_max;
}; /* size = 0x1E70 */

#endif /* __Z64OVL_Z_EN_EGOL__ */
