#ifndef __Z64OVL_Z_EN_HANABI__
#define __Z64OVL_Z_EN_HANABI__

#define Z_EN_HANABI_ACTOR_NUMBER     0x01EB
#define Z_EN_HANABI_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_HANABI_OBJECT_NUMBER    0x0001
#define Z_EN_HANABI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_hanabi_s z_en_hanabi_t;
struct z_en_hanabi_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ short timer;
    /* 0x148 */ HanabiEff eff[400];
    /* 0x4608 */ Light_data light_data[3];
    /* 0x4634 */ Light_list* light_list[3];
    /* 0x4640 */ short light_timer[3];
    /* 0x4648 */ int type[3];
    /* 0x4654 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x4658 */

#endif /* __Z64OVL_Z_EN_HANABI__ */
