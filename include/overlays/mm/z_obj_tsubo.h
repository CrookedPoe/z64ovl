#ifndef __Z64OVL_Z_OBJ_TSUBO__
#define __Z64OVL_Z_OBJ_TSUBO__

#define Z_OBJ_TSUBO_ACTOR_NUMBER     0x0082
#define Z_OBJ_TSUBO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_TSUBO_OBJECT_NUMBER    0x0001
#define Z_OBJ_TSUBO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_THROW_ONLY | ACTORFLAG_CAN_PRESS_SWITCH)

typedef struct z_obj_tsubo_s z_obj_tsubo_t;
struct z_obj_tsubo_s {
    /* 0x0 */ ACTOR a;
    /* 0x144 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjPipe pipe;
    /* 0x194 */ signed char timer;
    /* 0x195 */ signed char bgcheck_stop_flag;
    /* 0x196 */ signed char home_room_id;
    /* 0x197 */ signed char item_set_flag;
    /* 0x198 */ signed char stand_on_end_flag;
    /* 0x199 */ signed char bankID;
    /* 0x19A */ signed char gold_se_timer;
    /* 0x19B */ unsigned char external_power;
}; /* size = 0x019C */

#endif /* __Z64OVL_Z_OBJ_TSUBO__ */
