#ifndef __Z64OVL_Z_BOSS_01__
#define __Z64OVL_Z_BOSS_01__

#define Z_BOSS_01_ACTOR_NUMBER     0x0129
#define Z_BOSS_01_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_01_OBJECT_NUMBER    0x015A
#define Z_BOSS_01_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_01_s z_boss_01_t;
struct z_boss_01_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ short count;
    /* 0x148 */ int game_time;
    /* 0x14C */ u8 move_mode;
    /* 0x14E */ short timer[3];
    /* 0x154 */ float anime_hokan;
    /* 0x158 */ float anime_hokan2;
    /* 0x15C */ short damage;
    /* 0x15E */ short damage_flash;
    /* 0x160 */ u8 sword_atack;
    /* 0x161 */ u8 stat;
    /* 0x162 */ u8 wait_mode;
    /* 0x163 */ u8 neck_move;
    /* 0x164 */ SKELETON_INFO skeleton;
    /* 0x1A8 */ float end_frame;
    /* 0x1AC */ float old_speed_y;
    /* 0x1B0 */ float run_way;
    /* 0x1B4 */ float run_angle;
    /* 0x1B8 */ u8 atack;
    /* 0x1B9 */ u8 sude_atack;
    /* 0x1BA */ u8 defence;
    /* 0x1BB */ u8 defence_ok;
    /* 0x1BC */ u8 tate_hit;
    /* 0x1BE */ short no_hit;
    /* 0x1C0 */ u8 zanzo;
    /* 0x1C1 */ u8 first_demo;
    /* 0x1C4 */ float damage_speed_X;
    /* 0x1C8 */ float damage_speed_Z;
    /* 0x1CC */ short neck_angle_Y;
    /* 0x1CE */ short neck_angle_X;
    /* 0x1D0 */ s_xyz joint1[52];
    /* 0x308 */ s_xyz joint2[52];
    /* 0x440 */ xyz_t foot_pos[2];
    /* 0x458 */ xyz_t body_pos;
    /* 0x464 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x468 */ ClObjJntSph ken_jntsph_info;
    /* 0x488 */ ClObjJntSphElem ken_jntsph_elem[3];
    /* 0x548 */ ClObjJntSph tate_jntsph_info;
    /* 0x568 */ ClObjJntSphElem tate_jntsph_elem[1];
    /* 0x5A8 */ ClObjJntSph body_jntsph_info;
    /* 0x5C8 */ ClObjJntSphElem body_jntsph_elem[11];
    /* 0x888 */ ClObjJntSph sude_jntsph_info;
    /* 0x8A8 */ ClObjJntSphElem sude_jntsph_elem[2];
    /* 0x928 */ xyz_t shape_pos[15];
    /* 0x9DC */ u32 demo_time;
    /* 0x9E0 */ short demo_mode;
    /* 0x9E2 */ short camera_no;
    /* 0x9E4 */ xyz_t eye;
    /* 0x9F0 */ xyz_t way;
    /* 0x9FC */ xyz_t up;
    /* 0xA08 */ xyz_t eye_target;
    /* 0xA14 */ float eye_angle_Y;
    /* 0xA18 */ float eye_angle_YS;
    /* 0xA1C */ float camera_morf;
    /* 0xA20 */ float camera_morf_spd;
    /* 0xA24 */ float demo_jisin_Y;
    /* 0xA28 */ float demo_jisin_YA;
    /* 0xA2C */ ClObjPipe bug_pipe_info;
    /* 0xA78 */ ClObjPipe bug_at_pipe_info;
    /* 0xAC4 */ float fire_size;
    /* 0xAC8 */ float fire_a;
    /* 0xACC */ float eff_scale1;
    /* 0xAD0 */ float eff_scale2;
    /* 0xAD4 */ float eff_alpha;
    /* 0xAD8 */ u8 eff_no;
    /* 0xAD9 */ u8 eff_mode;
    /* 0xADA */ short eff_time;
}; /* size = 0x0ADC */

#endif /* __Z64OVL_Z_BOSS_01__ */
