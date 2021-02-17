#ifndef __Z64OVL_Z_OBJ_MURE3__
#define __Z64OVL_Z_OBJ_MURE3__

#define Z_OBJ_MURE3_ACTOR_NUMBER     0x01AB
#define Z_OBJ_MURE3_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_MURE3_OBJECT_NUMBER    0x0001
#define Z_OBJ_MURE3_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_mure3_s z_obj_mure3_t;
struct z_obj_mure3_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ ACTOR* ch_act[7];
    /* 0x15C */ unsigned short ch_status;
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_OBJ_MURE3__ */
