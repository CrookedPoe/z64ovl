#ifndef __Z64OVL_Z_EN_OKARINA_EFFECT__
#define __Z64OVL_Z_EN_OKARINA_EFFECT__

#define Z_EN_OKARINA_EFFECT_ACTOR_NUMBER     0x00C4
#define Z_EN_OKARINA_EFFECT_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_OKARINA_EFFECT_OBJECT_NUMBER    0x0001
#define Z_EN_OKARINA_EFFECT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_okarina_effect_s z_en_okarina_effect_t;
struct z_en_okarina_effect_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ unsigned short timer;
    /* 0x148 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_EN_OKARINA_EFFECT__ */
