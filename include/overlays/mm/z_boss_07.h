#ifndef __Z64OVL_Z_BOSS_07__
#define __Z64OVL_Z_BOSS_07__

#define Z_BOSS_07_ACTOR_NUMBER     0x012F
#define Z_BOSS_07_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_07_OBJECT_NUMBER    0x0160
#define Z_BOSS_07_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_07_s z_boss_07_t;
struct z_boss_07_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ u8 change_flag;
    /* 0x149 */ u8 move_flag;
    /* 0x14A */ u8 kankyo_sw;
    /* 0x14B */ u8 kankyo_count;
    /* 0x14C */ short count;
    /* 0x14E */ u8 move_mode;
    /* 0x14F */ u8 swing_se;
    /* 0x150 */ short timer[3];
    /* 0x156 */ short land_se_time;
    /* 0x158 */ short no_hit;
    /* 0x15A */ short hit_ok;
    /* 0x15C */ short damage;
    /* 0x15E */ short damage_flash;
    /* 0x160 */ short ILL_A;
    /* 0x164 */ xyz_t target;
    /* 0x170 */ float target_sp;
    /* 0x174 */ u8 defence_ok;
    /* 0x178 */ float spin_angle;
    /* 0x17C */ float spin_angle_spd;
    /* 0x180 */ short spin_angleS_spd;
    /* 0x184 */ float hosei_ya;
    /* 0x188 */ float hosei_xa;
    /* 0x18C */ float base_speed;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ float end_frame;
    /* 0x1D8 */ int mesh_speed;
    /* 0x1DC */ s_xyz joint1[28];
    /* 0x284 */ s_xyz joint2[28];
    /* 0x32C */ float shape_flash_size;
    /* 0x330 */ float shape_decal_size;
    /* 0x334 */ xyz_t shape_pos[15];
    /* 0x3E8 */ ClObjJntSph body_jntsph_info;
    /* 0x408 */ ClObjJntSphElem body_jntsph_elem[11];
    /* 0x6C8 */ ClObjJntSph sude_jntsph_info;
    /* 0x6E8 */ ClObjJntSphElem sude_jntsph_elem[1];
    /* 0x728 */ ClObjPipe def_pipe_info;
    /* 0x774 */ u8 face_demo_start;
    /* 0x778 */ int muti_koma;
    /* 0x77C */ float muti_base_scale;
    /* 0x780 */ int muti_flash_ct1;
    /* 0x784 */ int muti_flash_ct2;
    /* 0x788 */ s_xyz hand_a;
    /* 0x790 */ float muti_G;
    /* 0x794 */ float kansei_power;
    /* 0x798 */ float kansei_brake;
    /* 0x79C */ float hari;
    /* 0x7A0 */ xyz_t muti_base_pos;
    /* 0x7AC */ xyz_t muti_pos[50];
    /* 0xA04 */ xyz_t muti_angle[50];
    /* 0xC5C */ xyz_t muti_spd[50];
    /* 0xEB4 */ float muti_ground_y[50];
    /* 0xF7C */ short maki_count;
    /* 0xF7E */ short maki;
    /* 0xF80 */ xyz_t maki_pos;
    /* 0xF8C */ float maki_ya;
    /* 0xF90 */ float maki_xa;
    /* 0xF94 */ s_xyz hand_a2;
    /* 0xF9C */ float muti_G2;
    /* 0xFA0 */ float kansei_power2;
    /* 0xFA4 */ float kansei_brake2;
    /* 0xFA8 */ float hari2;
    /* 0xFAC */ xyz_t muti_base_pos2;
    /* 0xFB8 */ xyz_t muti_pos2[50];
    /* 0x1210 */ xyz_t muti_angle2[50];
    /* 0x1468 */ xyz_t muti_spd2[50];
    /* 0x16C0 */ float muti_ground_y2[50];
    /* 0x1788 */ xyz_t foot_pos[2];
    /* 0x17A0 */ xyz_t hand_posL;
    /* 0x17AC */ xyz_t hand_posR;
    /* 0x17B8 */ float parts_scale[4];
    /* 0x17C8 */ float parts_scale_S[4];
    /* 0x17D8 */ s_xyz head_angle;
    /* 0x17E0 */ float hensin_scale1;
    /* 0x17E4 */ float hensin_scale2;
    /* 0x17E8 */ float hensin_scale_S1;
    /* 0x17EC */ float hensin_scale_S2;
    /* 0x17F0 */ float cest_scale_x;
    /* 0x17F4 */ float cest_scale_y;
    /* 0x17F8 */ float eff_scale1;
    /* 0x17FC */ float eff_scale2;
    /* 0x1800 */ float eff_alpha;
    /* 0x1804 */ u8 eff_no;
    /* 0x1805 */ u8 eff_mode;
    /* 0x1806 */ short eff_time;
    /* 0x1808 */ u8 fee_flag;
    /* 0x180C */ float fee_scale;
    /* 0x1810 */ xyz_t fee_pos;
    /* 0x181C */ short color_no;
    /* 0x1820 */ ClObjPipe pipe_info;
    /* 0x186C */ short shock;
    /* 0x1870 */ float hair_base_size;
    /* 0x1874 */ u8 hair_mode;
    /* 0x1878 */ xyz_t mask_base_pos;
    /* 0x1884 */ int tex_no;
    /* 0x1888 */ u8 bgcheck_ok;
    /* 0x188C */ float beam_scale1;
    /* 0x1890 */ float beam_scale12;
    /* 0x1894 */ float beam_range;
    /* 0x1898 */ float beam_scale_base;
    /* 0x189C */ xyz_t beam_pos;
    /* 0x18A8 */ xyz_t beam_pos2;
    /* 0x18B4 */ xyz_t beam_pos3;
    /* 0x18C0 */ float beam_range2;
    /* 0x18C4 */ s_xyz beam_sang;
    /* 0x18CC */ float damage_speed_X;
    /* 0x18D0 */ float damage_speed_Z;
    /* 0x18D4 */ short mask_spin_spd;
    /* 0x18D6 */ short fire_time;
    /* 0x18D8 */ short beam_time;
    /* 0x18DA */ u8 fire_mode;
    /* 0x18DB */ u8 beam_on;
    /* 0x18DC */ int blure_effect_index;
    /* 0x18E0 */ xyz_t beam_old_pos;
    /* 0x18EC */ u8 beam_koge;
    /* 0x18ED */ u8 beam_koge_old;
    /* 0x18F0 */ ClObjSwrd mask_swrd_info;
    /* 0x1970 */ ClObjSwrd mask_swrd_info2;
    /* 0x19F0 */ Bs07_hair hair[100];
    /* 0xAB40 */ short face_count;
    /* 0xAB44 */ float demo_player_ball;
    /* 0xAB48 */ u8 shadow_off;
    /* 0xAB4C */ float demo_beam_size0;
    /* 0xAB50 */ float demo_beam_size[30];
    /* 0xABC8 */ u32 demo_time;
    /* 0xABCC */ u32 demo_time2;
    /* 0xABD0 */ short demo_mode;
    /* 0xABD2 */ short camera_no;
    /* 0xABD4 */ xyz_t eye;
    /* 0xABE0 */ xyz_t way;
    /* 0xABEC */ xyz_t eye_target;
    /* 0xABF8 */ xyz_t way_target;
    /* 0xAC04 */ float eye_angle_Y;
    /* 0xAC08 */ float eye_angle_YS;
    /* 0xAC0C */ float camera_morf;
    /* 0xAC10 */ float camera_morf_spd;
    /* 0xAC14 */ float fwork;
    /* 0xAC18 */ float demo_jisin_Y;
    /* 0xAC1C */ float demo_jisin_YA;
}; /* size = 0xAC20 */

#endif /* __Z64OVL_Z_BOSS_07__ */
