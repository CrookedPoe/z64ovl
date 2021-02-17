#ifndef __Z64OVL_Z_OBJ_LIGHTBLOCK__
#define __Z64OVL_Z_OBJ_LIGHTBLOCK__

#define Z_OBJ_LIGHTBLOCK_ACTOR_NUMBER     0x01CF
#define Z_OBJ_LIGHTBLOCK_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_LIGHTBLOCK_OBJECT_NUMBER    0x01B3
#define Z_OBJ_LIGHTBLOCK_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_lightblock_s z_obj_lightblock_t;
struct z_obj_lightblock_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjPipe pipe;
    /* 0x1A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1AC */ signed char mode_timer;
    /* 0x1AD */ unsigned char alpha;
    /* 0x1AE */ signed char power_counter;
    /* 0x1AF */ unsigned char pad[1];
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_OBJ_LIGHTBLOCK__ */
