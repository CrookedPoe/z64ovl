#ifndef __Z64OVL_Z_EN_FIREFLY__
#define __Z64OVL_Z_EN_FIREFLY__

#define Z_EN_FIREFLY_ACTOR_NUMBER     0x0013
#define Z_EN_FIREFLY_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_FIREFLY_OBJECT_NUMBER    0x000D
#define Z_EN_FIREFLY_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_NO_QUAKE | ACTORFLAG_ARROW_CARRY)

typedef struct z_en_firefly_s z_en_firefly_t;
struct z_en_firefly_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ xyz_t work_pos[3];
    /* 0x160 */ SKELETON_INFO skeleton;
    /* 0x1A4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1A8 */ unsigned char fire_flg;
    /* 0x1A9 */ unsigned char firefly_flg;
    /* 0x1AA */ short timer;
    /* 0x1AC */ short aim_angle_x;
    /* 0x1AE */ s_xyz joint1[28];
    /* 0x256 */ s_xyz joint2[28];
    /* 0x300 */ float max_position_y;
    /* 0x304 */ ClObjJntSph all_jntsph;
    /* 0x324 */ ClObjJntSphElem sph_elem;
}; /* size = 0x0374 */

#endif /* __Z64OVL_Z_EN_FIREFLY__ */
