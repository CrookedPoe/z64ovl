#ifndef __Z64OVL_Z_OBJ_BLOCKSTOP__
#define __Z64OVL_Z_OBJ_BLOCKSTOP__

#define Z_OBJ_BLOCKSTOP_ACTOR_NUMBER     0x00A0
#define Z_OBJ_BLOCKSTOP_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_BLOCKSTOP_OBJECT_NUMBER    0x0001
#define Z_OBJ_BLOCKSTOP_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_blockstop_s z_obj_blockstop_t;
struct z_obj_blockstop_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_OBJ_BLOCKSTOP__ */
