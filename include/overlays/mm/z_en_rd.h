#ifndef __Z64OVL_Z_EN_RD__
#define __Z64OVL_Z_EN_RD__

#define Z_EN_RD_ACTOR_NUMBER     0x004C
#define Z_EN_RD_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_RD_OBJECT_NUMBER    0x0075
#define Z_EN_RD_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_rd_s z_en_rd_t;
struct z_en_rd_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ void (*mask_init)(/* ECOFF does not store param types */);
    /* 0x190 */ ClObjPipe body_pipe;
    /* 0x1DC */ xyz_t joint_pos[15];
    /* 0x290 */ int joint_count;
    /* 0x294 */ float fire_alpha;
    /* 0x298 */ float fire_scale;
    /* 0x29C */ s_xyz joint1[26];
    /* 0x338 */ s_xyz joint2[26];
    /* 0x3D4 */ short neck_timer;
    /* 0x3D6 */ short mode_timer;
    /* 0x3D8 */ short neck_angle;
    /* 0x3DA */ short west_angle;
    /* 0x3DC */ short arg_data2;
    /* 0x3DE */ short alpha_cnt;
    /* 0x3E0 */ short sun_timer;
    /* 0x3E2 */ short mask_flag;
    /* 0x3E4 */ short angle_speed;
    /* 0x3E6 */ short fire_timer;
    /* 0x3E8 */ u8 effect_type;
    /* 0x3E9 */ u8 sun_flg;
    /* 0x3EA */ u8 dam_time;
    /* 0x3EB */ u8 work0;
    /* 0x3EC */ u8 work1;
    /* 0x3ED */ u8 timer0;
    /* 0x3EE */ u8 timer1;
    /* 0x3EF */ unsigned char mode;
    /* 0x3F0 */ unsigned char reaction_buf;
    /* 0x3F1 */ signed char combo_cnt_old;
}; /* size = 0x03F4 */

#endif /* __Z64OVL_Z_EN_RD__ */
