#ifndef __Z64OVL_Z_EN_TUBO_TRAP__
#define __Z64OVL_Z_EN_TUBO_TRAP__

#define Z_EN_TUBO_TRAP_ACTOR_NUMBER     0x008D
#define Z_EN_TUBO_TRAP_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_TUBO_TRAP_OBJECT_NUMBER    0x0003
#define Z_EN_TUBO_TRAP_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_tubo_trap_s z_en_tubo_trap_t;
struct z_en_tubo_trap_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ float HIT_pos;
    /* 0x14C */ xyz_t pos;
    /* 0x158 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x01A4 */

#endif /* __Z64OVL_Z_EN_TUBO_TRAP__ */
