#ifndef __Z64OVL_Z_EN_OKARINA_EFFECT__
#define __Z64OVL_Z_EN_OKARINA_EFFECT__

#define Z_EN_OKARINA_EFFECT_ACTOR_NUMBER     0x0170
#define Z_EN_OKARINA_EFFECT_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_OKARINA_EFFECT_OBJECT_NUMBER    0x0001
#define Z_EN_OKARINA_EFFECT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_okarina_effect_s z_en_okarina_effect_t;
struct z_en_okarina_effect_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ unsigned short timer;
    /* 0x140 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_EN_OKARINA_EFFECT__ */
