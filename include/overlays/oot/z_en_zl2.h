#ifndef __Z64OVL_Z_EN_ZL2__
#define __Z64OVL_Z_EN_ZL2__

#define Z_EN_ZL2_ACTOR_NUMBER     0x004D
#define Z_EN_ZL2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ZL2_OBJECT_NUMBER    0x0060
#define Z_EN_ZL2_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_zl2_s z_en_zl2_t;
struct z_en_zl2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ Eye_Anime eye_anime;
    /* 0x184 */ Eye_Anime eye_anime2;
    /* 0x188 */ Eye_Anime mouth_anime;
    /* 0x18C */ int main_mode;
    /* 0x190 */ int draw_mode;
    /* 0x194 */ float alpha_timer;
    /* 0x198 */ unint alpha;
    /* 0x19C */ short hear_angle_speed_array[24];
    /* 0x1CC */ short hear_angle_array[24];
    /* 0x1FC */ short base_hear_angle_array[24];
    /* 0x22C */ float timer;
    /* 0x230 */ int old_dousa;
    /* 0x234 */ int medal_flag;
    /* 0x238 */ int cryst_flag;
    /* 0x23C */ int hear_flag;
    /* 0x240 */ int light_flag;
    /* 0x244 */ int ocarina_flag;
    /* 0x248 */ s_xyz neck_angle;
    /* 0x24E */ s_xyz body_angle;
    /* 0x254 */ int before_mode;
    /* 0x258 */ Path_Info* path_info;
    /* 0x25C */ int path_max_point;
    /* 0x260 */ int path_point_index;
    /* 0x264 */ int anime_bank_ID;
    /* 0x268 */ float sitamuki_max_anime_frame;
    /* 0x26C */ float face_timer;
}; /* size = 0x0280 */

#endif /* __Z64OVL_Z_EN_ZL2__ */
