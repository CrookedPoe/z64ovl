#ifndef __Z64OVL_Z_EN_ARROW__
#define __Z64OVL_Z_EN_ARROW__

#define Z_EN_ARROW_ACTOR_NUMBER     0x0016
#define Z_EN_ARROW_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_ARROW_OBJECT_NUMBER    0x0001
#define Z_EN_ARROW_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_arrow_s z_en_arrow_t;
struct z_en_arrow_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ ClObjSwrd at_info;
    /* 0x200 */ xyz_t keep_old_pos;
    /* 0x20C */ xyz_t head_pos;
    /* 0x218 */ int blure_effect_index;
    /* 0x21C */ SWORD_POS_S sword_pos;
    /* 0x238 */ unsigned char timer;
    /* 0x239 */ unsigned char flag;
    /* 0x23A */ unsigned char bg_hit_flg;
    /* 0x23B */ unsigned char demo_move;
    /* 0x23C */ ACTOR* carry_actor;
    /* 0x240 */ xyz_t carry_offset;
    /* 0x24C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0260 */

#endif /* __Z64OVL_Z_EN_ARROW__ */
