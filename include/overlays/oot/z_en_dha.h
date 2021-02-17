#ifndef __Z64OVL_Z_EN_DHA__
#define __Z64OVL_Z_EN_DHA__

#define Z_EN_DHA_ACTOR_NUMBER     0x00A5
#define Z_EN_DHA_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_DHA_OBJECT_NUMBER    0x00A6
#define Z_EN_DHA_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_dha_s z_en_dha_t;
struct z_en_dha_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[4];
    /* 0x198 */ s_xyz joint2[4];
    /* 0x1B0 */ u8 mode;
    /* 0x1B4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1B8 */ short mode_timer;
    /* 0x1BA */ short timer0;
    /* 0x1BC */ u8 atk_flg;
    /* 0x1BE */ short dha_x_ang[2];
    /* 0x1C2 */ short dha_y_ang;
    /* 0x1C4 */ s_xyz hand_ang;
    /* 0x1CC */ xyz_t hand_pos;
    /* 0x1D8 */ xyz_t hand_pos2;
    /* 0x1E4 */ xyz_t arm2_pos;
    /* 0x1F0 */ ClObjJntSph sph_pos;
    /* 0x210 */ ClObjJntSphElem sph_elem[5];
}; /* size = 0x0360 */

#endif /* __Z64OVL_Z_EN_DHA__ */
