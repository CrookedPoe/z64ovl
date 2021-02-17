#ifndef __Z64OVL_Z_OBJ_MAKEKINSUTA__
#define __Z64OVL_Z_OBJ_MAKEKINSUTA__

#define Z_OBJ_MAKEKINSUTA_ACTOR_NUMBER     0x00F9
#define Z_OBJ_MAKEKINSUTA_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJ_MAKEKINSUTA_OBJECT_NUMBER    0x0001
#define Z_OBJ_MAKEKINSUTA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_makekinsuta_s z_obj_makekinsuta_t;
struct z_obj_makekinsuta_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ signed char gold_se_timer;
    /* 0x145 */ unsigned char pad_0[3];
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_OBJ_MAKEKINSUTA__ */
