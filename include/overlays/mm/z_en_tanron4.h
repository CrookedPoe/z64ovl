#ifndef __Z64OVL_Z_EN_TANRON4__
#define __Z64OVL_Z_EN_TANRON4__

#define Z_EN_TANRON4_ACTOR_NUMBER     0x0267
#define Z_EN_TANRON4_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_TANRON4_OBJECT_NUMBER    0x023F
#define Z_EN_TANRON4_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_tanron4_s z_en_tanron4_t;
struct z_en_tanron4_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ short count;
    /* 0x146 */ short timer[2];
    /* 0x14A */ u8 move_mode;
    /* 0x14C */ xyz_t target;
    /* 0x158 */ short turn_spd;
    /* 0x15A */ short fly_angle_Z;
    /* 0x15C */ short fly_angle_ZS;
    /* 0x160 */ float target_y2;
    /* 0x164 */ SKELETON_INFO skeleton;
    /* 0x1A8 */ s_xyz joint1[11];
    /* 0x1EA */ s_xyz joint2[11];
    /* 0x22C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0230 */

#endif /* __Z64OVL_Z_EN_TANRON4__ */
