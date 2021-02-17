#ifndef __Z64OVL_Z_EN_RAILGIBUD__
#define __Z64OVL_Z_EN_RAILGIBUD__

#define Z_EN_RAILGIBUD_ACTOR_NUMBER     0x0235
#define Z_EN_RAILGIBUD_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_RAILGIBUD_OBJECT_NUMBER    0x0075
#define Z_EN_RAILGIBUD_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_railgibud_s z_en_railgibud_t;
struct z_en_railgibud_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ xyz_t joint_pos[15];
    /* 0x28C */ int joint_count;
    /* 0x290 */ int save_bit;
    /* 0x294 */ s_xyz* path_ptr;
    /* 0x298 */ int path_no;
    /* 0x29C */ int path_max;
    /* 0x2A0 */ float fire_alpha;
    /* 0x2A4 */ float fire_scale;
    /* 0x2A8 */ s_xyz joint1[26];
    /* 0x344 */ s_xyz joint2[26];
    /* 0x3E0 */ s_xyz neck_angle;
    /* 0x3E6 */ s_xyz body_angle;
    /* 0x3EC */ short move_flag_now;
    /* 0x3EE */ short move_flag_buff;
    /* 0x3F0 */ short proc_step;
    /* 0x3F2 */ short proc_timer;
    /* 0x3F4 */ short attack_wait_timer;
    /* 0x3F6 */ short fire_timer;
    /* 0x3F8 */ short model_type;
    /* 0x3FA */ short talk_check_flag;
    /* 0x3FC */ unshort demo_parts;
    /* 0x3FE */ unshort old_dousa;
    /* 0x400 */ unshort old_message_no;
    /* 0x402 */ unshort zelda_time_buff;
    /* 0x404 */ u8 effect_type;
    /* 0x405 */ signed char combo_counter_buff;
}; /* size = 0x0408 */

#endif /* __Z64OVL_Z_EN_RAILGIBUD__ */
