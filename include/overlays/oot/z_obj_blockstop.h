#ifndef __Z64OVL_Z_OBJ_BLOCKSTOP__
#define __Z64OVL_Z_OBJ_BLOCKSTOP__

#define Z_OBJ_BLOCKSTOP_ACTOR_NUMBER     0x0139
#define Z_OBJ_BLOCKSTOP_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_BLOCKSTOP_OBJECT_NUMBER    0x0001
#define Z_OBJ_BLOCKSTOP_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_blockstop_s z_obj_blockstop_t;
struct z_obj_blockstop_s {
    /* 0x0 */ ACTOR actor;
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_OBJ_BLOCKSTOP__ */
