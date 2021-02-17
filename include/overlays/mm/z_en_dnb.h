#ifndef __Z64OVL_Z_EN_DNB__
#define __Z64OVL_Z_EN_DNB__

#define Z_EN_DNB_ACTOR_NUMBER     0x0167
#define Z_EN_DNB_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_DNB_OBJECT_NUMBER    0x0189
#define Z_EN_DNB_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_INVISIBLE)

typedef struct z_en_dnb_s z_en_dnb_t;
struct z_en_dnb_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ Child_actor child[54];
    /* 0xD30 */ short timer;
    /* 0xD32 */ short count;
    /* 0xD34 */ short efftm;
    /* 0xD38 */ Dnb_Eff eff[256];
}; /* size = 0x3538 */

#endif /* __Z64OVL_Z_EN_DNB__ */
