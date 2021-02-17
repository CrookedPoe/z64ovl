#ifndef __Z64OVL_Z_BOSS_03__
#define __Z64OVL_Z_BOSS_03__

#define Z_BOSS_03_ACTOR_NUMBER     0x012B
#define Z_BOSS_03_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_03_OBJECT_NUMBER    0x015C
#define Z_BOSS_03_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_03_s z_boss_03_t;
struct z_boss_03_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ float offsetY;
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ s_xyz joint1[15];
    /* 0x1E6 */ s_xyz joint2[15];
    /* 0x240 */ short count;
    /* 0x242 */ u8 move_mode;
    /* 0x244 */ int swim_p;
    /* 0x248 */ int swim_way;
    /* 0x24C */ short timer[3];
    /* 0x252 */ s8 fish_count;
    /* 0x253 */ u8 fish_sw;
    /* 0x254 */ short bubble_max;
    /* 0x258 */ float water_y;
    /* 0x25C */ short damage;
    /* 0x25E */ short damage_flash;
    /* 0x260 */ float anime_angleY;
    /* 0x264 */ u8 swim_mode;
    /* 0x268 */ xyz_t target;
    /* 0x274 */ short turn_spd;
    /* 0x276 */ short turn_spd_S;
    /* 0x278 */ float base_speed;
    /* 0x27C */ float base_speed_ad;
    /* 0x280 */ short sibuki_time;
    /* 0x284 */ xyz_t sibuki_pos;
    /* 0x290 */ u8 hire_sw;
    /* 0x294 */ float hire_countL;
    /* 0x298 */ float hire_countR;
    /* 0x29C */ short hire_angleL;
    /* 0x29E */ short hire_angleR;
    /* 0x2A0 */ short tail_angle;
    /* 0x2A2 */ s_xyz mouse_angle;
    /* 0x2A8 */ short mouse_open_angle;
    /* 0x2AC */ xyz_t mouse_pos;
    /* 0x2B8 */ float eat_power;
    /* 0x2BC */ u8 move_flag;
    /* 0x2BD */ u8 eat_flag;
    /* 0x2BE */ short move_angle;
    /* 0x2C0 */ float move_range;
    /* 0x2C4 */ float mouse_in;
    /* 0x2C8 */ xyz_t player_old_pos;
    /* 0x2D4 */ u8 player_sibuki_time;
    /* 0x2D5 */ u8 disp_sw;
    /* 0x2D6 */ short demo_jump_xa;
    /* 0x2D8 */ short demo_jump_ya;
    /* 0x2DA */ short demo_jump_za;
    /* 0x2DC */ xyz_t shape_pos[6];
    /* 0x324 */ short fish_timer;
    /* 0x328 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x32C */ ClObjJntSph head_jntsph_info;
    /* 0x34C */ ClObjJntSphElem head_jntsph_elem[2];
    /* 0x3CC */ ClObjJntSph body_jntsph_info;
    /* 0x3EC */ ClObjJntSphElem body_jntsph_elem[5];
    /* 0x52C */ float end_frame;
    /* 0x530 */ u32 demo_time;
    /* 0x534 */ short demo_mode;
    /* 0x536 */ short camera_no;
    /* 0x538 */ xyz_t eye;
    /* 0x544 */ xyz_t way;
    /* 0x550 */ xyz_t eye_target;
    /* 0x55C */ xyz_t way_target;
    /* 0x568 */ float eye_angle_Y;
    /* 0x56C */ float eye_angle_YS;
    /* 0x570 */ float camera_morf;
    /* 0x574 */ float camera_morf_spd;
    /* 0x578 */ float fovy;
}; /* size = 0x057C */

#endif /* __Z64OVL_Z_BOSS_03__ */
