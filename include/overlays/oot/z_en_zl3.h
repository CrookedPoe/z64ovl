#ifndef __Z64OVL_Z_EN_ZL3__
#define __Z64OVL_Z_EN_ZL3__

#define Z_EN_ZL3_ACTOR_NUMBER     0x0179
#define Z_EN_ZL3_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ZL3_OBJECT_NUMBER    0x0060
#define Z_EN_ZL3_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_zl3_s z_en_zl3_t;
struct z_en_zl3_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[15];
    /* 0x1DA */ s_xyz joint2[15];
    /* 0x234 */ Eye_Anime eye_anime;
    /* 0x238 */ Eye_Anime mouth_anime;
    /* 0x23C */ int main_mode;
    /* 0x240 */ int draw_mode;
    /* 0x244 */ float alpha_timer;
    /* 0x248 */ unint alpha;
    /* 0x24C */ short hear_angle_speed_array[24];
    /* 0x27C */ short hear_angle_array[24];
    /* 0x2AC */ short base_hear_angle_array[24];
    /* 0x2DC */ float timer;
    /* 0x2E0 */ int old_dousa;
    /* 0x2E4 */ int medal_flag;
    /* 0x2E8 */ int cryst_flag;
    /* 0x2EC */ int hear_flag;
    /* 0x2F0 */ int light_flag;
    /* 0x2F4 */ int ocarina_flag;
    /* 0x2F8 */ int before_mode;
    /* 0x2FC */ Path_Info* path_info;
    /* 0x300 */ int path_max_point;
    /* 0x304 */ int path_point_index;
    /* 0x308 */ int anime_bank_ID;
    /* 0x30C */ xyz_t hand_pos;
    /* 0x318 */ int diappear_cryst;
    /* 0x31C */ xyz_t frighten_start_pos;
    /* 0x328 */ xyz_t frighten_end_pos;
    /* 0x334 */ unshort now_move_timer;
    /* 0x336 */ unshort total_move_time;
    /* 0x338 */ xyz_t start_pos;
    /* 0x344 */ xyz_t end_pos;
    /* 0x350 */ float jump_pos;
    /* 0x354 */ float jump_speed;
    /* 0x358 */ float jump_timer;
    /* 0x35C */ int handup_flag;
    /* 0x360 */ int opendoor_flag;
    /* 0x364 */ int handdown_flag;
    /* 0x368 */ ClObjPipe stand_pipe;
    /* 0x3B4 */ int obstacle_index;
    /* 0x3B8 */ u8 order_ganon;
    /* 0x3BC */ float surprise_timer;
    /* 0x3C0 */ short turn_angle_speedY;
    /* 0x3C4 */ ACTOR* actor_ganon2;
    /* 0x3C8 */ int obstacle_demo;
    /* 0x3CC */ float g_miru_max_anime_frame;
    /* 0x3D0 */ float ue_miru_max_anime_frame;
    /* 0x3D4 */ float to_wait_max_anime_frame;
    /* 0x3D8 */ float Z_gakuu_max_anime_frame;
    /* 0x3DC */ float Z_kenjya_max_anime_frame;
    /* 0x3E0 */ float Z_syupen_max_anime_frame;
    /* 0x3E4 */ float Z_fuuu_max_anime_frame;
    /* 0x3E8 */ NpcBasicAct turn_work;
}; /* size = 0x0420 */

#endif /* __Z64OVL_Z_EN_ZL3__ */
