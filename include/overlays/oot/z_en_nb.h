#ifndef __Z64OVL_Z_EN_NB__
#define __Z64OVL_Z_EN_NB__

#define Z_EN_NB_ACTOR_NUMBER     0x00C3
#define Z_EN_NB_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_NB_OBJECT_NUMBER    0x00B3
#define Z_EN_NB_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_nb_s z_en_nb_t;
struct z_en_nb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[19];
    /* 0x1F2 */ s_xyz joint2[19];
    /* 0x264 */ Eye_Anime eye_anime;
    /* 0x268 */ int main_mode;
    /* 0x26C */ int draw_mode;
    /* 0x270 */ float alpha_timer;
    /* 0x274 */ unint alpha;
    /* 0x278 */ int birth_6k_flag;
    /* 0x27C */ int old_dousa;
    /* 0x280 */ float timer;
    /* 0x284 */ ClObjPipe stand_pipe;
    /* 0x2D0 */ int turn_head;
    /* 0x2D4 */ xyz_t start_pos;
    /* 0x2E0 */ xyz_t end_pos;
    /* 0x2EC */ short path_angleY;
    /* 0x2EE */ unshort move_timer;
    /* 0x2F0 */ NpcBasicAct turn_work;
}; /* size = 0x0328 */

#endif /* __Z64OVL_Z_EN_NB__ */
