#ifndef __Z64OVL_Z_OBJ_AQUA__
#define __Z64OVL_Z_OBJ_AQUA__

#define Z_OBJ_AQUA_ACTOR_NUMBER     0x01AF
#define Z_OBJ_AQUA_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJ_AQUA_OBJECT_NUMBER    0x0001
#define Z_OBJ_AQUA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_aqua_s z_obj_aqua_t;
struct z_obj_aqua_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe;
    /* 0x190 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x194 */ short mode_timer;
    /* 0x196 */ unsigned char alpha;
    /* 0x197 */ unsigned char pad_1[1];
    /* 0x198 */ short fi_1;
}; /* size = 0x019C */

#endif /* __Z64OVL_Z_OBJ_AQUA__ */
