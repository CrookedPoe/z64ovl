#ifndef __Z64OVL_Z_EN_DEKUBABA__
#define __Z64OVL_Z_EN_DEKUBABA__

#define Z_EN_DEKUBABA_ACTOR_NUMBER     0x0033
#define Z_EN_DEKUBABA_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_DEKUBABA_OBJECT_NUMBER    0x0031
#define Z_EN_DEKUBABA_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_dekubaba_s z_en_dekubaba_t;
struct z_en_dekubaba_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char damage_eff_kind;
    /* 0x18E */ short timer;
    /* 0x190 */ short aim_angle_x;
    /* 0x192 */ short miki_angle_x[3];
    /* 0x198 */ s_xyz joint1[8];
    /* 0x1C8 */ s_xyz joint2[8];
    /* 0x1F8 */ float base_scale;
    /* 0x1FC */ float damage_eff_alpha;
    /* 0x200 */ float damage_eff_scale;
    /* 0x204 */ float damage_eff_scale2;
    /* 0x208 */ xyz_t shape_pos[4];
    /* 0x238 */ T_Polygon* home_polygon_info;
    /* 0x23C */ ClObjJntSph all_jntsph;
    /* 0x25C */ ClObjJntSphElem sph_elem[7];
}; /* size = 0x041C */

#endif /* __Z64OVL_Z_EN_DEKUBABA__ */
