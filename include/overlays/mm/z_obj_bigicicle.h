#ifndef __Z64OVL_Z_OBJ_BIGICICLE__
#define __Z64OVL_Z_OBJ_BIGICICLE__

#define Z_OBJ_BIGICICLE_ACTOR_NUMBER     0x01C8
#define Z_OBJ_BIGICICLE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_BIGICICLE_OBJECT_NUMBER    0x01AD
#define Z_OBJ_BIGICICLE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_bigicicle_s z_obj_bigicicle_t;
struct z_obj_bigicicle_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ unsigned char event_timing;
    /* 0x149 */ unsigned char shape_data;
    /* 0x14A */ short timer;
    /* 0x14C */ ClObjPipe acoc_pipe;
    /* 0x198 */ ClObjPipe shield_pipe;
}; /* size = 0x01E4 */

#endif /* __Z64OVL_Z_OBJ_BIGICICLE__ */
