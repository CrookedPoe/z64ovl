#ifndef __Z64OVL_Z_EN_AROW_TRAP__
#define __Z64OVL_Z_EN_AROW_TRAP__

#define Z_EN_AROW_TRAP_ACTOR_NUMBER     0x0081
#define Z_EN_AROW_TRAP_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_AROW_TRAP_OBJECT_NUMBER    0x0001
#define Z_EN_AROW_TRAP_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_arow_trap_s z_en_arow_trap_t;
struct z_en_arow_trap_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ int action;
    /* 0x140 */ int mode_timer;
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_EN_AROW_TRAP__ */
