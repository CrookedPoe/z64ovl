#ifndef __Z64OVL_Z_EN_PP__
#define __Z64OVL_Z_EN_PP__

#define Z_EN_PP_ACTOR_NUMBER     0x01E9
#define Z_EN_PP_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_PP_OBJECT_NUMBER    0x01C6
#define Z_EN_PP_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_pp_s z_en_pp_t;
struct z_en_pp_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[26];
    /* 0x224 */ s_xyz joint2[26];
    /* 0x2C0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2C4 */ short type_index;
    /* 0x2C6 */ short index;
    /* 0x2C8 */ short stat_mode;
    /* 0x2CA */ short move_timer;
    /* 0x2CC */ short stop_timer;
    /* 0x2CE */ short blure_flag;
    /* 0x2D0 */ short search_angle;
    /* 0x2D2 */ short move_mode;
    /* 0x2D4 */ short new_type_speed;
    /* 0x2D6 */ short part_break_count;
    /* 0x2D8 */ float end_frame;
    /* 0x2DC */ float mogaku_speed;
    /* 0x2E0 */ xyz_t gake_pos[3];
    /* 0x304 */ xyz_t wall_pos;
    /* 0x310 */ xyz_t foot_pos[2];
    /* 0x328 */ xyz_t face_pos;
    /* 0x334 */ xyz_t kamen_pos;
    /* 0x340 */ xyz_t kamen_angle;
    /* 0x34C */ xyz_t kamen_speed;
    /* 0x358 */ xyz_t back_pos;
    /* 0x364 */ xyz_t body_pos;
    /* 0x370 */ int dead_cnt;
    /* 0x374 */ xyz_t break_pos[10];
    /* 0x3EC */ s_xyz break_angle;
    /* 0x3F2 */ short special_damage_timer;
    /* 0x3F4 */ short special_index;
    /* 0x3F8 */ float special_scale;
    /* 0x3FC */ float special_scale2;
    /* 0x400 */ float check_hani;
    /* 0x404 */ int ikari_mode;
    /* 0x408 */ xyz_t shape_pos[11];
    /* 0x48C */ short shape_count;
    /* 0x490 */ float kamen_gravity;
    /* 0x494 */ ClObjJntSph sph_pos;
    /* 0x4B4 */ ClObjJntSphElem sph_elem[1];
    /* 0x4F4 */ ClObjJntSph sph2_pos;
    /* 0x514 */ ClObjJntSphElem sph2_elem[1];
    /* 0x554 */ ClObjSwrd sword_pos;
    /* 0x5D4 */ T_Polygon* home_polygon_info;
    /* 0x5D8 */ int blure_effect_index;
    /* 0x5DC */ int c_change_flag;
    /* 0x5E0 */ xyz_t damage_spd;
}; /* size = 0x05EC */

#endif /* __Z64OVL_Z_EN_PP__ */
