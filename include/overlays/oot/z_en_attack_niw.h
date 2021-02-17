#ifndef __Z64OVL_Z_EN_ATTACK_NIW__
#define __Z64OVL_Z_EN_ATTACK_NIW__

#define Z_EN_ATTACK_NIW_ACTOR_NUMBER     0x0144
#define Z_EN_ATTACK_NIW_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_ATTACK_NIW_OBJECT_NUMBER    0x0013
#define Z_EN_ATTACK_NIW_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_attack_niw_s z_en_attack_niw_t;
struct z_en_attack_niw_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[16];
    /* 0x1E0 */ s_xyz joint2[16];
    /* 0x240 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x244 */ short neck_change_timer;
    /* 0x246 */ short foot_change_timer;
    /* 0x248 */ short wing_change_timer;
    /* 0x24A */ short move_timer;
    /* 0x24C */ short runaway_timer;
    /* 0x24E */ short sound_timer;
    /* 0x250 */ short sound2_timer;
    /* 0x252 */ short no_check_timer;
    /* 0x254 */ float parts_max_angle[10];
    /* 0x27C */ short part_check_cont;
    /* 0x27E */ short neck_count;
    /* 0x280 */ short foot_count;
    /* 0x282 */ short wing_count;
    /* 0x284 */ short parts_anime_stat;
    /* 0x288 */ xyz_t move_pos;
    /* 0x294 */ xyz_t right_wing_angle;
    /* 0x2A0 */ xyz_t left_wing_angle;
    /* 0x2AC */ float neck_angle;
    /* 0x2B0 */ float head_angle;
    /* 0x2B4 */ float right_foot_angle;
    /* 0x2B8 */ float left_foot_angle;
    /* 0x2BC */ short work_angle;
    /* 0x2C0 */ xyz_t angle_ret;
    /* 0x2CC */ float move_speed;
    /* 0x2D0 */ float turn_speed;
    /* 0x2D4 */ float eye_pos;
}; /* size = 0x02E8 */

#endif /* __Z64OVL_Z_EN_ATTACK_NIW__ */
