#ifndef __Z64OVL_Z_BOSS_GANON2__
#define __Z64OVL_Z_BOSS_GANON2__

#define Z_BOSS_GANON2_ACTOR_NUMBER     0x017A
#define Z_BOSS_GANON2_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_GANON2_OBJECT_NUMBER    0x0153
#define Z_BOSS_GANON2_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_ganon2_s z_boss_ganon2_t;
struct z_boss_ganon2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ float end_frame;
    /* 0x188 */ float cut_se_frame;
    /* 0x18C */ short count;
    /* 0x18E */ short work[2];
    /* 0x192 */ short timer[5];
    /* 0x19C */ short move_mode;
    /* 0x1A0 */ float fwork[2];
    /* 0x1A8 */ xyz_t head_pos;
    /* 0x1B4 */ xyz_t tail_pos;
    /* 0x1C0 */ xyz_t r_foot_pos;
    /* 0x1CC */ xyz_t l_foot_pos;
    /* 0x1D8 */ xyz_t kata_posR;
    /* 0x1E4 */ xyz_t kata_posL;
    /* 0x1F0 */ xyz_t ken_pos_1;
    /* 0x1FC */ xyz_t ken_pos_2;
    /* 0x208 */ xyz_t ken_hit_pos;
    /* 0x214 */ float ken_scale;
    /* 0x218 */ float tuno_scale;
    /* 0x21C */ u8 shape_flash_mode;
    /* 0x21E */ short shape_flash;
    /* 0x220 */ short pl_flash;
    /* 0x224 */ xyz_t shape_pos[18];
    /* 0x2FC */ float shape_flash_size;
    /* 0x300 */ u8 eye_tex_no;
    /* 0x301 */ u8 atack_mode;
    /* 0x302 */ u8 sword_attack;
    /* 0x303 */ u8 look_on;
    /* 0x304 */ u8 demo_info;
    /* 0x306 */ short no_hit_time;
    /* 0x308 */ short mabataki;
    /* 0x30A */ short kubi_YA;
    /* 0x30C */ short kubi_XA;
    /* 0x310 */ float turn_spd;
    /* 0x314 */ float fire_wall_A;
    /* 0x318 */ short inazuma_A;
    /* 0x31C */ float inazuma_scale;
    /* 0x320 */ short inazuma_time;
    /* 0x322 */ short inazuma_set_time;
    /* 0x324 */ u8 fight_mode;
    /* 0x325 */ u8 bgck_on;
    /* 0x326 */ u8 inazuma_on;
    /* 0x327 */ u8 shape_no;
    /* 0x328 */ u8 walk_mode;
    /* 0x329 */ s8 kankyo_flag;
    /* 0x32C */ float kankyo_parcent;
    /* 0x330 */ short rnd_s;
    /* 0x332 */ short damage_flash;
    /* 0x334 */ short tail_damage;
    /* 0x336 */ short tail_base_X;
    /* 0x338 */ short tail_angle_X[5];
    /* 0x342 */ short tail_angle_Y[5];
    /* 0x34C */ float tail_count_X;
    /* 0x350 */ float tail_count_X_AD;
    /* 0x354 */ float tail_count2_X;
    /* 0x358 */ float tail_wide_X;
    /* 0x35C */ float tail_count_Y;
    /* 0x360 */ float tail_count_Y_AD;
    /* 0x364 */ float tail_count2_Y;
    /* 0x368 */ float tail_wide_Y;
    /* 0x36C */ float zelda_hadou_a;
    /* 0x370 */ float zelda_hadou_scale;
    /* 0x374 */ float zelda_flash_size;
    /* 0x378 */ float zelda_flash_zang;
    /* 0x37C */ float link_sword_flash_size;
    /* 0x380 */ short cry_se_time;
    /* 0x382 */ short gareki_break_se_time;
    /* 0x384 */ float demo_spin_angle_x;
    /* 0x388 */ u32 demo_time;
    /* 0x38C */ short demo_mode;
    /* 0x38E */ short camera_no;
    /* 0x390 */ short demo_ct;
    /* 0x392 */ short camera_sw;
    /* 0x394 */ xyz_t eye;
    /* 0x3A0 */ xyz_t way;
    /* 0x3AC */ xyz_t up;
    /* 0x3B8 */ xyz_t eye_spd;
    /* 0x3C4 */ xyz_t way_spd;
    /* 0x3D0 */ xyz_t eye_target;
    /* 0x3DC */ xyz_t eye_target_ad;
    /* 0x3E8 */ xyz_t way_target;
    /* 0x3F4 */ xyz_t way_target_ad;
    /* 0x400 */ float camera_morf;
    /* 0x404 */ float camera_morf_spd;
    /* 0x408 */ float fovy;
    /* 0x40C */ float demo_jisin_Y;
    /* 0x410 */ float demo_jisin_YA;
    /* 0x414 */ ClObjJntSph acoc_jntsph_info;
    /* 0x434 */ ClObjJntSph ken_jntsph_info;
    /* 0x454 */ ClObjJntSphElem body_jntsph_elem[16];
    /* 0x854 */ ClObjJntSphElem sword_jntsph_elem[2];
}; /* size = 0x08E4 */

#endif /* __Z64OVL_Z_BOSS_GANON2__ */
