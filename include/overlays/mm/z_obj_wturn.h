#ifndef __Z64OVL_Z_OBJ_WTURN__
#define __Z64OVL_Z_OBJ_WTURN__

#define Z_OBJ_WTURN_ACTOR_NUMBER     0x0027
#define Z_OBJ_WTURN_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJ_WTURN_OBJECT_NUMBER    0x0001
#define Z_OBJ_WTURN_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_SFX_SYSTEM | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_obj_wturn_s z_obj_wturn_t;
struct z_obj_wturn_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ short demo_camera;
    /* 0x14A */ short timer;
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_OBJ_WTURN__ */
