#ifndef __Z64OVL_Z_EN_CROW__
#define __Z64OVL_Z_EN_CROW__

#define Z_EN_CROW_ACTOR_NUMBER     0x00F1
#define Z_EN_CROW_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_CROW_OBJECT_NUMBER    0x0006
#define Z_EN_CROW_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_NO_QUAKE | ACTORFLAG_ARROW_CARRY)

typedef struct z_en_crow_s z_en_crow_t;
struct z_en_crow_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char damage_eff_kind;
    /* 0x18E */ short timer;
    /* 0x190 */ short aim_angle_x;
    /* 0x192 */ short aim_angle_y;
    /* 0x194 */ s_xyz joint1[9];
    /* 0x1CA */ s_xyz joint2[9];
    /* 0x200 */ ClObjJntSph all_jntsph;
    /* 0x220 */ ClObjJntSphElem sph_elem;
    /* 0x260 */ xyz_t shape_pos[4];
    /* 0x290 */ float damage_eff_alpha;
    /* 0x294 */ float damage_eff_scale;
    /* 0x298 */ float damage_eff_scale2;
}; /* size = 0x029C */

#endif /* __Z64OVL_Z_EN_CROW__ */
