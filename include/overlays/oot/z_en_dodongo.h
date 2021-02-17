#ifndef __Z64OVL_Z_EN_DODONGO__
#define __Z64OVL_Z_EN_DODONGO__

#define Z_EN_DODONGO_ACTOR_NUMBER     0x0012
#define Z_EN_DODONGO_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_DODONGO_OBJECT_NUMBER    0x000C
#define Z_EN_DODONGO_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_dodongo_s z_en_dodongo_t;
struct z_en_dodongo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[31];
    /* 0x23A */ s_xyz joint2[31];
    /* 0x2F4 */ int mode;
    /* 0x2F8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2FC */ short timer;
    /* 0x2FE */ short timer2;
    /* 0x300 */ short timer3;
    /* 0x302 */ short timer4;
    /* 0x304 */ short aim_angle_y;
    /* 0x306 */ short arm_s_flg;
    /* 0x308 */ short dam_time;
    /* 0x30C */ xyz_t l_arm_pos;
    /* 0x318 */ xyz_t r_arm_pos;
    /* 0x324 */ xyz_t mouse_pos;
    /* 0x330 */ xyz_t mouse_pos2;
    /* 0x33C */ xyz_t body_sc;
    /* 0x348 */ xyz_t ice_pos[9];
    /* 0x3B4 */ rgba_t prim;
    /* 0x3B8 */ rgba_t env;
    /* 0x3BC */ unsigned char reaction_buf;
    /* 0x3C0 */ int blure_effect_index;
    /* 0x3C4 */ ClObjSwrd sword_pos;
    /* 0x444 */ ClObjTris shield_pos;
    /* 0x464 */ ClObjTrisElem shield_elem[3];
    /* 0x578 */ ClObjJntSph sph_pos;
    /* 0x598 */ ClObjJntSphElem sph_elem[6];
}; /* size = 0x0728 */

#endif /* __Z64OVL_Z_EN_DODONGO__ */
