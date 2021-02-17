#ifndef __Z64OVL_Z_EN_BAGUO__
#define __Z64OVL_Z_EN_BAGUO__

#define Z_EN_BAGUO_ACTOR_NUMBER     0x0155
#define Z_EN_BAGUO_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BAGUO_OBJECT_NUMBER    0x0171
#define Z_EN_BAGUO_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_baguo_s z_en_baguo_t;
struct z_en_baguo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[3];
    /* 0x19A */ s_xyz joint2[3];
    /* 0x1AC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1B0 */ short eye_cont;
    /* 0x1B2 */ short eye_timer;
    /* 0x1B4 */ short wait_timer;
    /* 0x1B6 */ short stat_mode;
    /* 0x1B8 */ short muki;
    /* 0x1BC */ float check_hani;
    /* 0x1C0 */ u8 return_flag;
    /* 0x1C4 */ xyz_t move_angle;
    /* 0x1D0 */ xyz_t move_angle_MAX;
    /* 0x1DC */ ClObjJntSph sph_pos;
    /* 0x1FC */ ClObjJntSphElem sph_elem[1];
    /* 0x23C */ EN_BAGUO_EFF en_baguo_eff[30];
}; /* size = 0x08CC */

#endif /* __Z64OVL_Z_EN_BAGUO__ */
