#ifndef __Z64OVL_Z_OBJ_KIBAKO__
#define __Z64OVL_Z_OBJ_KIBAKO__

#define Z_OBJ_KIBAKO_ACTOR_NUMBER     0x0081
#define Z_OBJ_KIBAKO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_KIBAKO_OBJECT_NUMBER    0x0001
#define Z_OBJ_KIBAKO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_PRESS_SWITCH)

typedef struct z_obj_kibako_s z_obj_kibako_t;
struct z_obj_kibako_s {
    /* 0x0 */ ACTOR a;
    /* 0x144 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjPipe pipe;
    /* 0x194 */ short timer;
    /* 0x196 */ short bank_ID;
    /* 0x198 */ signed char item_set_flag;
    /* 0x199 */ signed char home_room_id;
    /* 0x19A */ unsigned char pad_0[2];
}; /* size = 0x019C */

#endif /* __Z64OVL_Z_OBJ_KIBAKO__ */
