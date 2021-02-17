#ifndef __Z64OVL_Z_BOSS_04__
#define __Z64OVL_Z_BOSS_04__

#define Z_BOSS_04_ACTOR_NUMBER     0x012C
#define Z_BOSS_04_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_04_OBJECT_NUMBER    0x015D
#define Z_BOSS_04_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_04_s z_boss_04_t;
struct z_boss_04_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[9];
    /* 0x1BE */ s_xyz joint2[9];
    /* 0x1F4 */ short count;
    /* 0x1F6 */ u8 move_mode;
    /* 0x1F7 */ u8 sw;
    /* 0x1F8 */ short timer[2];
    /* 0x1FC */ s8 fish_count;
    /* 0x1FE */ short damage;
    /* 0x200 */ short damage_flash;
    /* 0x204 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x208 */ ClObjJntSph In_jntsph_info;
    /* 0x228 */ ClObjJntSphElem In_jntsph_elem[1];
    /* 0x268 */ ClObjJntSph Out_jntsph_info;
    /* 0x288 */ ClObjJntSphElem Out_jntsph_elem[1];
    /* 0x2C8 */ short mabuta_timer;
    /* 0x2CC */ float mabuta_angle;
    /* 0x2D0 */ float mabuta_angle_S;
    /* 0x2D4 */ short eye_angle_Y;
    /* 0x2D6 */ short eye_angle_YS;
    /* 0x2D8 */ short eye_angle_X;
    /* 0x2DA */ short shock;
    /* 0x2DC */ short ball_ya;
    /* 0x2DE */ short ball_xa;
    /* 0x2E0 */ short ball_ya_ad;
    /* 0x2E2 */ short ball_xa_ad;
    /* 0x2E4 */ xyz_t ball_pos[82];
    /* 0x6BC */ xyz_t center_pos;
    /* 0x6C8 */ xyz_t target;
    /* 0x6D4 */ float base_speed;
    /* 0x6D8 */ float kabe_L;
    /* 0x6DC */ float kabe_R;
    /* 0x6E0 */ float kabe_U;
    /* 0x6E4 */ float kabe_D;
    /* 0x6E8 */ xyz_t room_center;
    /* 0x6F4 */ short bound;
    /* 0x6F6 */ short ball_count;
    /* 0x6F8 */ xyz_t model_scale;
    /* 0x704 */ u32 demo_time;
    /* 0x708 */ short demo_mode;
    /* 0x70A */ short camera_no;
    /* 0x70C */ xyz_t eye;
    /* 0x718 */ xyz_t way;
    /* 0x724 */ xyz_t eye_target;
    /* 0x730 */ xyz_t way_target;
    /* 0x73C */ float camera_morf;
    /* 0x740 */ float camera_morf_spd;
    /* 0x744 */ float fovy;
    /* 0x748 */ short jisin_time;
    /* 0x74A */ u8 exist_se;
}; /* size = 0x074C */

#endif /* __Z64OVL_Z_BOSS_04__ */
