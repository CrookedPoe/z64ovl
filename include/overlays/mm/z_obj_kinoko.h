#ifndef __Z64OVL_Z_OBJ_KINOKO__
#define __Z64OVL_Z_OBJ_KINOKO__

#define Z_OBJ_KINOKO_ACTOR_NUMBER     0x023B
#define Z_OBJ_KINOKO_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJ_KINOKO_OBJECT_NUMBER    0x0001
#define Z_OBJ_KINOKO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_kinoko_s z_obj_kinoko_t;
struct z_obj_kinoko_s {
    /* 0x0 */ ACTOR actor;
}; /* size = 0x0144 */

#endif /* __Z64OVL_Z_OBJ_KINOKO__ */
