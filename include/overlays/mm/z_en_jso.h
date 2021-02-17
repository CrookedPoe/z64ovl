#ifndef __Z64OVL_Z_EN_JSO__
#define __Z64OVL_Z_EN_JSO__

#define Z_EN_JSO_ACTOR_NUMBER     0x0113
#define Z_EN_JSO_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_JSO_OBJECT_NUMBER    0x0155
#define Z_EN_JSO_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_jso_s z_en_jso_t;
struct z_en_jso_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[20];
    /* 0x200 */ s_xyz joint2[20];
    /* 0x278 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x27C */ short stat_mode;
    /* 0x27E */ short move_angle;
    /* 0x280 */ short move_angle_speed;
    /* 0x282 */ short move_timer;
    /* 0x284 */ short stop_timer;
    /* 0x286 */ short attack_timer;
    /* 0x288 */ short wait_timer;
    /* 0x28A */ short guard_count;
    /* 0x28C */ short rock_on_flag;
    /* 0x28E */ short attack_on_flag;
    /* 0x290 */ s_xyz ude_angle;
    /* 0x296 */ s_xyz ude_max_angle;
    /* 0x29C */ s_xyz katana_angle;
    /* 0x2A2 */ s_xyz katana_max_angle;
    /* 0x2A8 */ short special_damage_timer;
    /* 0x2AA */ short special_index;
    /* 0x2AC */ float special_scale;
    /* 0x2B0 */ float special_scale2;
    /* 0x2B4 */ xyz_t shape_pos[12];
    /* 0x344 */ short shape_count;
    /* 0x346 */ short anime_flag;
    /* 0x348 */ short talk_count;
    /* 0x34A */ short mes_data;
    /* 0x34C */ u8 blure_flag;
    /* 0x34D */ u8 shield_flag;
    /* 0x34E */ u8 sword_no_HIT;
    /* 0x350 */ float end_frame;
    /* 0x354 */ float scale;
    /* 0x358 */ float move_speed;
    /* 0x35C */ ClObjPipe acoc_pipe_info;
    /* 0x3A8 */ ClObjSwrd sword_Rpos;
    /* 0x428 */ ClObjSwrd sword_Lpos;
    /* 0x4A8 */ int blure_effect_indexR;
    /* 0x4AC */ int blure_effect_indexL;
    /* 0x4B0 */ short shadow_point;
    /* 0x4B4 */ int shadow_count;
    /* 0x4B8 */ short Event_now;
    /* 0x4BC */ u32 demo_time;
    /* 0x4C0 */ short demo_mode;
    /* 0x4C2 */ short camera_no;
    /* 0x4C4 */ short demo_count;
    /* 0x4C8 */ xyz_t eye;
    /* 0x4D4 */ xyz_t way;
    /* 0x4E0 */ xyz_t up;
    /* 0x4EC */ xyz_t eye_max;
    /* 0x4F8 */ xyz_t way_max;
    /* 0x504 */ float camera_morf;
    /* 0x508 */ float camera_morf2;
    /* 0x50C */ float persent;
    /* 0x510 */ float frame;
    /* 0x514 */ short demo_no;
    /* 0x518 */ xyz_t shadow_pos[20];
    /* 0x608 */ s_xyz shadow_rot[20];
    /* 0x680 */ s_xyz shadow[20][20];
    /* 0xFE0 */ xyz_t damage_spd;
}; /* size = 0x0FEC */

#endif /* __Z64OVL_Z_EN_JSO__ */
