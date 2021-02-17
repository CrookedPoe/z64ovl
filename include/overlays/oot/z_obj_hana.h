#ifndef __Z64OVL_Z_OBJ_HANA__
#define __Z64OVL_Z_OBJ_HANA__

#define Z_OBJ_HANA_ACTOR_NUMBER     0x014F
#define Z_OBJ_HANA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_HANA_OBJECT_NUMBER    0x0002
#define Z_OBJ_HANA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_hana_s z_obj_hana_t;
struct z_obj_hana_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ ClObjPipe pipe;
}; /* size = 0x0198 */

#endif /* __Z64OVL_Z_OBJ_HANA__ */
