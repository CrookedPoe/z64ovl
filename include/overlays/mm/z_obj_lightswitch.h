#ifndef __Z64OVL_Z_OBJ_LIGHTSWITCH__
#define __Z64OVL_Z_OBJ_LIGHTSWITCH__

#define Z_OBJ_LIGHTSWITCH_ACTOR_NUMBER     0x00B2
#define Z_OBJ_LIGHTSWITCH_ACTOR_CATEGORY   ACTORCAT_SWITCH
#define Z_OBJ_LIGHTSWITCH_OBJECT_NUMBER    0x00F7
#define Z_OBJ_LIGHTSWITCH_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_lightswitch_s z_obj_lightswitch_t;
struct z_obj_lightswitch_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjJntSph sph;
    /* 0x164 */ ClObjJntSphElem elem;
    /* 0x1A4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1A8 */ short col[3];
    /* 0x1AE */ short alpha;
    /* 0x1B0 */ short ang_pos;
    /* 0x1B2 */ short ang_spd;
    /* 0x1B4 */ signed char counter;
    /* 0x1B5 */ signed char cc_power;
    /* 0x1B6 */ signed char ptn_num;
    /* 0x1B7 */ unsigned char old_ac_bit;
    /* 0x1B8 */ void (*event_after_init)(/* ECOFF does not store param types */);
    /* 0x1BC */ signed char to_sw_flag;
    /* 0x1BD */ signed char event_stop_timer;
    /* 0x1BE */ unsigned char pad_0[2];
}; /* size = 0x01C0 */

#endif /* __Z64OVL_Z_OBJ_LIGHTSWITCH__ */
