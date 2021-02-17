#ifndef __Z64OVL_Z_EN_G_SWITCH__
#define __Z64OVL_Z_EN_G_SWITCH__

#define Z_EN_G_SWITCH_ACTOR_NUMBER     0x0117
#define Z_EN_G_SWITCH_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_G_SWITCH_OBJECT_NUMBER    0x0001
#define Z_EN_G_SWITCH_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_g_switch_s z_en_g_switch_t;
struct z_en_g_switch_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short type_index;
    /* 0x142 */ short max_cont;
    /* 0x144 */ short save_bit;
    /* 0x146 */ short change_timer;
    /* 0x148 */ short change_cont;
    /* 0x14A */ short display_frag;
    /* 0x14C */ short break_cont;
    /* 0x14E */ short bank;
    /* 0x150 */ short index;
    /* 0x152 */ short wait_timer;
    /* 0x154 */ short move_timer;
    /* 0x156 */ short special_stat;
    /* 0x158 */ short mode_stat;
    /* 0x15A */ short sound_cont;
    /* 0x15C */ xyz_t srch_pos;
    /* 0x168 */ signed char change_bank_ID;
    /* 0x16C */ ClObjPipe acoc_pipe_info;
    /* 0x1B8 */ G_SWITCH_EFF g_switch_eff[100];
}; /* size = 0x12F8 */

#endif /* __Z64OVL_Z_EN_G_SWITCH__ */
