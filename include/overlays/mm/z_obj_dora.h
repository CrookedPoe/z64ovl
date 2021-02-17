#ifndef __Z64OVL_Z_OBJ_DORA__
#define __Z64OVL_Z_OBJ_DORA__

#define Z_OBJ_DORA_ACTOR_NUMBER     0x0207
#define Z_OBJ_DORA_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_OBJ_DORA_OBJECT_NUMBER    0x01EE
#define Z_OBJ_DORA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_dora_s z_obj_dora_t;
struct z_obj_dora_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjTris tris_info;
    /* 0x164 */ ClObjTrisElem tris_elem[6];
    /* 0x38C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x390 */ float vibe_trans;
    /* 0x394 */ float swing_angle;
    /* 0x398 */ float swing_angle2;
    /* 0x39C */ short swing_cycle;
    /* 0x39E */ short swing_cycle2;
    /* 0x3A0 */ short swing_type;
    /* 0x3A2 */ short vibe_angle_x;
    /* 0x3A4 */ short vibe_angle_x2;
    /* 0x3A6 */ short lupy_timer;
    /* 0x3A8 */ short collision_timer;
    /* 0x3AA */ short proc_timer;
}; /* size = 0x03AC */

#endif /* __Z64OVL_Z_OBJ_DORA__ */
