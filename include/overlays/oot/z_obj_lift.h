#ifndef __Z64OVL_Z_OBJ_LIFT__
#define __Z64OVL_Z_OBJ_LIFT__

#define Z_OBJ_LIFT_ACTOR_NUMBER     0x012C
#define Z_OBJ_LIFT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_LIFT_OBJECT_NUMBER    0x011D
#define Z_OBJ_LIFT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_lift_s z_obj_lift_t;
struct z_obj_lift_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ short fi_1;
    /* 0x15A */ short fi_2;
    /* 0x15C */ short fi_3;
    /* 0x15E */ short timer;
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_OBJ_LIFT__ */
