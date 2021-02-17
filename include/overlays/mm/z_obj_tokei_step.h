#ifndef __Z64OVL_Z_OBJ_TOKEI_STEP__
#define __Z64OVL_Z_OBJ_TOKEI_STEP__

#define Z_OBJ_TOKEI_STEP_ACTOR_NUMBER     0x01B8
#define Z_OBJ_TOKEI_STEP_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_TOKEI_STEP_OBJECT_NUMBER    0x01A4
#define Z_OBJ_TOKEI_STEP_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_MAP_LIGHT_MODE)

typedef struct z_obj_tokei_step_s z_obj_tokei_step_t;
struct z_obj_tokei_step_s {
    /* 0x0 */ xyz_t position;
    /* 0xC */ float speed_y;
    /* 0x10 */ short start_timer;
    /* 0x12 */ signed char bound_num;
    /* 0x13 */ signed char se_flag;
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ Obj_Tokei_Step_unit unit[7];
}; /* size = 0x01EC */

#endif /* __Z64OVL_Z_OBJ_TOKEI_STEP__ */
