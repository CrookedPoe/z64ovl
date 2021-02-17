#ifndef __Z64OVL_Z_EN_XC__
#define __Z64OVL_Z_EN_XC__

#define Z_EN_XC_ACTOR_NUMBER     0x0048
#define Z_EN_XC_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_XC_OBJECT_NUMBER    0x008A
#define Z_EN_XC_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_xc_s z_en_xc_t;
struct z_en_xc_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[17];
    /* 0x1E6 */ s_xyz joint2[17];
    /* 0x24C */ Eye_Anime eye_anime;
    /* 0x250 */ int main_mode;
    /* 0x254 */ int draw_mode;
    /* 0x258 */ float timer;
    /* 0x25C */ int old_dousa;
    /* 0x260 */ int land_flag;
    /* 0x264 */ int tryforce_mode;
    /* 0x268 */ int tryforce_pcolor[4];
    /* 0x278 */ int tryforce_ecolor[4];
    /* 0x288 */ float tryforce_scale[3];
    /* 0x294 */ short tryforce_angle;
    /* 0x298 */ int tryforce_sound;
    /* 0x29C */ int tryforce_set_sound;
    /* 0x2A0 */ xyz_t hand_pos;
    /* 0x2AC */ int set_hand_pos;
    /* 0x2B0 */ ClObjPipe stand_pipe;
    /* 0x2FC */ int turn_head;
    /* 0x300 */ ACTOR* fire_actor;
    /* 0x304 */ NpcBasicAct turn_work;
}; /* size = 0x033C */

#endif /* __Z64OVL_Z_EN_XC__ */
