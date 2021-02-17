#ifndef __Z64OVL_Z_EN_PR__
#define __Z64OVL_Z_EN_PR__

#define Z_EN_PR_ACTOR_NUMBER     0x014B
#define Z_EN_PR_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_PR_OBJECT_NUMBER    0x016B
#define Z_EN_PR_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_pr_s z_en_pr_t;
struct z_en_pr_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[10];
    /* 0x1C4 */ s_xyz joint2[10];
    /* 0x200 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x204 */ u8 bubble_frag;
    /* 0x206 */ short stat_mode;
    /* 0x208 */ short eye_color;
    /* 0x20A */ short wait_timer;
    /* 0x20C */ short move_timer;
    /* 0x20E */ short exit_timer;
    /* 0x210 */ short bubble_timer;
    /* 0x212 */ short work_angle;
    /* 0x214 */ short head_angle;
    /* 0x216 */ short head_max_angle;
    /* 0x218 */ short birth_count;
    /* 0x21C */ int c_change_flag;
    /* 0x220 */ int back_Padx;
    /* 0x224 */ int back_Pady;
    /* 0x228 */ int shape_count;
    /* 0x22C */ short turn_angle;
    /* 0x22E */ short special_damage_timer;
    /* 0x230 */ short special_index;
    /* 0x234 */ float special_scale;
    /* 0x238 */ float special_scale2;
    /* 0x23C */ xyz_t shape_pos[10];
    /* 0x2B4 */ float water_surface_pos_y;
    /* 0x2B8 */ float srch_hosei;
    /* 0x2BC */ float end_frame;
    /* 0x2C0 */ float gabu_plus;
    /* 0x2C4 */ float purpose_deep;
    /* 0x2C8 */ float move_hani;
    /* 0x2CC */ float scale;
    /* 0x2D0 */ short alpha;
    /* 0x2D2 */ short dead_clear;
    /* 0x2D4 */ xyz_t head_pos;
    /* 0x2E0 */ xyz_t bg_pos;
    /* 0x2EC */ xyz_t bg_pos2;
    /* 0x2F8 */ ACTOR* srch_Actor;
    /* 0x2FC */ ClObjPipe acoc_pipe_info;
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[5];
    /* 0x1A6 */ s_xyz joint2[5];
    /* 0x1C4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1C8 */ u8 bubble_frag;
    /* 0x1CC */ xyz_t head_pos;
    /* 0x1D8 */ xyz_t move_pos;
    /* 0x1E4 */ short srch_angle;
    /* 0x1E6 */ short index;
    /* 0x1E8 */ short eye_color;
    /* 0x1EA */ short stat_mode;
    /* 0x1EC */ short alpha;
    /* 0x1EE */ short move_timer;
    /* 0x1F0 */ short wait_timer;
    /* 0x1F2 */ short exit_timer;
    /* 0x1F4 */ short eat_timer;
    /* 0x1F6 */ short gabu_timer;
    /* 0x1F8 */ short angle_plue;
    /* 0x1FA */ short prz_mode;
    /* 0x1FC */ s_xyz bitobito_angle;
    /* 0x202 */ short hosei_angle;
    /* 0x204 */ int c_change_flag;
    /* 0x208 */ float srch_hosei;
    /* 0x20C */ float scale;
    /* 0x210 */ float water_surface_pos_y;
    /* 0x214 */ float move_hani;
    /* 0x218 */ float head_angle;
    /* 0x21C */ float gabu_plus;
    /* 0x220 */ ACTOR* srch_Actor;
    /* 0x224 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x0348 */

#endif /* __Z64OVL_Z_EN_PR__ */
