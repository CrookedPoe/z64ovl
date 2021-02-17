#ifndef __Z64OVL_Z_EN_RU1__
#define __Z64OVL_Z_EN_RU1__

#define Z_EN_RU1_ACTOR_NUMBER     0x00A1
#define Z_EN_RU1_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_RU1_OBJECT_NUMBER    0x00A3
#define Z_EN_RU1_FLAGS            (ACTORFLAG_TARGET | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_PRESS_SWITCH)

typedef struct z_en_ru1_s z_en_ru1_t;
struct z_en_ru1_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[17];
    /* 0x1E6 */ s_xyz joint2[17];
    /* 0x24C */ Eye_Anime eye_anime;
    /* 0x250 */ Eye_Anime mouth_anime;
    /* 0x254 */ int main_mode;
    /* 0x258 */ int draw_mode;
    /* 0x25C */ float timer;
    /* 0x260 */ float ripple_timer;
    /* 0x264 */ float turn_speed;
    /* 0x268 */ ACTOR* chActor_array[1];
    /* 0x26C */ float temp_distance;
    /* 0x270 */ int fall_flag;
    /* 0x274 */ signed char set_room_ID;
    /* 0x275 */ signed char now_room_ID;
    /* 0x276 */ signed char old_room_ID;
    /* 0x278 */ float reset_timer;
    /* 0x27C */ ACTOR* Stand_Actor;
    /* 0x280 */ int turn_mode;
    /* 0x284 */ int correct_flag;
    /* 0x288 */ int splash_sound;
    /* 0x28C */ s_xyz neck_angle_speed;
    /* 0x294 */ float alpha_timer;
    /* 0x298 */ unint alpha;
    /* 0x29C */ short turn_timer;
    /* 0x2A0 */ int turn_direction;
    /* 0x2A4 */ ClObjPipe stand_pipe;
    /* 0x2F0 */ ClObjPipe option_pipe;
    /* 0x33C */ int corect_flag;
    /* 0x340 */ int wave_flag;
    /* 0x344 */ float wave_center;
    /* 0x348 */ float wave_r;
    /* 0x34C */ short wave_angle;
    /* 0x350 */ float float_timer;
    /* 0x354 */ xyz_t temp_pos;
    /* 0x360 */ float strech_timer;
    /* 0x364 */ NpcBasicAct turn_work;
}; /* size = 0x039C */

#endif /* __Z64OVL_Z_EN_RU1__ */
