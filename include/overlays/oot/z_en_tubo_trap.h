#ifndef __Z64OVL_Z_EN_TUBO_TRAP__
#define __Z64OVL_Z_EN_TUBO_TRAP__

#define Z_EN_TUBO_TRAP_ACTOR_NUMBER     0x011D
#define Z_EN_TUBO_TRAP_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_TUBO_TRAP_OBJECT_NUMBER    0x0003
#define Z_EN_TUBO_TRAP_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_tubo_trap_s z_en_tubo_trap_t;
struct z_en_tubo_trap_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ float HIT_pos;
    /* 0x144 */ xyz_t pos;
    /* 0x150 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x01AC */

#endif /* __Z64OVL_Z_EN_TUBO_TRAP__ */
