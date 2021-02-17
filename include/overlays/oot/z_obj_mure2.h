#ifndef __Z64OVL_Z_OBJ_MURE2__
#define __Z64OVL_Z_OBJ_MURE2__

#define Z_OBJ_MURE2_ACTOR_NUMBER     0x0151
#define Z_OBJ_MURE2_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_MURE2_OBJECT_NUMBER    0x0001
#define Z_OBJ_MURE2_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_mure2_s z_obj_mure2_t;
struct z_obj_mure2_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ ACTOR* ch_act[12];
    /* 0x170 */ unsigned short ch_status;
    /* 0x174 */ float dist_k2;
}; /* size = 0x0188 */

#endif /* __Z64OVL_Z_OBJ_MURE2__ */
