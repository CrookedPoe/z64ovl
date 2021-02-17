#ifndef __Z64OVL_Z_EN_BA__
#define __Z64OVL_Z_EN_BA__

#define Z_EN_BA_ACTOR_NUMBER     0x00DE
#define Z_EN_BA_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BA_OBJECT_NUMBER    0x00D5
#define Z_EN_BA_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_ba_s z_en_ba_t;
struct z_en_ba_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ int mode;
    /* 0x140 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x144 */ short arg_data2;
    /* 0x148 */ xyz_t shape_pos[14];
    /* 0x1F0 */ xyz_t shape_sc[14];
    /* 0x298 */ s_xyz shape_ang[14];
    /* 0x2EC */ xyz_t trg_pos;
    /* 0x2F8 */ float x_add;
    /* 0x2FC */ float z_add;
    /* 0x300 */ float x_s_add;
    /* 0x304 */ float z_c_add;
    /* 0x308 */ short timer;
    /* 0x30A */ short timer2;
    /* 0x30C */ short ang_spd;
    /* 0x310 */ ClObjJntSph sph_pos;
    /* 0x330 */ ClObjJntSphElem sph_elem[2];
}; /* size = 0x03C0 */

#endif /* __Z64OVL_Z_EN_BA__ */
