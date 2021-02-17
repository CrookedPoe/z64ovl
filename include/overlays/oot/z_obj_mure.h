#ifndef __Z64OVL_Z_OBJ_MURE__
#define __Z64OVL_Z_OBJ_MURE__

#define Z_OBJ_MURE_ACTOR_NUMBER     0x0094
#define Z_OBJ_MURE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJ_MURE_OBJECT_NUMBER    0x0001
#define Z_OBJ_MURE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_mure_s z_obj_mure_t;
struct z_obj_mure_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*mvProc)(/* ECOFF does not store param types */);
    /* 0x140 */ short chNum;
    /* 0x142 */ short ptn;
    /* 0x144 */ short svNum;
    /* 0x146 */ short type;
    /* 0x148 */ ACTOR* kodomo[15];
    /* 0x184 */ unsigned char jotai[15];
    /* 0x194 */ short timer;
    /* 0x196 */ short chaos_flag;
    /* 0x198 */ short count;
}; /* size = 0x01AC */

#endif /* __Z64OVL_Z_OBJ_MURE__ */
