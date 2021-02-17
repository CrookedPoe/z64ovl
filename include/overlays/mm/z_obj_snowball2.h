#ifndef __Z64OVL_Z_OBJ_SNOWBALL2__
#define __Z64OVL_Z_OBJ_SNOWBALL2__

#define Z_OBJ_SNOWBALL2_ACTOR_NUMBER     0x01F9
#define Z_OBJ_SNOWBALL2_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_SNOWBALL2_OBJECT_NUMBER    0x00EF
#define Z_OBJ_SNOWBALL2_FLAGS            (ACTORFLAG_THROW_ONLY)

typedef struct z_obj_snowball2_s z_obj_snowball2_t;
struct z_obj_snowball2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjJntSph sph;
    /* 0x164 */ ClObjJntSphElem elem;
    /* 0x1A4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1A8 */ short ang_spd_x;
    /* 0x1AA */ short ang_spd_y;
    /* 0x1AC */ signed char mode_timer;
    /* 0x1AD */ unsigned char bgcheck_stop_flag;
    /* 0x1AE */ signed char item_set_flag;
    /* 0x1AF */ signed char home_room_id;
    /* 0x1B0 */ unsigned char pad_0[2];
}; /* size = 0x01B4 */

#endif /* __Z64OVL_Z_OBJ_SNOWBALL2__ */
