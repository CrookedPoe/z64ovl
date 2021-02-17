#ifndef __Z64OVL_Z_OBJ_MAKEKINSUTA__
#define __Z64OVL_Z_OBJ_MAKEKINSUTA__

#define Z_OBJ_MAKEKINSUTA_ACTOR_NUMBER     0x01CF
#define Z_OBJ_MAKEKINSUTA_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJ_MAKEKINSUTA_OBJECT_NUMBER    0x0001
#define Z_OBJ_MAKEKINSUTA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_makekinsuta_s z_obj_makekinsuta_t;
struct z_obj_makekinsuta_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ short timer;
    /* 0x142 */ short flag;
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_OBJ_MAKEKINSUTA__ */
