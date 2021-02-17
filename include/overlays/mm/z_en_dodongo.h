#ifndef __Z64OVL_Z_EN_DODONGO__
#define __Z64OVL_Z_EN_DODONGO__

#define Z_EN_DODONGO_ACTOR_NUMBER     0x000B
#define Z_EN_DODONGO_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_DODONGO_OBJECT_NUMBER    0x000A
#define Z_EN_DODONGO_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_dodongo_s z_en_dodongo_t;
struct z_en_dodongo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[31];
    /* 0x242 */ s_xyz joint2[31];
    /* 0x2FC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x300 */ unsigned char damage_eff_kind;
    /* 0x302 */ short timer;
    /* 0x304 */ short blure_timer;
    /* 0x306 */ short inc_angle;
    /* 0x308 */ xyz_t mouth_pos;
    /* 0x314 */ xyz_t body_sc;
    /* 0x320 */ xyz_t blure_top;
    /* 0x32C */ rgba_t prim;
    /* 0x330 */ rgba_t env;
    /* 0x334 */ float base_scale;
    /* 0x338 */ int blure_effect_index;
    /* 0x33C */ float damage_eff_alpha;
    /* 0x340 */ float damage_eff_scale;
    /* 0x344 */ float damage_eff_scale2;
    /* 0x348 */ xyz_t shape_pos[9];
    /* 0x3B4 */ ClObjJntSph all_jntsph;
    /* 0x3D4 */ ClObjJntSphElem sph_elem[10];
    /* 0x654 */ ClObjJntSph shield_jntsph;
    /* 0x674 */ ClObjJntSphElem shield_sph_elem[3];
    /* 0x734 */ ClObjJntSph fire_jntsph;
    /* 0x754 */ ClObjJntSphElem fire_sph_elem[3];
}; /* size = 0x0814 */

#endif /* __Z64OVL_Z_EN_DODONGO__ */
