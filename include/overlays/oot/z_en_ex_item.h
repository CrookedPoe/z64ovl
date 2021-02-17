#ifndef __Z64OVL_Z_EN_EX_ITEM__
#define __Z64OVL_Z_EN_EX_ITEM__

#define Z_EN_EX_ITEM_ACTOR_NUMBER     0x0168
#define Z_EN_EX_ITEM_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_EX_ITEM_OBJECT_NUMBER    0x0001
#define Z_EN_EX_ITEM_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_ex_item_s z_en_ex_item_t;
struct z_en_ex_item_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short bank;
    /* 0x142 */ short type_index;
    /* 0x144 */ short move_index;
    /* 0x146 */ short model_num;
    /* 0x148 */ short demo_flag;
    /* 0x14A */ short demo_timer;
    /* 0x14C */ short wait_timer;
    /* 0x14E */ short demo_angle_timer;
    /* 0x150 */ short dead_frag;
    /* 0x154 */ float scale;
    /* 0x158 */ float size;
    /* 0x15C */ signed char change_bank_ID;
    /* 0x160 */ xyz_t pos;
    /* 0x16C */ Hilite_Proc H_Proc;
    /* 0x170 */ Hilite_Proc H_Proc2;
}; /* size = 0x0184 */

#endif /* __Z64OVL_Z_EN_EX_ITEM__ */
