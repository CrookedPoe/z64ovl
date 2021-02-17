#ifndef __Z64OVL_Z_OBJ_SHUTTER__
#define __Z64OVL_Z_OBJ_SHUTTER__

#define Z_OBJ_SHUTTER_ACTOR_NUMBER     0x0151
#define Z_OBJ_SHUTTER_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_SHUTTER_OBJECT_NUMBER    0x016D
#define Z_OBJ_SHUTTER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_shutter_s z_obj_shutter_t;
struct z_obj_shutter_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ unsigned char schedule;
    /* 0x148 */ float offset_y;
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_OBJ_SHUTTER__ */
