#ifndef __Z64OVL_Z_OBJ_COMB__
#define __Z64OVL_Z_OBJ_COMB__

#define Z_OBJ_COMB_ACTOR_NUMBER     0x019E
#define Z_OBJ_COMB_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_COMB_OBJECT_NUMBER    0x0002
#define Z_OBJ_COMB_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_comb_s z_obj_comb_t;
struct z_obj_comb_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjJntSph sph;
    /* 0x160 */ ClObjJntSphElem elem;
    /* 0x1A0 */ short swing_width;
    /* 0x1A2 */ short fi_1;
}; /* size = 0x01B4 */

#endif /* __Z64OVL_Z_OBJ_COMB__ */
