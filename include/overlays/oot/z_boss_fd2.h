#ifndef __Z64OVL_Z_BOSS_FD2__
#define __Z64OVL_Z_BOSS_FD2__

#define Z_BOSS_FD2_ACTOR_NUMBER     0x00A2
#define Z_BOSS_FD2_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_FD2_OBJECT_NUMBER    0x00A5
#define Z_BOSS_FD2_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_fd2_s z_boss_fd2_t;
struct z_boss_fd2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton_body;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ u8 not_AT;
    /* 0x186 */ short search_switch;
    /* 0x188 */ short move_mode;
    /* 0x18A */ short work[17];
    /* 0x1AC */ short timer[5];
    /* 0x1B8 */ float fwork[10];
    /* 0x1E0 */ float anime_end_frame;
    /* 0x1E4 */ float turn_spd;
    /* 0x1E8 */ float turn_spd_S;
    /* 0x1EC */ float move_swing;
    /* 0x1F0 */ short head_angleY;
    /* 0x1F4 */ xyz_t target_pos;
    /* 0x200 */ xyz_t fire_position;
    /* 0x20C */ s_xyz kubi_angle;
    /* 0x212 */ u8 hole_P;
    /* 0x213 */ u8 eye_tex_no;
    /* 0x214 */ xyz_t shape_angle[30];
    /* 0x37C */ xyz_t shape_pos[30];
    /* 0x4E4 */ xyz_t move_angle[100];
    /* 0x994 */ xyz_t move_pos[100];
    /* 0xE44 */ xyz_t Rarm_angle[4];
    /* 0xE74 */ xyz_t Larm_angle[4];
    /* 0xEA4 */ xyz_t sok_move_angle[10];
    /* 0xF1C */ xyz_t sok_move_pos[10];
    /* 0xF94 */ xyz_t sok_move_pos_spd[10];
    /* 0x100C */ float sok_move_scale[10];
    /* 0x1034 */ xyz_t sok_pos;
    /* 0x1040 */ xyz_t sok_move_angle_L[10];
    /* 0x10B8 */ xyz_t sok_move_pos_L[10];
    /* 0x1130 */ xyz_t sok_move_pos_spd_L[10];
    /* 0x11A8 */ float sok_move_scale_L[10];
    /* 0x11D0 */ xyz_t sok_pos_L;
    /* 0x11DC */ xyz_t sok_move_angle_R[10];
    /* 0x1254 */ xyz_t sok_move_pos_R[10];
    /* 0x12CC */ xyz_t sok_move_pos_spd_R[10];
    /* 0x1344 */ float sok_move_scale_R[10];
    /* 0x136C */ xyz_t sok_pos_R;
    /* 0x1378 */ float sok_swing_P;
    /* 0x137C */ float mouse_open;
    /* 0x1380 */ short demo_mode;
    /* 0x1382 */ short camera_no;
    /* 0x1384 */ xyz_t eye;
    /* 0x1390 */ xyz_t way;
    /* 0x139C */ xyz_t eyeS;
    /* 0x13A8 */ xyz_t wayS;
    /* 0x13B4 */ xyz_t eye_spd;
    /* 0x13C0 */ xyz_t way_spd;
    /* 0x13CC */ xyz_t eye_target;
    /* 0x13D8 */ xyz_t eye_target_ad;
    /* 0x13E4 */ xyz_t way_target;
    /* 0x13F0 */ xyz_t way_target_ad;
    /* 0x13FC */ float camera_morf;
    /* 0x1400 */ float camera_morf_spd;
    /* 0x1404 */ float demo_jisin_Y;
    /* 0x1408 */ float demo_jisin_YA;
    /* 0x140C */ ClObjJntSph acoc_jntsph_info;
    /* 0x142C */ ClObjJntSphElem jntsph_elem[9];
}; /* size = 0x167C */

#endif /* __Z64OVL_Z_BOSS_FD2__ */
