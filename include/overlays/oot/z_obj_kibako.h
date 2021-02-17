#ifndef __Z64OVL_Z_OBJ_KIBAKO__
#define __Z64OVL_Z_OBJ_KIBAKO__

#define Z_OBJ_KIBAKO_ACTOR_NUMBER     0x0110
#define Z_OBJ_KIBAKO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_KIBAKO_OBJECT_NUMBER    0x0003
#define Z_OBJ_KIBAKO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_PRESS_SWITCH)

typedef struct z_obj_kibako_s z_obj_kibako_t;
struct z_obj_kibako_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjPipe pipe;
}; /* size = 0x019C */

#endif /* __Z64OVL_Z_OBJ_KIBAKO__ */
