#ifndef __Z64OVL_Z_OBJ_TOKEI_TURRET__
#define __Z64OVL_Z_OBJ_TOKEI_TURRET__

#define Z_OBJ_TOKEI_TURRET_ACTOR_NUMBER     0x0221
#define Z_OBJ_TOKEI_TURRET_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_TOKEI_TURRET_OBJECT_NUMBER    0x0205
#define Z_OBJ_TOKEI_TURRET_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_tokei_turret_s z_obj_tokei_turret_t;
struct z_obj_tokei_turret_s {
    /* 0x0 */ MoveBG_Actor moveBG;
}; /* size = 0x015C */

#endif /* __Z64OVL_Z_OBJ_TOKEI_TURRET__ */
