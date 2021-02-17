#ifndef __Z64OVL_Z_OBJ_DOWSING__
#define __Z64OVL_Z_OBJ_DOWSING__

#define Z_OBJ_DOWSING_ACTOR_NUMBER     0x01EC
#define Z_OBJ_DOWSING_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJ_DOWSING_OBJECT_NUMBER    0x0001
#define Z_OBJ_DOWSING_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_dowsing_s z_obj_dowsing_t;
struct z_obj_dowsing_s {
    /* 0x0 */ ACTOR actor;
}; /* size = 0x0144 */

#endif /* __Z64OVL_Z_OBJ_DOWSING__ */
