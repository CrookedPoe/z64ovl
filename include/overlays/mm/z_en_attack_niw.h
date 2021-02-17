#ifndef __Z64OVL_Z_EN_ATTACK_NIW__
#define __Z64OVL_Z_EN_ATTACK_NIW__

#define Z_EN_ATTACK_NIW_ACTOR_NUMBER     0x00AA
#define Z_EN_ATTACK_NIW_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_ATTACK_NIW_OBJECT_NUMBER    0x000F
#define Z_EN_ATTACK_NIW_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_attack_niw_s z_en_attack_niw_t;
struct z_en_attack_niw_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[16];
    /* 0x1E8 */ s_xyz joint2[16];
    /* 0x248 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x24C */ short neck_change_timer;
    /* 0x24E */ short foot_change_timer;
    /* 0x250 */ short wing_change_timer;
    /* 0x252 */ short move_timer;
    /* 0x254 */ short runaway_timer;
    /* 0x256 */ short sound_timer;
    /* 0x258 */ short sound2_timer;
    /* 0x25A */ short no_check_timer;
    /* 0x25C */ float parts_max_angle[10];
    /* 0x284 */ short part_check_cont;
    /* 0x286 */ short neck_count;
    /* 0x288 */ short foot_count;
    /* 0x28A */ short wing_count;
    /* 0x28C */ short parts_anime_stat;
    /* 0x290 */ xyz_t move_pos;
    /* 0x29C */ xyz_t right_wing_angle;
    /* 0x2A8 */ xyz_t left_wing_angle;
    /* 0x2B4 */ float neck_angle;
    /* 0x2B8 */ float head_angle;
    /* 0x2BC */ float right_foot_angle;
    /* 0x2C0 */ float left_foot_angle;
    /* 0x2C4 */ short work_angle;
    /* 0x2C8 */ xyz_t angle_ret;
    /* 0x2D4 */ float move_speed;
    /* 0x2D8 */ float turn_speed;
    /* 0x2DC */ float eye_pos;
}; /* size = 0x02E0 */

#endif /* __Z64OVL_Z_EN_ATTACK_NIW__ */
