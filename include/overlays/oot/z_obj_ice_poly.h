#ifndef __Z64OVL_Z_OBJ_ICE_POLY__
#define __Z64OVL_Z_OBJ_ICE_POLY__

#define Z_OBJ_ICE_POLY_ACTOR_NUMBER     0x011E
#define Z_OBJ_ICE_POLY_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_ICE_POLY_OBJECT_NUMBER    0x0001
#define Z_OBJ_ICE_POLY_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_ice_poly_s z_obj_ice_poly_t;
struct z_obj_ice_poly_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ unsigned char env_alpha;
    /* 0x141 */ unsigned char sw_num;
    /* 0x142 */ short timer;
    /* 0x144 */ ClObjPipe all_pipe;
    /* 0x190 */ ClObjPipe shield_pipe;
}; /* size = 0x01EC */

#endif /* __Z64OVL_Z_OBJ_ICE_POLY__ */
