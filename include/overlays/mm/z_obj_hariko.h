#ifndef __Z64OVL_Z_OBJ_HARIKO__
#define __Z64OVL_Z_OBJ_HARIKO__

#define Z_OBJ_HARIKO_ACTOR_NUMBER     0x020A
#define Z_OBJ_HARIKO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_HARIKO_OBJECT_NUMBER    0x01F2
#define Z_OBJ_HARIKO_FLAGS            (ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_obj_hariko_s z_obj_hariko_t;
struct z_obj_hariko_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ float swing_angle_z;
    /* 0x14C */ s_xyz neck_angle;
    /* 0x152 */ short swing_angle;
    /* 0x154 */ short proc_timer;
}; /* size = 0x0158 */

#endif /* __Z64OVL_Z_OBJ_HARIKO__ */
