#ifndef __Z64OVL_Z_OBJ_ROOMTIMER__
#define __Z64OVL_Z_OBJ_ROOMTIMER__

#define Z_OBJ_ROOMTIMER_ACTOR_NUMBER     0x00D3
#define Z_OBJ_ROOMTIMER_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_OBJ_ROOMTIMER_OBJECT_NUMBER    0x0001
#define Z_OBJ_ROOMTIMER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_roomtimer_s z_obj_roomtimer_t;
struct z_obj_roomtimer_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ int sw_num;
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_OBJ_ROOMTIMER__ */
