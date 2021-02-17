#ifndef __Z64OVL_Z_EN_PRZ__
#define __Z64OVL_Z_EN_PRZ__

#define Z_EN_PRZ_ACTOR_NUMBER     0x0181
#define Z_EN_PRZ_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_PRZ_OBJECT_NUMBER    0x016B
#define Z_EN_PRZ_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_prz_s z_en_prz_t;
struct z_en_prz_s {
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
}; /* size = 0x0270 */

#endif /* __Z64OVL_Z_EN_PRZ__ */
