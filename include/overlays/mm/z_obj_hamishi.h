#ifndef __Z64OVL_Z_OBJ_HAMISHI__
#define __Z64OVL_Z_OBJ_HAMISHI__

#define Z_OBJ_HAMISHI_ACTOR_NUMBER     0x00FC
#define Z_OBJ_HAMISHI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_HAMISHI_OBJECT_NUMBER    0x0002
#define Z_OBJ_HAMISHI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_hamishi_s z_obj_hamishi_t;
struct z_obj_hamishi_s {
    /* 0x0 */ ACTOR a;
    /* 0x144 */ ClObjPipe pipe;
    /* 0x190 */ float vib_power_pos;
    /* 0x194 */ float vib_power_rot;
    /* 0x198 */ short vib_counter;
    /* 0x19A */ short vib_angle_pos;
    /* 0x19C */ short vib_angle_rot;
    /* 0x19E */ short hammer_counter;
    /* 0x1A0 */ signed char ac_cancel_timer;
    /* 0x1A1 */ signed char no_hm_timer;
    /* 0x1A2 */ unsigned char info;
    /* 0x1A3 */ unsigned char pad[1];
}; /* size = 0x01A4 */

#endif /* __Z64OVL_Z_OBJ_HAMISHI__ */
