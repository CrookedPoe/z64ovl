#ifndef __Z64OVL_Z_EN_ARROW__
#define __Z64OVL_Z_EN_ARROW__

#define Z_EN_ARROW_ACTOR_NUMBER     0x000F
#define Z_EN_ARROW_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_ARROW_OBJECT_NUMBER    0x0001
#define Z_EN_ARROW_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_arrow_s z_en_arrow_t;
struct z_en_arrow_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ En_Arrow_Status status;
    /* 0x1A8 */ ClObjSwrd at_info;
    /* 0x228 */ xyz_t keep_old_pos;
    /* 0x234 */ xyz_t head_pos;
    /* 0x240 */ int blure_effect_index;
    /* 0x244 */ SWORD_POS_S sword_pos;
    /* 0x260 */ unsigned char timer;
    /* 0x261 */ unsigned char flag;
    /* 0x262 */ unsigned char bg_hit_flg;
    /* 0x263 */ unsigned char demo_move;
    /* 0x264 */ ACTOR* carry_actor;
    /* 0x268 */ xyz_t carry_offset;
    /* 0x274 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0278 */

#endif /* __Z64OVL_Z_EN_ARROW__ */
