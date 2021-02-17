#ifndef __Z64OVL_Z_OBJ_DINNER__
#define __Z64OVL_Z_OBJ_DINNER__

#define Z_OBJ_DINNER_ACTOR_NUMBER     0x0271
#define Z_OBJ_DINNER_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_DINNER_OBJECT_NUMBER    0x0244
#define Z_OBJ_DINNER_FLAGS            (ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_dinner_s z_obj_dinner_t;
struct z_obj_dinner_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_OBJ_DINNER__ */
