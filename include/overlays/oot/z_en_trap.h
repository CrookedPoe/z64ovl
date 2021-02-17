#ifndef __Z64OVL_Z_EN_TRAP__
#define __Z64OVL_Z_EN_TRAP__

#define Z_EN_TRAP_ACTOR_NUMBER     0x0080
#define Z_EN_TRAP_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_TRAP_OBJECT_NUMBER    0x0085
#define Z_EN_TRAP_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_trap_s z_en_trap_t;
struct z_en_trap_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ int mode_timer;
    /* 0x140 */ short arg2_data;
    /* 0x142 */ short s_wk0;
    /* 0x144 */ float s_wk1;
    /* 0x148 */ xyz_t x_e_pos0;
    /* 0x154 */ xyz_t x_e_pos1;
    /* 0x160 */ xyz_t z_e_pos0;
    /* 0x16C */ xyz_t z_e_pos1;
    /* 0x178 */ xyz_t max_speed_x;
    /* 0x184 */ xyz_t max_speed_z;
    /* 0x190 */ ClObjPipe pipe_pos;
}; /* size = 0x01EC */

#endif /* __Z64OVL_Z_EN_TRAP__ */
