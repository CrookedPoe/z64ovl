#ifndef __Z64OVL_Z_EN_TANRON1__
#define __Z64OVL_Z_EN_TANRON1__

#define Z_EN_TANRON1_ACTOR_NUMBER     0x023D
#define Z_EN_TANRON1_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_TANRON1_OBJECT_NUMBER    0x0001
#define Z_EN_TANRON1_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_tanron1_s z_en_tanron1_t;
struct z_en_tanron1_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ u8 move_mode;
    /* 0x146 */ short count;
    /* 0x148 */ short ga_set;
    /* 0x14C */ xyz_t target;
    /* 0x158 */ short turn_spd;
    /* 0x15C */ float move_range;
    /* 0x160 */ Ga_Eff ga[200];
    /* 0x3360 */ xyz_t ga_camera_pos;
}; /* size = 0x336C */

#endif /* __Z64OVL_Z_EN_TANRON1__ */
