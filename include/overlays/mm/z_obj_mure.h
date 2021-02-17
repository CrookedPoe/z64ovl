#ifndef __Z64OVL_Z_OBJ_MURE__
#define __Z64OVL_Z_OBJ_MURE__

#define Z_OBJ_MURE_ACTOR_NUMBER     0x004F
#define Z_OBJ_MURE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJ_MURE_OBJECT_NUMBER    0x0001
#define Z_OBJ_MURE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_mure_s z_obj_mure_t;
struct z_obj_mure_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*mvProc)(/* ECOFF does not store param types */);
    /* 0x148 */ short chNum;
    /* 0x14A */ short ptn;
    /* 0x14C */ short svNum;
    /* 0x14E */ short type;
    /* 0x150 */ ACTOR* kodomo[15];
    /* 0x18C */ unsigned char jotai[15];
    /* 0x19C */ short timer;
    /* 0x19E */ short chaos_flag;
    /* 0x1A0 */ short count;
}; /* size = 0x01A4 */

#endif /* __Z64OVL_Z_OBJ_MURE__ */
