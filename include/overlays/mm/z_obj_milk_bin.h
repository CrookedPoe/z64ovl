#ifndef __Z64OVL_Z_OBJ_MILK_BIN__
#define __Z64OVL_Z_OBJ_MILK_BIN__

#define Z_OBJ_MILK_BIN_ACTOR_NUMBER     0x028B
#define Z_OBJ_MILK_BIN_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_MILK_BIN_OBJECT_NUMBER    0x0261
#define Z_OBJ_MILK_BIN_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_milk_bin_s z_obj_milk_bin_t;
struct z_obj_milk_bin_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjPipe pipe;
    /* 0x194 */ unsigned long status;
    /* 0x198 */ int type;
}; /* size = 0x019C */

#endif /* __Z64OVL_Z_OBJ_MILK_BIN__ */
