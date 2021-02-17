#ifndef __Z64OVL_Z_EN_FAMOS__
#define __Z64OVL_Z_EN_FAMOS__

#define Z_EN_FAMOS_ACTOR_NUMBER     0x002D
#define Z_EN_FAMOS_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_FAMOS_OBJECT_NUMBER    0x001D
#define Z_EN_FAMOS_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_famos_s z_en_famos_t;
struct z_en_famos_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[6];
    /* 0x1AC */ s_xyz joint2[6];
    /* 0x1D0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D4 */ unsigned char reverse_flg;
    /* 0x1D5 */ unsigned char reverse_end_flg;
    /* 0x1D6 */ unsigned char max_path_num;
    /* 0x1D7 */ unsigned char aim_path_num;
    /* 0x1D8 */ unsigned char rail_flg;
    /* 0x1DA */ short fly_timer;
    /* 0x1DC */ short timer;
    /* 0x1DE */ short eff_timer;
    /* 0x1E0 */ short reverse_timer;
    /* 0x1E2 */ short common_eff_timer;
    /* 0x1E4 */ short aim_angle_y;
    /* 0x1E6 */ short reverse_angle_z;
    /* 0x1E8 */ s_xyz* path_pos;
    /* 0x1EC */ float base_pos_y;
    /* 0x1F0 */ float search_area;
    /* 0x1F4 */ xyz_t aim_pos;
    /* 0x200 */ xyz_t return_pos;
    /* 0x20C */ ClObjPipe all_pipe;
    /* 0x258 */ ClObjPipe at_pipe;
    /* 0x2A4 */ ClObjJntSph ac_jntsph;
    /* 0x2C4 */ ClObjJntSphElem sph_elem[2];
    /* 0x344 */ Famos_Effect rock_eff[20];
}; /* size = 0x0614 */

#endif /* __Z64OVL_Z_EN_FAMOS__ */
