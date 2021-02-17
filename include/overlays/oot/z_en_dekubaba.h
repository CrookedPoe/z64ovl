#ifndef __Z64OVL_Z_EN_DEKUBABA__
#define __Z64OVL_Z_EN_DEKUBABA__

#define Z_EN_DEKUBABA_ACTOR_NUMBER     0x0055
#define Z_EN_DEKUBABA_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_DEKUBABA_OBJECT_NUMBER    0x0039
#define Z_EN_DEKUBABA_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_dekubaba_s z_en_dekubaba_t;
struct z_en_dekubaba_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ xyz_t work_pos[4];
    /* 0x16C */ SKELETON_INFO skeleton;
    /* 0x1B0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1B4 */ unsigned char old_combo_counter;
    /* 0x1B6 */ short timer;
    /* 0x1B8 */ short aim_angle_x;
    /* 0x1BA */ short miki_angle_x[3];
    /* 0x1C0 */ s_xyz joint1[8];
    /* 0x1F0 */ s_xyz joint2[8];
    /* 0x220 */ float base_scale;
    /* 0x224 */ T_Polygon* home_polygon_info;
    /* 0x228 */ ClObjJntSph all_jntsph;
    /* 0x248 */ ClObjJntSphElem sph_elem[7];
}; /* size = 0x0418 */

#endif /* __Z64OVL_Z_EN_DEKUBABA__ */
