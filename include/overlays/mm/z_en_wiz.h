#ifndef __Z64OVL_Z_EN_WIZ__
#define __Z64OVL_Z_EN_WIZ__

#define Z_EN_WIZ_ACTOR_NUMBER     0x015D
#define Z_EN_WIZ_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_WIZ_OBJECT_NUMBER    0x0178
#define Z_EN_WIZ_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_NO_QUAKE | ACTORFLAG_SFX_SYSTEM | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_wiz_s z_en_wiz_t;
struct z_en_wiz_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[20];
    /* 0x200 */ s_xyz joint2[20];
    /* 0x278 */ SKELETON_INFO shadow_skeleton;
    /* 0x2BC */ s_xyz shadow_joint1[20];
    /* 0x334 */ s_xyz shadow_joint2[20];
    /* 0x3AC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x3B0 */ short stat_mode;
    /* 0x3B2 */ short wait_timer;
    /* 0x3B4 */ short demo_timer;
    /* 0x3B6 */ short attack_mode;
    /* 0x3B8 */ short txt_num;
    /* 0x3BA */ short fire_frag;
    /* 0x3BC */ short S_count;
    /* 0x3BE */ short birth_count;
    /* 0x3C0 */ short angle_plus;
    /* 0x3C2 */ short body_alpha;
    /* 0x3C4 */ short ex_alpha;
    /* 0x3C6 */ short ex_alpha_max;
    /* 0x3C8 */ short work_angle;
    /* 0x3CA */ u8 stat_flag;
    /* 0x3CB */ u8 start_demo_flag;
    /* 0x3CC */ int start_sound_flag;
    /* 0x3D0 */ float end_frame;
    /* 0x3D4 */ float scale;
    /* 0x3D8 */ xyz_t frame_pos;
    /* 0x3E4 */ xyz_t frame_scale;
    /* 0x3F0 */ xyz_t frame_scale_max;
    /* 0x3FC */ xyz_t damage_spd;
    /* 0x408 */ xyz_t pos_max;
    /* 0x414 */ xyz_t daiza_pos;
    /* 0x420 */ ACTOR* brock_actor[10];
    /* 0x448 */ ACTOR* FZ_Actor;
    /* 0x44C */ short anime_count;
    /* 0x450 */ float alpha;
    /* 0x454 */ ClObjJntSph sph_pos;
    /* 0x474 */ ClObjJntSphElem sph_elem[10];
    /* 0x6F4 */ ClObjPipe acoc_pipe_info;
    /* 0x740 */ int shadow_count;
    /* 0x744 */ int now_point;
    /* 0x748 */ short birth_point;
    /* 0x74A */ short index;
    /* 0x74C */ short save_bit;
    /* 0x74E */ short cam_num;
    /* 0x750 */ short dead_check_flag;
    /* 0x752 */ short special_damage_timer;
    /* 0x754 */ short special_index;
    /* 0x758 */ float special_scale;
    /* 0x75C */ float special_scale2;
    /* 0x760 */ xyz_t shape_pos[12];
    /* 0x7F0 */ short shape_count;
    /* 0x7F2 */ short shadow_env[10];
    /* 0x806 */ short shadow_index[10];
    /* 0x81C */ xyz_t shadow_pos[10];
    /* 0x894 */ s_xyz shadow_rot[10];
    /* 0x8D0 */ s_xyz shadow[20][10];
}; /* size = 0x0D80 */

#endif /* __Z64OVL_Z_EN_WIZ__ */
