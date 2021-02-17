#ifndef __Z64OVL_Z_OBJ_KIBAKO2__
#define __Z64OVL_Z_OBJ_KIBAKO2__

#define Z_OBJ_KIBAKO2_ACTOR_NUMBER     0x01A0
#define Z_OBJ_KIBAKO2_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_KIBAKO2_OBJECT_NUMBER    0x0170
#define Z_OBJ_KIBAKO2_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_kibako2_s z_obj_kibako2_t;
struct z_obj_kibako2_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ ClObjPipe pipe;
    /* 0x1A0 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x1A4 */ short item_bit_num;
}; /* size = 0x01B8 */

#endif /* __Z64OVL_Z_OBJ_KIBAKO2__ */
