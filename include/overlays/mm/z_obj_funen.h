#ifndef __Z64OVL_Z_OBJ_FUNEN__
#define __Z64OVL_Z_OBJ_FUNEN__

#define Z_OBJ_FUNEN_ACTOR_NUMBER     0x013B
#define Z_OBJ_FUNEN_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_FUNEN_OBJECT_NUMBER    0x0162
#define Z_OBJ_FUNEN_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_funen_s z_obj_funen_t;
struct z_obj_funen_s {
    /* 0x0 */ ACTOR actor;
}; /* size = 0x0144 */

#endif /* __Z64OVL_Z_OBJ_FUNEN__ */
