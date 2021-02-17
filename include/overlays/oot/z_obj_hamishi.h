#ifndef __Z64OVL_Z_OBJ_HAMISHI__
#define __Z64OVL_Z_OBJ_HAMISHI__

#define Z_OBJ_HAMISHI_ACTOR_NUMBER     0x01D2
#define Z_OBJ_HAMISHI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_HAMISHI_OBJECT_NUMBER    0x0002
#define Z_OBJ_HAMISHI_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_hamishi_s z_obj_hamishi_t;
struct z_obj_hamishi_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ ClObjPipe pipe;
    /* 0x188 */ float vib_power_pos;
    /* 0x18C */ float vib_power_rot;
    /* 0x190 */ short vib_counter;
    /* 0x192 */ short vib_angle_pos;
    /* 0x194 */ short vib_angle_rot;
    /* 0x196 */ short hammer_counter;
}; /* size = 0x01A8 */

#endif /* __Z64OVL_Z_OBJ_HAMISHI__ */
