#ifndef __Z64OVL_Z_OBJ_Y2LIFT__
#define __Z64OVL_Z_OBJ_Y2LIFT__

#define Z_OBJ_Y2LIFT_ACTOR_NUMBER     0x022A
#define Z_OBJ_Y2LIFT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_Y2LIFT_OBJECT_NUMBER    0x020E
#define Z_OBJ_Y2LIFT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_y2lift_s z_obj_y2lift_t;
struct z_obj_y2lift_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ unsigned char timer;
    /* 0x15D */ unsigned char ride;
    /* 0x15E */ unsigned char end;
    /* 0x15F */ unsigned char tilt;
}; /* size = 0x0160 */

#endif /* __Z64OVL_Z_OBJ_Y2LIFT__ */
