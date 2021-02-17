#ifndef __Z64OVL_Z_OBJ_SWPRIZE__
#define __Z64OVL_Z_OBJ_SWPRIZE__

#define Z_OBJ_SWPRIZE_ACTOR_NUMBER     0x02AE
#define Z_OBJ_SWPRIZE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_SWPRIZE_OBJECT_NUMBER    0x0001
#define Z_OBJ_SWPRIZE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_swprize_s z_obj_swprize_t;
struct z_obj_swprize_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ short mode_timer;
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_OBJ_SWPRIZE__ */
