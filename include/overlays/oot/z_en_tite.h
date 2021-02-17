#ifndef __Z64OVL_Z_EN_TITE__
#define __Z64OVL_Z_EN_TITE__

#define Z_EN_TITE_ACTOR_NUMBER     0x001B
#define Z_EN_TITE_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_TITE_OBJECT_NUMBER    0x0016
#define Z_EN_TITE_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_tite_s z_en_tite_t;
struct z_en_tite_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[25];
    /* 0x216 */ s_xyz joint2[25];
    /* 0x2AC */ u8 mode;
    /* 0x2AD */ u8 action;
    /* 0x2B0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2B4 */ Break_work break_work;
    /* 0x2CC */ int bg_flg;
    /* 0x2D0 */ short mode_timer;
    /* 0x2D2 */ u8 j_count;
    /* 0x2D3 */ u8 timer;
    /* 0x2D4 */ unsigned char reaction_buf;
    /* 0x2D8 */ ClObjJntSph sph_pos;
    /* 0x2F8 */ ClObjJntSphElem sph_elem;
    /* 0x338 */ xyz_t fl_foot;
    /* 0x344 */ xyz_t fr_foot;
    /* 0x350 */ xyz_t bl_foot;
    /* 0x35C */ xyz_t br_foot;
}; /* size = 0x0378 */

#endif /* __Z64OVL_Z_EN_TITE__ */
