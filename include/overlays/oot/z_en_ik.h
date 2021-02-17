#ifndef __Z64OVL_Z_EN_IK__
#define __Z64OVL_Z_EN_IK__

#define Z_EN_IK_ACTOR_NUMBER     0x0113
#define Z_EN_IK_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_IK_OBJECT_NUMBER    0x0106
#define Z_EN_IK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_ik_s z_en_ik_t;
struct z_en_ik_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[30];
    /* 0x234 */ s_xyz joint2[30];
    /* 0x2E8 */ u8 mode;
    /* 0x2E9 */ u8 mode_timer;
    /* 0x2EA */ u8 action;
    /* 0x2EB */ u8 stat_flg;
    /* 0x2EC */ u8 trg_flg;
    /* 0x2ED */ unsigned char reaction_buf;
    /* 0x2EE */ signed char attack_flg;
    /* 0x2EF */ signed char attack_type;
    /* 0x2F0 */ short timer;
    /* 0x2F2 */ short arg_data2;
    /* 0x2F4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2F8 */ Break_work break_work;
    /* 0x310 */ ClObjPipe pipe_pos;
    /* 0x35C */ ClObjSwrd sword_pos;
    /* 0x3DC */ ClObjTris shield_pos;
    /* 0x3FC */ ClObjTrisElem shield_elem[2];
    /* 0x4B4 */ int blure_effect_index;
    /* 0x4B8 */ int confrontion_main_mode;
    /* 0x4BC */ int confrontion_draw_mode;
    /* 0x4C0 */ int confrontion_old_dousa;
    /* 0x4C4 */ int confrontion_axe_flag;
    /* 0x4C8 */ int nb_bank_ID;
}; /* size = 0x04DC */

#endif /* __Z64OVL_Z_EN_IK__ */
