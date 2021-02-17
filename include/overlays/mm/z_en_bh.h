#ifndef __Z64OVL_Z_EN_BH__
#define __Z64OVL_Z_EN_BH__

#define Z_EN_BH_ACTOR_NUMBER     0x02A7
#define Z_EN_BH_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_BH_OBJECT_NUMBER    0x027A
#define Z_EN_BH_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_bh_s z_en_bh_t;
struct z_en_bh_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[6];
    /* 0x1AC */ s_xyz joint2[6];
    /* 0x1D0 */ xyz_t target;
    /* 0x1DC */ short anime_timer;
    /* 0x1DE */ short timer;
    /* 0x1E0 */ short turn_spd;
    /* 0x1E2 */ short yure_z;
    /* 0x1E4 */ short yure_zt;
    /* 0x1E8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01EC */

#endif /* __Z64OVL_Z_EN_BH__ */
