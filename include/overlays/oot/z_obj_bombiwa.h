#ifndef __Z64OVL_Z_OBJ_BOMBIWA__
#define __Z64OVL_Z_OBJ_BOMBIWA__

#define Z_OBJ_BOMBIWA_ACTOR_NUMBER     0x0127
#define Z_OBJ_BOMBIWA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_BOMBIWA_OBJECT_NUMBER    0x0163
#define Z_OBJ_BOMBIWA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_bombiwa_s z_obj_bombiwa_t;
struct z_obj_bombiwa_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ ClObjPipe pipe;
}; /* size = 0x0198 */

#endif /* __Z64OVL_Z_OBJ_BOMBIWA__ */
