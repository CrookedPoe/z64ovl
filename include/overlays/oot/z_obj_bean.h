#ifndef __Z64OVL_Z_OBJ_BEAN__
#define __Z64OVL_Z_OBJ_BEAN__

#define Z_OBJ_BEAN_ACTOR_NUMBER     0x0126
#define Z_OBJ_BEAN_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_BEAN_OBJECT_NUMBER    0x011E
#define Z_OBJ_BEAN_FLAGS            (ACTORFLAG_MAP_LIGHT_MODE)

typedef struct z_obj_bean_s z_obj_bean_t;
struct z_obj_bean_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ ClObjPipe pipe;
    /* 0x1A4 */ short timer;
    /* 0x1A6 */ short ang_pmt1;
    /* 0x1A8 */ short ang_pmt2;
    /* 0x1AA */ short ang_pmt3;
    /* 0x1AC */ void (*picoProc)(/* ECOFF does not store param types */);
    /* 0x1B0 */ short pico_timer;
    /* 0x1B2 */ short pico_a;
    /* 0x1B4 */ short pico_a_goal;
    /* 0x1B6 */ short pico_a_speed;
    /* 0x1B8 */ short pico_angle_speed;
    /* 0x1BA */ short pico_angle_speed_goal;
    /* 0x1BC */ short pico_angle_accel;
    /* 0x1BE */ short pico_angle;
    /* 0x1C0 */ short pico_ground_angle;
    /* 0x1C2 */ short kuki_angle_y;
    /* 0x1C4 */ float kuki_scale_y;
    /* 0x1C8 */ xyz_t now_pos;
    /* 0x1D4 */ float fuwa_pos_r;
    /* 0x1D8 */ float pos_x_add;
    /* 0x1DC */ float pos_z_add;
    /* 0x1E0 */ short path_last_idx;
    /* 0x1E2 */ short path_now_idx;
    /* 0x1E4 */ short path_next_idx;
    /* 0x1E6 */ unsigned char speed_type;
    /* 0x1E7 */ unsigned char flag;
}; /* size = 0x01F8 */

#endif /* __Z64OVL_Z_OBJ_BEAN__ */
