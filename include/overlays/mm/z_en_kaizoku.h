#ifndef __Z64OVL_Z_EN_KAIZOKU__
#define __Z64OVL_Z_EN_KAIZOKU__

#define Z_EN_KAIZOKU_ACTOR_NUMBER     0x021D
#define Z_EN_KAIZOKU_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_KAIZOKU_OBJECT_NUMBER    0x0204
#define Z_EN_KAIZOKU_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_SFX_SYSTEM)

typedef struct z_en_kaizoku_s z_en_kaizoku_t;
struct z_en_kaizoku_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ int (*snap_proc)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ s_xyz joint1[24];
    /* 0x21C */ s_xyz joint2[24];
    /* 0x2AC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2B0 */ short stat_mode;
    /* 0x2B2 */ short move_timer;
    /* 0x2B4 */ short stop_timer;
    /* 0x2B6 */ short paralyze_timer;
    /* 0x2B8 */ short special_damage_timer;
    /* 0x2BA */ short special_index;
    /* 0x2BC */ short save_bit;
    /* 0x2C0 */ float special_scale;
    /* 0x2C4 */ float special_scale2;
    /* 0x2C8 */ short talk_count;
    /* 0x2CA */ short index;
    /* 0x2CC */ short eye_cont;
    /* 0x2CE */ short eye_timer;
    /* 0x2D0 */ short attack_rslt;
    /* 0x2D2 */ short blure_flag;
    /* 0x2D4 */ short wipe_count;
    /* 0x2D6 */ short Event_now;
    /* 0x2D8 */ u8 anime_flag;
    /* 0x2D9 */ u8 sound_flag;
    /* 0x2DC */ float end_frame;
    /* 0x2E0 */ float speed_work;
    /* 0x2E4 */ int c_change_flag;
    /* 0x2E8 */ int shape_count;
    /* 0x2EC */ int demo_index;
    /* 0x2F0 */ float environment_power_speedF;
    /* 0x2F4 */ short environment_power_angle_y;
    /* 0x2F8 */ xyz_t sword_Rscale;
    /* 0x304 */ xyz_t sword_Lscale;
    /* 0x310 */ xyz_t shape_pos[15];
    /* 0x3C4 */ xyz_t damage_spd;
    /* 0x3D0 */ int blure_effect_index;
    /* 0x3D4 */ ClObjPipe acoc_pipe_info;
    /* 0x420 */ ClObjSwrd sword_pos;
    /* 0x4A0 */ ClObjTris shield_pos;
    /* 0x4C0 */ ClObjTrisElem shield_elem[2];
    /* 0x578 */ s_xyz neck_angle;
    /* 0x580 */ xyz_t r_foot;
    /* 0x58C */ xyz_t l_foot;
    /* 0x598 */ u32 demo_time;
    /* 0x59C */ short demo_mode;
    /* 0x59E */ short camera_no;
    /* 0x5A0 */ short demo_count;
    /* 0x5A4 */ xyz_t eye;
    /* 0x5B0 */ xyz_t way;
    /* 0x5BC */ xyz_t up;
    /* 0x5C8 */ xyz_t eye_max;
    /* 0x5D4 */ xyz_t way_max;
    /* 0x5E0 */ float camera_morf;
    /* 0x5E4 */ float camera_morf2;
    /* 0x5E8 */ float persent;
    /* 0x5EC */ float frame;
}; /* size = 0x05F0 */

#endif /* __Z64OVL_Z_EN_KAIZOKU__ */
