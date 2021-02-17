#ifndef __Z64OVL_Z_EN_BSB__
#define __Z64OVL_Z_EN_BSB__

#define Z_EN_BSB_ACTOR_NUMBER     0x028F
#define Z_EN_BSB_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_BSB_OBJECT_NUMBER    0x0268
#define Z_EN_BSB_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_bsb_s z_en_bsb_t;
struct z_en_bsb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[21];
    /* 0x206 */ s_xyz joint2[21];
    /* 0x284 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x288 */ Path_Info* path;
    /* 0x28C */ int path_count;
    /* 0x290 */ u8 hint_sound_flag;
    /* 0x292 */ short move_timer;
    /* 0x294 */ short wait_timer;
    /* 0x296 */ short old_dousa;
    /* 0x298 */ xyz_t damage_spd;
    /* 0x2A4 */ int sundry_count;
    /* 0x2A8 */ int sundry_flag;
    /* 0x2AC */ short sundry_angle;
    /* 0x2AE */ u8 dust_flag;
    /* 0x2AF */ u8 dush_bgm_flag;
    /* 0x2B0 */ int index;
    /* 0x2B4 */ short stat_mode;
    /* 0x2B6 */ short rail_index;
    /* 0x2B8 */ short start_bit;
    /* 0x2BA */ short end_bit;
    /* 0x2BC */ short angle_bak;
    /* 0x2C0 */ float part_break_pos;
    /* 0x2C4 */ float end_frame;
    /* 0x2C8 */ short talk_count;
    /* 0x2CA */ short body_alpha;
    /* 0x2CC */ short Event_now[5];
    /* 0x2D8 */ int c_change_flag;
    /* 0x2DC */ int type_flag;
    /* 0x2E0 */ xyz_t head_pos;
    /* 0x2EC */ xyz_t move_pos;
    /* 0x2F8 */ xyz_t foot_right_pos;
    /* 0x304 */ xyz_t foot_left_pos;
    /* 0x310 */ s_xyz right_hand_angle;
    /* 0x316 */ s_xyz left_hand_angle;
    /* 0x31C */ s_xyz break_rot_angle;
    /* 0x322 */ short special_damage_timer;
    /* 0x324 */ short special_index;
    /* 0x328 */ float special_scale;
    /* 0x32C */ float special_scale2;
    /* 0x330 */ xyz_t shape_pos[17];
    /* 0x3FC */ int shape_jyoint_no[17];
    /* 0x440 */ short shape_count;
    /* 0x444 */ EN_BSB_EFF en_bsb_eff[50];
    /* 0xF34 */ ClObjJntSph sph_pos;
    /* 0xF54 */ ClObjJntSphElem sph_elem[7];
    /* 0x1114 */ u32 demo_time;
    /* 0x1118 */ short demo_stat;
    /* 0x111A */ short camera_no;
    /* 0x111C */ short demo_count;
    /* 0x1120 */ float fovy;
    /* 0x1124 */ float fovy_max;
    /* 0x1128 */ xyz_t eye;
    /* 0x1134 */ xyz_t way;
    /* 0x1140 */ xyz_t eye_max;
    /* 0x114C */ xyz_t way_max;
}; /* size = 0x1158 */

#endif /* __Z64OVL_Z_EN_BSB__ */
