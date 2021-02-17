#ifndef __Z64OVL_Z_EN_TITE__
#define __Z64OVL_Z_EN_TITE__

#define Z_EN_TITE_ACTOR_NUMBER     0x0012
#define Z_EN_TITE_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_TITE_OBJECT_NUMBER    0x0012
#define Z_EN_TITE_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT_GRAB)

typedef struct z_en_tite_s z_en_tite_t;
struct z_en_tite_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[25];
    /* 0x21E */ s_xyz joint2[25];
    /* 0x2B4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2B8 */ unchar work_count;
    /* 0x2B9 */ unchar reverse_flg;
    /* 0x2BA */ signed char break_flg;
    /* 0x2BB */ unsigned char damage_eff_kind;
    /* 0x2BC */ short timer;
    /* 0x2BE */ short item_type;
    /* 0x2C0 */ int bg_flg;
    /* 0x2C4 */ float damage_eff_alpha;
    /* 0x2C8 */ float damage_eff_scale;
    /* 0x2CC */ float damage_eff_scale2;
    /* 0x2D0 */ xyz_t shape_pos[9];
    /* 0x33C */ xyz_t shape_vec[9];
    /* 0x3A8 */ Gfx* shape;
    /* 0x3AC */ ClObjSph all_sph;
}; /* size = 0x0404 */

#endif /* __Z64OVL_Z_EN_TITE__ */
