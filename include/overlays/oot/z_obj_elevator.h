#ifndef __Z64OVL_Z_OBJ_ELEVATOR__
#define __Z64OVL_Z_OBJ_ELEVATOR__

#define Z_OBJ_ELEVATOR_ACTOR_NUMBER     0x012B
#define Z_OBJ_ELEVATOR_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_ELEVATOR_OBJECT_NUMBER    0x011B
#define Z_OBJ_ELEVATOR_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_elevator_s z_obj_elevator_t;
struct z_obj_elevator_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ float goal_posY;
    /* 0x15C */ float speed;
    /* 0x160 */ unsigned char old_status;
}; /* size = 0x0174 */

#endif /* __Z64OVL_Z_OBJ_ELEVATOR__ */
