#ifndef __Z64OVL_Z_EN_FISH2__
#define __Z64OVL_Z_EN_FISH2__

#define Z_EN_FISH2_ACTOR_NUMBER     0x01F1
#define Z_EN_FISH2_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_FISH2_OBJECT_NUMBER    0x01D7
#define Z_EN_FISH2_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_fish2_s z_en_fish2_t;
struct z_en_fish2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[24];
    /* 0x218 */ s_xyz joint2[24];
    /* 0x2A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2AC */ int c_change_flag;
    /* 0x2B0 */ int crisis_flag;
    /* 0x2B4 */ short stop_timer;
    /* 0x2B6 */ short move_timer;
    /* 0x2B8 */ short no_bgcheck_timer;
    /* 0x2BA */ short Event_now[2];
    /* 0x2C0 */ int scale_index;
    /* 0x2C4 */ int eat_count;
    /* 0x2C8 */ u8 extra_food;
    /* 0x2CA */ short demo_camera;
    /* 0x2CC */ float end_frame;
    /* 0x2D0 */ float camera_morf;
    /* 0x2D4 */ float ground_hosei_pos;
    /* 0x2D8 */ float water_hosei_pos;
    /* 0x2DC */ xyz_t eye_pos;
    /* 0x2E8 */ xyz_t way_pos;
    /* 0x2F4 */ xyz_t bg_pos;
    /* 0x300 */ xyz_t head_pos;
    /* 0x30C */ xyz_t search_pos;
    /* 0x318 */ xyz_t mouth_pos;
    /* 0x324 */ xyz_t move_pos;
    /* 0x330 */ float scale;
    /* 0x334 */ float water_surface_pos_y;
    /* 0x338 */ float fish_speed;
    /* 0x33C */ float bg_hani;
    /* 0x340 */ int hanten_flag;
    /* 0x344 */ int type_index;
    /* 0x348 */ s_xyz search_angle;
    /* 0x350 */ ACTOR* srch_Actor;
    /* 0x354 */ ACTOR* Camera_Fish;
    /* 0x358 */ ClObjJntSph sph_pos;
    /* 0x378 */ ClObjJntSphElem sph_elem[2];
    /* 0x3F8 */ EN_FISH2_EFF en_fish2_eff[200];
}; /* size = 0x2018 */

#endif /* __Z64OVL_Z_EN_FISH2__ */
