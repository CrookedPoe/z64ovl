#ifndef __Z64OVL_Z_OBJ_LIFT__
#define __Z64OVL_Z_OBJ_LIFT__

#define Z_OBJ_LIFT_ACTOR_NUMBER     0x0095
#define Z_OBJ_LIFT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_LIFT_OBJECT_NUMBER    0x00ED
#define Z_OBJ_LIFT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_lift_s z_obj_lift_t;
struct z_obj_lift_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x160 */ short fi_1;
    /* 0x162 */ short fi_2;
    /* 0x164 */ short fi_3;
    /* 0x166 */ short timer;
    /* 0x168 */ xyz_t vib_pos;
    /* 0x174 */ short vib_angle_x;
    /* 0x176 */ short vib_angle_z;
    /* 0x178 */ short revival_time;
}; /* size = 0x017C */

#endif /* __Z64OVL_Z_OBJ_LIFT__ */
