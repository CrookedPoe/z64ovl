#ifndef __Z64OVL_Z_EN_WONDER_ITEM__
#define __Z64OVL_Z_EN_WONDER_ITEM__

#define Z_EN_WONDER_ITEM_ACTOR_NUMBER     0x0112
#define Z_EN_WONDER_ITEM_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_WONDER_ITEM_OBJECT_NUMBER    0x0001
#define Z_EN_WONDER_ITEM_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_wonder_item_s z_en_wonder_item_t;
struct z_en_wonder_item_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ float eye_pos;
    /* 0x144 */ short type_index;
    /* 0x146 */ short item_no;
    /* 0x148 */ short max_check_point;
    /* 0x14A */ short get_item_cont;
    /* 0x14C */ short timer;
    /* 0x14E */ short check_bit;
    /* 0x150 */ short check_point_plus;
    /* 0x152 */ short save_bit;
    /* 0x154 */ short message_end_code;
    /* 0x156 */ short check_index;
    /* 0x158 */ short HIT_check_index;
    /* 0x15A */ short timer_plus;
    /* 0x15C */ xyz_t pos;
    /* 0x168 */ u64 next_frag;
    /* 0x170 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x01D0 */

#endif /* __Z64OVL_Z_EN_WONDER_ITEM__ */
