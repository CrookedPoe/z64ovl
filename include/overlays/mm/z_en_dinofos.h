#ifndef __Z64OVL_Z_EN_DINOFOS__
#define __Z64OVL_Z_EN_DINOFOS__

#define Z_EN_DINOFOS_ACTOR_NUMBER     0x0019
#define Z_EN_DINOFOS_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_DINOFOS_OBJECT_NUMBER    0x0017
#define Z_EN_DINOFOS_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_dinofos_s z_en_dinofos_t;
struct z_en_dinofos_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[21];
    /* 0x206 */ s_xyz joint2[21];
    /* 0x284 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x288 */ unsigned char shape_alpha;
    /* 0x289 */ unsigned char eye_tex;
    /* 0x28A */ unsigned char damage_eff_kind;
    /* 0x28B */ unsigned char gpress_avoid_flg;
    /* 0x28C */ short aim_angle_y;
    /* 0x28E */ short neck_angle;
    /* 0x290 */ short timer;
    /* 0x292 */ short min_timer;
    /* 0x294 */ short angle_speed_x;
    /* 0x296 */ short angle_speed_y;
    /* 0x298 */ short demo_camera;
    /* 0x29A */ s_xyz camera_angle;
    /* 0x2A0 */ int blure_effect_index;
    /* 0x2A4 */ float spd_wk;
    /* 0x2A8 */ float cam_center_speed;
    /* 0x2AC */ float cam_eye_speed;
    /* 0x2B0 */ float damage_eff_alpha;
    /* 0x2B4 */ float damage_eff_scale;
    /* 0x2B8 */ float damage_eff_scale2;
    /* 0x2BC */ xyz_t cam_eye_aim_pos;
    /* 0x2C8 */ xyz_t cam_center_aim_pos;
    /* 0x2D4 */ xyz_t shape_pos[12];
    /* 0x364 */ ClObjJntSph all_jntsph;
    /* 0x384 */ ClObjJntSphElem sph_elem[9];
    /* 0x5C4 */ ClObjSwrd at_sword;
}; /* size = 0x0644 */

#endif /* __Z64OVL_Z_EN_DINOFOS__ */
