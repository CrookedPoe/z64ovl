#ifndef __Z64OVL_Z_EN_GRASSHOPPER__
#define __Z64OVL_Z_EN_GRASSHOPPER__

#define Z_EN_GRASSHOPPER_ACTOR_NUMBER     0x0109
#define Z_EN_GRASSHOPPER_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_GRASSHOPPER_OBJECT_NUMBER    0x014E
#define Z_EN_GRASSHOPPER_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_grasshopper_s z_en_grasshopper_t;
struct z_en_grasshopper_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[24];
    /* 0x218 */ s_xyz joint2[24];
    /* 0x2A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2AC */ u8 anime_change_frag;
    /* 0x2AD */ u8 turn_frag;
    /* 0x2AE */ u8 attack_continue;
    /* 0x2B0 */ short move_timer;
    /* 0x2B2 */ short stop_timer;
    /* 0x2B4 */ short loop_timer;
    /* 0x2B6 */ short special_damage_timer;
    /* 0x2B8 */ short special_index;
    /* 0x2BC */ float special_scale;
    /* 0x2C0 */ float special_scale2;
    /* 0x2C4 */ xyz_t shape_pos[12];
    /* 0x354 */ short shape_count;
    /* 0x356 */ short water_check_flag;
    /* 0x358 */ short stat_mode;
    /* 0x35A */ short index;
    /* 0x35C */ short turn_mode;
    /* 0x35E */ short type_index;
    /* 0x360 */ float scale;
    /* 0x364 */ float angle_speed;
    /* 0x368 */ float end_frame;
    /* 0x36C */ float move_speed;
    /* 0x370 */ float move_Ypos;
    /* 0x374 */ float purpose_posY;
    /* 0x378 */ s_xyz srch_angle;
    /* 0x380 */ xyz_t home_pos;
    /* 0x38C */ short purpose_angle;
    /* 0x38E */ short part_break_count;
    /* 0x390 */ xyz_t away_move;
    /* 0x39C */ xyz_t wing_cont;
    /* 0x3A8 */ xyz_t wing_cont_plus;
    /* 0x3B4 */ xyz_t srch_pos;
    /* 0x3C0 */ xyz_t tail_pos;
    /* 0x3CC */ xyz_t tail2_pos;
    /* 0x3D8 */ xyz_t shadow_pos[24];
    /* 0x4F8 */ float water_surface_pos_y;
    /* 0x4FC */ xyz_t damage_spd;
    /* 0x508 */ s_xyz start_angle;
    /* 0x510 */ ClObjJntSph all_jntsph;
    /* 0x530 */ ClObjJntSphElem sph_elem[2];
    /* 0x5B0 */ EN_GRASS_EFF en_grass_eff[100];
}; /* size = 0x1870 */

#endif /* __Z64OVL_Z_EN_GRASSHOPPER__ */
