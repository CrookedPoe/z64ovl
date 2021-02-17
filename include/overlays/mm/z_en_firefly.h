#ifndef __Z64OVL_Z_EN_FIREFLY__
#define __Z64OVL_Z_EN_FIREFLY__

#define Z_EN_FIREFLY_ACTOR_NUMBER     0x000C
#define Z_EN_FIREFLY_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_FIREFLY_OBJECT_NUMBER    0x000B
#define Z_EN_FIREFLY_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_NO_QUAKE | ACTORFLAG_ARROW_CARRY)

typedef struct z_en_firefly_s z_en_firefly_t;
struct z_en_firefly_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char effect_type;
    /* 0x18D */ unsigned char now_type;
    /* 0x18E */ unsigned char glass_flg;
    /* 0x18F */ unsigned char damage_eff_kind;
    /* 0x190 */ short timer;
    /* 0x192 */ short aim_angle_x;
    /* 0x194 */ s_xyz joint1[28];
    /* 0x23C */ s_xyz joint2[28];
    /* 0x2E4 */ float max_position_y;
    /* 0x2E8 */ float damage_eff_alpha;
    /* 0x2EC */ float damage_eff_scale;
    /* 0x2F0 */ float damage_eff_scale2;
    /* 0x2F4 */ unsigned long old_game_frame_counter;
    /* 0x2F8 */ xyz_t shape_pos[3];
    /* 0x31C */ ClObjSph all_sph;
}; /* size = 0x0374 */

#endif /* __Z64OVL_Z_EN_FIREFLY__ */
