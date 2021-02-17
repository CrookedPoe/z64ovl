#ifndef __Z64OVL_Z_EN_MUSHI2__
#define __Z64OVL_Z_EN_MUSHI2__

#define Z_EN_MUSHI2_ACTOR_NUMBER     0x017B
#define Z_EN_MUSHI2_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_MUSHI2_OBJECT_NUMBER    0x0001
#define Z_EN_MUSHI2_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_mushi2_s z_en_mushi2_t;
struct z_en_mushi2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[24];
    /* 0x218 */ s_xyz joint2[24];
    /* 0x2A8 */ ClObjJntSph sph;
    /* 0x2C8 */ ClObjJntSphElem elem;
    /* 0x308 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x30C */ unsigned long status;
    /* 0x310 */ xyz_t xx;
    /* 0x31C */ xyz_t yy;
    /* 0x328 */ xyz_t zz;
    /* 0x334 */ T_Polygon* touch_poly_now;
    /* 0x338 */ int touch_bg_actor_index;
    /* 0x33C */ xyz_t touch_pos;
    /* 0x348 */ float offset_y;
    /* 0x34C */ ACTOR* goal_actor;
    /* 0x350 */ float goal_seal_r_square;
    /* 0x354 */ float goal_range;
    /* 0x358 */ float search_power;
    /* 0x35C */ float speed_aim;
    /* 0x360 */ float dir_amplitude;
    /* 0x364 */ short dir_angle;
    /* 0x366 */ short dir_angle_speed;
    /* 0x368 */ short mode_timer;
    /* 0x36A */ short life_timer;
    /* 0x36C */ short walk_se_timer;
    /* 0x36E */ short world_angle_speed_y;
    /* 0x370 */ short shape_angle_speed_y;
}; /* size = 0x0374 */

#endif /* __Z64OVL_Z_EN_MUSHI2__ */
