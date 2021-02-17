#ifndef __Z64OVL_Z_OBJ_YASI__
#define __Z64OVL_Z_OBJ_YASI__

#define Z_OBJ_YASI_ACTOR_NUMBER     0x023C
#define Z_OBJ_YASI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_YASI_OBJECT_NUMBER    0x0218
#define Z_OBJ_YASI_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_yasi_s z_obj_yasi_t;
struct z_obj_yasi_s {
    /* 0x0 */ MoveBG_Actor moveBG;
}; /* size = 0x015C */

#endif /* __Z64OVL_Z_OBJ_YASI__ */
