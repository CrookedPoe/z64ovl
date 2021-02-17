#ifndef __Z64OVL_Z_EN_BOOM__
#define __Z64OVL_Z_EN_BOOM__

#define Z_EN_BOOM_ACTOR_NUMBER     0x0020
#define Z_EN_BOOM_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_BOOM_OBJECT_NUMBER    0x0001
#define Z_EN_BOOM_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_boom_s z_en_boom_t;
struct z_en_boom_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjSwrd at_info;
    /* 0x1C4 */ ACTOR* target_actor;
    /* 0x1C8 */ ACTOR* catch_actor;
    /* 0x1CC */ unsigned char timer;
    /* 0x1CD */ unsigned char counter;
    /* 0x1CE */ unsigned char return_timer;
    /* 0x1CF */ signed char no_target_timer;
    /* 0x1D0 */ int blure_effect_index;
    /* 0x1D4 */ SWORD_POS_S sword_pos;
    /* 0x1F0 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01F4 */

#endif /* __Z64OVL_Z_EN_BOOM__ */
