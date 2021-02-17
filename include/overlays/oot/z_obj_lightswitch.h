#ifndef __Z64OVL_Z_OBJ_LIGHTSWITCH__
#define __Z64OVL_Z_OBJ_LIGHTSWITCH__

#define Z_OBJ_LIGHTSWITCH_ACTOR_NUMBER     0x0150
#define Z_OBJ_LIGHTSWITCH_ACTOR_CATEGORY   ACTORCAT_SWITCH
#define Z_OBJ_LIGHTSWITCH_OBJECT_NUMBER    0x012A
#define Z_OBJ_LIGHTSWITCH_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_lightswitch_s z_obj_lightswitch_t;
struct z_obj_lightswitch_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjJntSph sph;
    /* 0x160 */ ClObjJntSphElem elem;
    /* 0x1A0 */ short counter;
    /* 0x1A2 */ short attention_timer;
    /* 0x1A4 */ short ptn_num;
    /* 0x1A6 */ short col[3];
    /* 0x1AC */ short alpha;
    /* 0x1AE */ short ang_pos;
    /* 0x1B0 */ short ang_spd;
    /* 0x1B2 */ unsigned char old_ac_bit;
}; /* size = 0x01C4 */

#endif /* __Z64OVL_Z_OBJ_LIGHTSWITCH__ */
