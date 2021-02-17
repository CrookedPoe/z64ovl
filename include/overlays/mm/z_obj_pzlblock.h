#ifndef __Z64OVL_Z_OBJ_PZLBLOCK__
#define __Z64OVL_Z_OBJ_PZLBLOCK__

#define Z_OBJ_PZLBLOCK_ACTOR_NUMBER     0x0102
#define Z_OBJ_PZLBLOCK_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_PZLBLOCK_OBJECT_NUMBER    0x0001
#define Z_OBJ_PZLBLOCK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_PRESS_SWITCH)

typedef struct z_obj_pzlblock_s z_obj_pzlblock_t;
struct z_obj_pzlblock_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ int bgcheck_flag;
    /* 0x164 */ float* slip_pos_ptr;
    /* 0x168 */ float slip_aim_pos;
    /* 0x16C */ short slip_power_dir;
    /* 0x16E */ short dir_power[4];
    /* 0x176 */ short now_x;
    /* 0x178 */ short now_z;
    /* 0x17A */ signed char bankID;
}; /* size = 0x017C */

#endif /* __Z64OVL_Z_OBJ_PZLBLOCK__ */
