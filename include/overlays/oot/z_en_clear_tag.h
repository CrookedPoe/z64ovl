#ifndef __Z64OVL_Z_EN_CLEAR_TAG__
#define __Z64OVL_Z_EN_CLEAR_TAG__

#define Z_EN_CLEAR_TAG_ACTOR_NUMBER     0x013B
#define Z_EN_CLEAR_TAG_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_CLEAR_TAG_OBJECT_NUMBER    0x0001
#define Z_EN_CLEAR_TAG_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_clear_tag_s z_en_clear_tag_t;
struct z_en_clear_tag_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ u8 exp;
    /* 0x13D */ u8 eff_base;
    /* 0x13E */ u8 move_mode;
    /* 0x140 */ short timer[3];
    /* 0x148 */ xyz_t fly_target;
    /* 0x154 */ xyz_t turn_spd;
    /* 0x160 */ xyz_t damage_spd;
    /* 0x16C */ u8 count;
    /* 0x16D */ u8 fire;
    /* 0x170 */ float roll_angle;
    /* 0x174 */ short damage_time;
    /* 0x176 */ short delete_timer;
    /* 0x178 */ xyz_t ground_angle;
    /* 0x184 */ ClObjPipe acoc_pipe_info;
    /* 0x1D0 */ u8 demo_mode;
    /* 0x1D2 */ short camera_no;
    /* 0x1D4 */ xyz_t eye;
    /* 0x1E0 */ xyz_t way;
    /* 0x1EC */ short demo_time;
    /* 0x1F0 */ float camera_angle_Y;
}; /* size = 0x0204 */

#endif /* __Z64OVL_Z_EN_CLEAR_TAG__ */
