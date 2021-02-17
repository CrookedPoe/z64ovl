#ifndef __Z64OVL_Z_EN_FIREFLY2__
#define __Z64OVL_Z_EN_FIREFLY2__

#define Z_EN_FIREFLY2_ACTOR_NUMBER     0x016E
#define Z_EN_FIREFLY2_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_FIREFLY2_OBJECT_NUMBER    0x000B
#define Z_EN_FIREFLY2_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_NO_QUAKE | ACTORFLAG_ARROW_CARRY)

typedef struct z_en_firefly2_s z_en_firefly2_t;
struct z_en_firefly2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ xyz_t work_pos[3];
    /* 0x168 */ SKELETON_INFO skeleton;
    /* 0x1AC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1B0 */ unsigned char fire_flg;
    /* 0x1B1 */ unsigned char firefly_flg;
    /* 0x1B2 */ short timer;
    /* 0x1B4 */ short no_hit_timer;
    /* 0x1B6 */ short aim_angle_x;
    /* 0x1B8 */ s_xyz joint1[28];
    /* 0x260 */ s_xyz joint2[28];
    /* 0x308 */ float max_position_y;
    /* 0x30C */ ClObjJntSph all_jntsph;
    /* 0x32C */ ClObjJntSphElem sph_elem;
}; /* size = 0x036C */

#endif /* __Z64OVL_Z_EN_FIREFLY2__ */
