#ifndef __Z64OVL_Z_EN_SEKIHI__
#define __Z64OVL_Z_EN_SEKIHI__

#define Z_EN_SEKIHI_ACTOR_NUMBER     0x015C
#define Z_EN_SEKIHI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_SEKIHI_OBJECT_NUMBER    0x0001
#define Z_EN_SEKIHI_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_sekihi_s z_en_sekihi_t;
struct z_en_sekihi_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ Gfx* model;
    /* 0x160 */ Gfx* modelT;
    /* 0x164 */ signed char bank;
    /* 0x168 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_EN_SEKIHI__ */
