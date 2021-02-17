#ifndef __Z64OVL_Z_OBJ_DEMO__
#define __Z64OVL_Z_OBJ_DEMO__

#define Z_OBJ_DEMO_ACTOR_NUMBER     0x00D8
#define Z_OBJ_DEMO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_DEMO_OBJECT_NUMBER    0x0001
#define Z_OBJ_DEMO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_demo_s z_obj_demo_t;
struct z_obj_demo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ int door_stop_flg;
    /* 0x14C */ float check_radius;
    /* 0x150 */ float check_height;
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_OBJ_DEMO__ */
