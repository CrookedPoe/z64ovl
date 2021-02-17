#ifndef __Z64OVL_Z_EN_ENCOUNT4__
#define __Z64OVL_Z_EN_ENCOUNT4__

#define Z_EN_ENCOUNT4_ACTOR_NUMBER     0x011B
#define Z_EN_ENCOUNT4_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_ENCOUNT4_OBJECT_NUMBER    0x0001
#define Z_EN_ENCOUNT4_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_encount4_s z_en_encount4_t;
struct z_en_encount4_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ short index;
    /* 0x14A */ short ende_bit;
    /* 0x14C */ short birth_cont;
    /* 0x14E */ short dead_count;
    /* 0x150 */ short timer;
    /* 0x154 */ ACTOR* bsbActor;
}; /* size = 0x0158 */

#endif /* __Z64OVL_Z_EN_ENCOUNT4__ */
