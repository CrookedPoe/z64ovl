#ifndef __Z64OVL_Z_OBJ_FLOWERPOT__
#define __Z64OVL_Z_OBJ_FLOWERPOT__

#define Z_OBJ_FLOWERPOT_ACTOR_NUMBER     0x013E
#define Z_OBJ_FLOWERPOT_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_FLOWERPOT_OBJECT_NUMBER    0x0165
#define Z_OBJ_FLOWERPOT_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_flowerpot_s z_obj_flowerpot_t;
struct z_obj_flowerpot_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjJntSph sph;
    /* 0x164 */ ClObjJntSphElem elem[2];
    /* 0x1E4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1E8 */ short timer;
    /* 0x1EA */ unsigned char status;
    /* 0x1EB */ signed char swing_idx;
    /* 0x1EC */ signed char home_room_id;
    /* 0x1ED */ unsigned char pad_0[3];
}; /* size = 0x01F0 */

#endif /* __Z64OVL_Z_OBJ_FLOWERPOT__ */
