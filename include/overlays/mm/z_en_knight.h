#ifndef __Z64OVL_Z_EN_KNIGHT__
#define __Z64OVL_Z_EN_KNIGHT__

#define Z_EN_KNIGHT_ACTOR_NUMBER     0x0115
#define Z_EN_KNIGHT_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_KNIGHT_OBJECT_NUMBER    0x0156
#define Z_EN_KNIGHT_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_knight_s z_en_knight_t;
struct z_en_knight_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ unshort day_time;
    /* 0x146 */ short count;
    /* 0x148 */ u8 move_mode;
    /* 0x14A */ short timer[3];
    /* 0x150 */ u8 cont_flag;
    /* 0x151 */ u8 move_stop;
    /* 0x152 */ u8 bgcheck_on;
    /* 0x153 */ u8 karten_close;
    /* 0x154 */ u8 karten_open;
    /* 0x156 */ short damage;
    /* 0x158 */ short damage_flash;
    /* 0x15A */ short check_angle_Y;
    /* 0x15C */ short check_angle_Y_SPD;
    /* 0x15E */ short eff_hit_time;
    /* 0x160 */ short smoke_al;
    /* 0x162 */ u8 head_off;
    /* 0x164 */ xyz_t head_offset;
    /* 0x170 */ short player_angle_X;
    /* 0x172 */ short player_angle_Y;
    /* 0x174 */ short hiza_L;
    /* 0x176 */ short hiza_R;
    /* 0x178 */ short sune_L;
    /* 0x17A */ short sune_R;
    /* 0x17C */ float model_alpha;
    /* 0x180 */ float shadow_alpha;
    /* 0x184 */ short neck_angle_Y;
    /* 0x186 */ short neck_angle_YS;
    /* 0x188 */ short neck_angle_X;
    /* 0x18A */ short neck_angle_XS;
    /* 0x18C */ short neck_angle_spd;
    /* 0x18E */ short neck_angle_spd_P;
    /* 0x190 */ u8 atack;
    /* 0x191 */ u8 defence;
    /* 0x192 */ u8 defence_ok;
    /* 0x193 */ u8 tate_hit;
    /* 0x194 */ SKELETON_INFO skeleton;
    /* 0x1D8 */ float end_frame;
    /* 0x1DC */ xyz_t shape_pos[15];
    /* 0x290 */ u8 arara_mode;
    /* 0x291 */ u8 mir_hit;
    /* 0x292 */ u8 away_mode;
    /* 0x294 */ float eff_scale1;
    /* 0x298 */ float eff_scale2;
    /* 0x29C */ float eff_alpha;
    /* 0x2A0 */ u8 eff_no;
    /* 0x2A1 */ u8 eff_mode;
    /* 0x2A2 */ short eff_time;
    /* 0x2A4 */ float damage_speed_X;
    /* 0x2A8 */ float damage_speed_Z;
    /* 0x2AC */ xyz_t foot_pos[2];
    /* 0x2C4 */ s_xyz joint1[29];
    /* 0x372 */ s_xyz joint2[29];
    /* 0x420 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x424 */ void (*process_OLD)(/* ECOFF does not store param types */);
    /* 0x428 */ short mouse_angle;
    /* 0x42C */ float mouse_open;
    /* 0x430 */ float mouse_open_S;
    /* 0x434 */ xyz_t mouse_pos;
    /* 0x440 */ xyz_t target;
    /* 0x44C */ u8 blur_pt;
    /* 0x450 */ float blur_al;
    /* 0x454 */ xyz_t blur_pos;
    /* 0x460 */ xyz_t blur_ang;
    /* 0x46C */ float wepon_scale;
    /* 0x470 */ float wepon_Sscale;
    /* 0x474 */ float mir_flash_size;
    /* 0x478 */ short tate_flash;
    /* 0x47C */ xyz_t tate_pos;
    /* 0x488 */ ClObjPipe head_pipe_info;
    /* 0x4D4 */ ClObjJntSph ken_jntsph_info;
    /* 0x4F4 */ ClObjJntSphElem ken_jntsph_elem[1];
    /* 0x534 */ ClObjJntSph tate_jntsph_info;
    /* 0x554 */ ClObjJntSphElem tate_jntsph_elem[1];
    /* 0x594 */ ClObjJntSph body_jntsph_info;
    /* 0x5B4 */ ClObjJntSphElem body_jntsph_elem[2];
    /* 0x634 */ ClObjPipe pl_pipe_info;
    /* 0x680 */ u8 hikari_ok;
    /* 0x684 */ u32 demo_time;
    /* 0x688 */ short demo_mode;
    /* 0x68A */ short camera_no;
    /* 0x68C */ xyz_t eye;
    /* 0x698 */ xyz_t way;
    /* 0x6A4 */ float camera_morf;
    /* 0x6A8 */ float camera_morf2;
    /* 0x6AC */ short demo_player_ya;
    /* 0x6B0 */ float fovy;
    /* 0x6B4 */ u16 WALK_SE;
    /* 0x6B6 */ u16 LAUGH_SE;
    /* 0x6B8 */ u16 LAUGH2_SE;
    /* 0x6BA */ u16 NIGE_SE;
    /* 0x6BC */ u16 ATACK_SE;
    /* 0x6BE */ u16 DAMAGE_SE;
    /* 0x6C0 */ u16 DEAD_SE;
    /* 0x6C2 */ u16 DEAD_VOICE;
    /* 0x6C4 */ u8 mask_demo_on;
    /* 0x6C8 */ xyz_t se_pos_2nd;
}; /* size = 0x06D4 */

#endif /* __Z64OVL_Z_EN_KNIGHT__ */
