#ifndef __Z64OVL_Z_OBJ_BEAN__
#define __Z64OVL_Z_OBJ_BEAN__

#define Z_OBJ_BEAN_ACTOR_NUMBER     0x0091
#define Z_OBJ_BEAN_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_BEAN_OBJECT_NUMBER    0x00EE
#define Z_OBJ_BEAN_FLAGS            (ACTORFLAG_MAP_LIGHT_MODE)

typedef struct z_obj_bean_s z_obj_bean_t;
struct z_obj_bean_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x15C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x160 */ ClObjPipe pipe;
    /* 0x1AC */ short ang_pmt1;
    /* 0x1AE */ short ang_pmt2;
    /* 0x1B0 */ short ang_pmt3;
    /* 0x1B2 */ short mode_timer;
    /* 0x1B4 */ signed char event_stop_timer;
    /* 0x1B5 */ unsigned char pad_0[3];
    /* 0x1B8 */ float seal_scale;
    /* 0x1BC */ xyz_t now_pos;
    /* 0x1C8 */ float fuwa_pos_r;
    /* 0x1CC */ float pos_x_add;
    /* 0x1D0 */ float pos_z_add;
    /* 0x1D4 */ s_xyz* path_pos_0;
    /* 0x1D8 */ short path_last_idx;
    /* 0x1DA */ short path_now_idx;
    /* 0x1DC */ short path_next_idx;
    /* 0x1DE */ signed char speed_type;
    /* 0x1DF */ signed char seal_hint_se_timer;
    /* 0x1E0 */ signed char seal_goal_counter;
    /* 0x1E1 */ unsigned char pad_1[1];
    /* 0x1E4 */ Obj_Bean_Seal_Flag seal_flag;
    /* 0x1E8 */ void (*picoProc)(/* ECOFF does not store param types */);
    /* 0x1EC */ short pico_timer;
    /* 0x1EE */ short pico_a;
    /* 0x1F0 */ short pico_a_goal;
    /* 0x1F2 */ short pico_a_speed;
    /* 0x1F4 */ short pico_angle_speed;
    /* 0x1F6 */ short pico_angle_speed_goal;
    /* 0x1F8 */ short pico_angle_accel;
    /* 0x1FA */ short pico_angle;
    /* 0x1FC */ short pico_ground_angle;
    /* 0x1FE */ unsigned char draw_flag;
    /* 0x1FF */ unsigned char seal_connect_lift_flag;
    /* 0x200 */ unsigned char lift_transform_flag;
    /* 0x201 */ unsigned char pad_2[3];
}; /* size = 0x0204 */

#endif /* __Z64OVL_Z_OBJ_BEAN__ */
