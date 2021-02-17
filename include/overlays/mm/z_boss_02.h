#ifndef __Z64OVL_Z_BOSS_02__
#define __Z64OVL_Z_BOSS_02__

#define Z_BOSS_02_ACTOR_NUMBER     0x012A
#define Z_BOSS_02_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_02_OBJECT_NUMBER    0x015B
#define Z_BOSS_02_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_02_s z_boss_02_t;
struct z_boss_02_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ u8 move_mode;
    /* 0x146 */ short timer[3];
    /* 0x14C */ short count;
    /* 0x14E */ short move_count;
    /* 0x150 */ short jisin_time;
    /* 0x152 */ short shock;
    /* 0x154 */ short damage;
    /* 0x156 */ short damage_flash;
    /* 0x158 */ short body_flash1;
    /* 0x15A */ short body_flash2;
    /* 0x15C */ u8 flash_mode;
    /* 0x160 */ float move_spd_S;
    /* 0x164 */ float turn_spd;
    /* 0x168 */ float turn_spd_S;
    /* 0x16C */ short smoke_time;
    /* 0x170 */ xyz_t smoke_pos;
    /* 0x17C */ xyz_t top_pos;
    /* 0x188 */ xyz_t top_pos_OLD;
    /* 0x194 */ u8 anchor_sw;
    /* 0x195 */ u8 speed_sw;
    /* 0x196 */ short swing_count;
    /* 0x198 */ short swing_count_AD;
    /* 0x19A */ short swing_count_AD_S;
    /* 0x19C */ float swing_W;
    /* 0x1A0 */ float swing_W_S;
    /* 0x1A4 */ short swing_XA;
    /* 0x1A8 */ float speedF2;
    /* 0x1AC */ float main_scale;
    /* 0x1B0 */ xyz_t target_pos;
    /* 0x1BC */ xyz_t move_pos[200];
    /* 0xB1C */ xyz_t move_angle[200];
    /* 0x147C */ xyz_t shape_pos[23];
    /* 0x1590 */ SKELETON_INFO skeleton;
    /* 0x15D4 */ s_xyz joint1[13];
    /* 0x1622 */ s_xyz joint2[13];
    /* 0x1670 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1674 */ Boss_02_Actor* OP;
    /* 0x1678 */ int tail_count;
    /* 0x167C */ xyz_t tail_se_pos;
    /* 0x1688 */ ClObjJntSph body_jntsph_info;
    /* 0x16A8 */ ClObjJntSphElem body_jntsph_elem[22];
    /* 0x1C28 */ ClObjJntSph core_jntsph_info;
    /* 0x1C48 */ ClObjJntSphElem core_jntsph_elem[2];
    /* 0x1CC8 */ ClObjPipe pipe_info;
    /* 0x1D14 */ u32 hensin_time;
    /* 0x1D18 */ short hensin_mode;
    /* 0x1D1A */ short demo_fly_point;
    /* 0x1D1C */ u32 demo_time;
    /* 0x1D20 */ short demo_mode;
    /* 0x1D22 */ short camera_no;
    /* 0x1D24 */ xyz_t eye;
    /* 0x1D30 */ xyz_t way;
    /* 0x1D3C */ xyz_t up;
    /* 0x1D48 */ xyz_t way_target;
    /* 0x1D54 */ float eye_angle_Y;
    /* 0x1D58 */ float eye_angle_YS;
    /* 0x1D5C */ float camera_morf;
    /* 0x1D60 */ float camera_morf_spd;
    /* 0x1D64 */ float camera_range;
    /* 0x1D68 */ float eye_yd;
    /* 0x1D6C */ float way_yd;
    /* 0x1D70 */ float player_scale;
    /* 0x1D74 */ float fog_near;
    /* 0x1D78 */ u8 fade_mode;
    /* 0x1D7A */ short fade_a;
    /* 0x1D7C */ short smoke_a;
    /* 0x1D7E */ short smoke_a_S;
}; /* size = 0x1D80 */

#endif /* __Z64OVL_Z_BOSS_02__ */
