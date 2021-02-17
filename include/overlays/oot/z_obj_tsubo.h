#ifndef __Z64OVL_Z_OBJ_TSUBO__
#define __Z64OVL_Z_OBJ_TSUBO__

#define Z_OBJ_TSUBO_ACTOR_NUMBER     0x0111
#define Z_OBJ_TSUBO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_TSUBO_OBJECT_NUMBER    0x0001
#define Z_OBJ_TSUBO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_THROW_ONLY)

typedef struct z_obj_tsubo_s z_obj_tsubo_t;
struct z_obj_tsubo_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjPipe pipe;
    /* 0x18C */ signed char bankID;
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_OBJ_TSUBO__ */
