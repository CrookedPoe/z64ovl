#ifndef __Z64OVL_Z_OBJ_SYOKUDAI__
#define __Z64OVL_Z_OBJ_SYOKUDAI__

#define Z_OBJ_SYOKUDAI_ACTOR_NUMBER     0x0039
#define Z_OBJ_SYOKUDAI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_SYOKUDAI_OBJECT_NUMBER    0x0080
#define Z_OBJ_SYOKUDAI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_obj_syokudai_s z_obj_syokudai_t;
struct z_obj_syokudai_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe oc_info;
    /* 0x190 */ ClObjPipe ac_info;
    /* 0x1DC */ short timer;
    /* 0x1DE */ unsigned char count;
    /* 0x1DF */ signed char event_start_flag;
    /* 0x1E0 */ Light_list* light_list;
    /* 0x1E4 */ Light_data light_data;
}; /* size = 0x01F4 */

#endif /* __Z64OVL_Z_OBJ_SYOKUDAI__ */
