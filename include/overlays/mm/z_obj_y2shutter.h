#ifndef __Z64OVL_Z_OBJ_Y2SHUTTER__
#define __Z64OVL_Z_OBJ_Y2SHUTTER__

#define Z_OBJ_Y2SHUTTER_ACTOR_NUMBER     0x022B
#define Z_OBJ_Y2SHUTTER_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_Y2SHUTTER_OBJECT_NUMBER    0x020E
#define Z_OBJ_Y2SHUTTER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_y2shutter_s z_obj_y2shutter_t;
struct z_obj_y2shutter_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ short open;
    /* 0x15E */ unsigned char end;
    /* 0x15F */ unsigned char tilt;
}; /* size = 0x0160 */

#endif /* __Z64OVL_Z_OBJ_Y2SHUTTER__ */
