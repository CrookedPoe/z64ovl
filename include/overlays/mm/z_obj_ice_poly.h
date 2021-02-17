#ifndef __Z64OVL_Z_OBJ_ICE_POLY__
#define __Z64OVL_Z_OBJ_ICE_POLY__

#define Z_OBJ_ICE_POLY_ACTOR_NUMBER     0x008E
#define Z_OBJ_ICE_POLY_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJ_ICE_POLY_OBJECT_NUMBER    0x0001
#define Z_OBJ_ICE_POLY_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_ice_poly_s z_obj_ice_poly_t;
struct z_obj_ice_poly_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ unsigned char env_alpha;
    /* 0x149 */ unsigned char sw_num;
    /* 0x14A */ short timer;
    /* 0x14C */ ClObjPipe all_pipe[2];
    /* 0x1E4 */ ClObjPipe ac_pipe[2];
}; /* size = 0x027C */

#endif /* __Z64OVL_Z_OBJ_ICE_POLY__ */
