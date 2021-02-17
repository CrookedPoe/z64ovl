#ifndef __Z64OVL_Z_OBJ_COMB__
#define __Z64OVL_Z_OBJ_COMB__

#define Z_OBJ_COMB_ACTOR_NUMBER     0x00E4
#define Z_OBJ_COMB_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_COMB_OBJECT_NUMBER    0x01B9
#define Z_OBJ_COMB_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_comb_s z_obj_comb_t;
struct z_obj_comb_s {
    /* 0x0 */ ACTOR a;
    /* 0x144 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjJntSph sph;
    /* 0x168 */ ClObjJntSphElem elem;
    /* 0x1A8 */ short swing_width;
    /* 0x1AA */ short fi_1;
    /* 0x1AC */ short fi_1_add;
    /* 0x1AE */ short angle_speed_x;
    /* 0x1B0 */ short angle_speed_y;
    /* 0x1B2 */ signed char drop_timer;
    /* 0x1B3 */ signed char cc_achit_flag;
    /* 0x1B4 */ signed char mode_timer;
    /* 0x1B5 */ signed char event_flag;
    /* 0x1B6 */ signed char bikkuri_flag;
    /* 0x1B7 */ signed char stand_on_end_flag;
    /* 0x1B8 */ signed char gold_se_timer;
    /* 0x1B9 */ unsigned char pad[3];
}; /* size = 0x01BC */

#endif /* __Z64OVL_Z_OBJ_COMB__ */
