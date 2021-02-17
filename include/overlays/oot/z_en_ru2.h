#ifndef __Z64OVL_Z_EN_RU2__
#define __Z64OVL_Z_EN_RU2__

#define Z_EN_RU2_ACTOR_NUMBER     0x00D2
#define Z_EN_RU2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_RU2_OBJECT_NUMBER    0x00CA
#define Z_EN_RU2_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_ru2_s z_en_ru2_t;
struct z_en_ru2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[23];
    /* 0x20A */ s_xyz joint2[23];
    /* 0x294 */ Eye_Anime eye_anime;
    /* 0x298 */ int main_mode;
    /* 0x29C */ int draw_mode;
    /* 0x2A0 */ float alpha_timer;
    /* 0x2A4 */ unint alpha;
    /* 0x2A8 */ int birth_6k_flag;
    /* 0x2AC */ int old_dousa;
    /* 0x2B0 */ unshort move_timer;
    /* 0x2B2 */ u8 msgc;
    /* 0x2B3 */ u8 pmsg;
    /* 0x2B4 */ float demo_timer;
    /* 0x2B8 */ ClObjPipe stand_pipe;
}; /* size = 0x0314 */

#endif /* __Z64OVL_Z_EN_RU2__ */
