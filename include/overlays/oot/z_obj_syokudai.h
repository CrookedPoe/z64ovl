#ifndef __Z64OVL_Z_OBJ_SYOKUDAI__
#define __Z64OVL_Z_OBJ_SYOKUDAI__

#define Z_OBJ_SYOKUDAI_ACTOR_NUMBER     0x005E
#define Z_OBJ_SYOKUDAI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_SYOKUDAI_OBJECT_NUMBER    0x00A4
#define Z_OBJ_SYOKUDAI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_obj_syokudai_s z_obj_syokudai_t;
struct z_obj_syokudai_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe oc_info;
    /* 0x188 */ ClObjPipe ac_info;
    /* 0x1D4 */ short timer;
    /* 0x1D6 */ unsigned char count;
    /* 0x1D8 */ Light_list* light_list;
    /* 0x1DC */ Light_data light_data;
}; /* size = 0x01FC */

#endif /* __Z64OVL_Z_OBJ_SYOKUDAI__ */
