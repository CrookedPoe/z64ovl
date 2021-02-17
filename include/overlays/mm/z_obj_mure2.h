#ifndef __Z64OVL_Z_OBJ_MURE2__
#define __Z64OVL_Z_OBJ_MURE2__

#define Z_OBJ_MURE2_ACTOR_NUMBER     0x00B3
#define Z_OBJ_MURE2_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_MURE2_OBJECT_NUMBER    0x0001
#define Z_OBJ_MURE2_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_mure2_s z_obj_mure2_t;
struct z_obj_mure2_s {
    /* 0x0 */ ACTOR a;
    /* 0x144 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x148 */ ACTOR* ch_act[12];
    /* 0x178 */ unsigned short ch_status;
    /* 0x17C */ float dist_k2;
}; /* size = 0x0180 */

#endif /* __Z64OVL_Z_OBJ_MURE2__ */
