#ifndef __Z64OVL_Z_EN_BOOM__
#define __Z64OVL_Z_EN_BOOM__

#define Z_EN_BOOM_ACTOR_NUMBER     0x0032
#define Z_EN_BOOM_ACTOR_CATEGORY   ACTORCAT_MISC
#define Z_EN_BOOM_OBJECT_NUMBER    0x0001
#define Z_EN_BOOM_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_boom_s z_en_boom_t;
struct z_en_boom_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjSwrd at_info;
    /* 0x1BC */ ACTOR* target_actor;
    /* 0x1C0 */ ACTOR* catch_actor;
    /* 0x1C4 */ unsigned char timer;
    /* 0x1C5 */ unsigned char counter;
    /* 0x1C8 */ int blure_effect_index;
    /* 0x1CC */ SWORD_POS_S sword_pos;
    /* 0x1E8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01FC */

#endif /* __Z64OVL_Z_EN_BOOM__ */
