#ifndef __Z64OVL_Z_EN_DODOJR__
#define __Z64OVL_Z_EN_DODOJR__

#define Z_EN_DODOJR_ACTOR_NUMBER     0x002F
#define Z_EN_DODOJR_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_DODOJR_OBJECT_NUMBER    0x001F
#define Z_EN_DODOJR_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_dodojr_s z_en_dodojr_t;
struct z_en_dodojr_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe;
    /* 0x1D0 */ ACTOR* bom;
    /* 0x1D4 */ xyz_t mouth_pos;
    /* 0x1E0 */ xyz_t eff_pos;
    /* 0x1EC */ short count;
    /* 0x1EE */ short freeze_timer;
    /* 0x1F0 */ short finish_timer;
    /* 0x1F2 */ short timer;
    /* 0x1F4 */ short sound_timer;
    /* 0x1F6 */ short cc_bit;
    /* 0x1F8 */ float up_scl;
    /* 0x1FC */ s_xyz joint[15][2];
}; /* size = 0x02C0 */

#endif /* __Z64OVL_Z_EN_DODOJR__ */
