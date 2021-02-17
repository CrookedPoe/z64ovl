#ifndef __Z64OVL_Z_BOSS_MO__
#define __Z64OVL_Z_BOSS_MO__

#define Z_BOSS_MO_ACTOR_NUMBER     0x00C4
#define Z_BOSS_MO_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_MO_OBJECT_NUMBER    0x00B4
#define Z_BOSS_MO_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_mo_s z_boss_mo_t;
struct z_boss_mo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ Boss_Mo_actor* aite;
    /* 0x140 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x144 */ u8 delete_flag;
    /* 0x145 */ u8 hit_count;
    /* 0x146 */ u8 set_pos_pt;
    /* 0x148 */ short move_mode;
    /* 0x14A */ short work[18];
    /* 0x16E */ short timer[5];
    /* 0x178 */ float fwork[17];
    /* 0x1BC */ short bubble_set_time;
    /* 0x1BE */ short search_ya;
    /* 0x1C0 */ s8 atack_count;
    /* 0x1C1 */ u8 disp_on;
    /* 0x1C2 */ u8 player_hit;
    /* 0x1C4 */ xyz_t target_pos;
    /* 0x1D0 */ float vib_ad;
    /* 0x1D4 */ xyz_t pl_catch_pos;
    /* 0x1E0 */ s_xyz pl_catch_ang;
    /* 0x1E8 */ float scale_buf[300];
    /* 0x698 */ xyz_t shape_pos[41];
    /* 0x884 */ xyz_t shape_scale[41];
    /* 0xA70 */ xyz_t shape_scale2[41];
    /* 0xC5C */ s_xyz shape_angle_S[41];
    /* 0xD54 */ float angle_ad;
    /* 0xD58 */ float angle_sp;
    /* 0xD5C */ float swing_scale;
    /* 0xD60 */ xyz_t shape_world_pos[41];
    /* 0xF4C */ float fovy;
    /* 0xF50 */ short demo_mode;
    /* 0xF52 */ short camera_no;
    /* 0xF54 */ short demo_ct;
    /* 0xF58 */ xyz_t eye;
    /* 0xF64 */ xyz_t way;
    /* 0xF70 */ xyz_t up;
    /* 0xF7C */ xyz_t eyeS;
    /* 0xF88 */ xyz_t wayS;
    /* 0xF94 */ xyz_t eye_spd;
    /* 0xFA0 */ xyz_t way_spd;
    /* 0xFAC */ xyz_t eye_target;
    /* 0xFB8 */ xyz_t eye_target_ad;
    /* 0xFC4 */ xyz_t way_target;
    /* 0xFD0 */ xyz_t way_target_ad;
    /* 0xFDC */ float camera_morf;
    /* 0xFE0 */ float camera_morf_spd;
    /* 0xFE4 */ float demo_jisin_Y;
    /* 0xFE8 */ float demo_jisin_YA;
    /* 0xFEC */ float eye_range;
    /* 0xFF0 */ float eye_range_spd;
    /* 0xFF4 */ float eye_angle_Y;
    /* 0xFF8 */ float eye_angle_spd;
    /* 0xFFC */ float up_angle;
    /* 0x1000 */ xyz_t se_pos;
    /* 0x100C */ ClObjJntSph acoc_jntsph_info;
    /* 0x102C */ ClObjJntSphElem jntsph_elem[19];
    /* 0x14EC */ ClObjPipe acoc_pipe_info;
    /* 0x1538 */ SKELETON_INFO skeleton;
}; /* size = 0x158C */

#endif /* __Z64OVL_Z_BOSS_MO__ */
