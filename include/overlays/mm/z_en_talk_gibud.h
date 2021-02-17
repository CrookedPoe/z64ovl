#ifndef __Z64OVL_Z_EN_TALK_GIBUD__
#define __Z64OVL_Z_EN_TALK_GIBUD__

#define Z_EN_TALK_GIBUD_ACTOR_NUMBER     0x01DA
#define Z_EN_TALK_GIBUD_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_TALK_GIBUD_OBJECT_NUMBER    0x0075
#define Z_EN_TALK_GIBUD_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_talk_gibud_s z_en_talk_gibud_t;
struct z_en_talk_gibud_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ xyz_t joint_pos[15];
    /* 0x28C */ int joint_count;
    /* 0x290 */ int talk_type;
    /* 0x294 */ int put_item;
    /* 0x298 */ int save_bit;
    /* 0x29C */ float fire_alpha;
    /* 0x2A0 */ float fire_scale;
    /* 0x2A4 */ s_xyz joint1[26];
    /* 0x340 */ s_xyz joint2[26];
    /* 0x3DC */ short old_message_no;
    /* 0x3DE */ s_xyz neck_angle;
    /* 0x3E4 */ s_xyz body_angle;
    /* 0x3EA */ short mode_timer;
    /* 0x3EC */ short mode_step;
    /* 0x3EE */ short attack_wait_timer;
    /* 0x3F0 */ short fire_timer;
    /* 0x3F2 */ short model_type;
    /* 0x3F4 */ short talk_check_flag;
    /* 0x3F6 */ u8 effect_type;
    /* 0x3F7 */ signed char combo_counter_buff;
}; /* size = 0x03F8 */

#endif /* __Z64OVL_Z_EN_TALK_GIBUD__ */
