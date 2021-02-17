#ifndef __Z64OVL_Z_EN_SCOPECOIN__
#define __Z64OVL_Z_EN_SCOPECOIN__

#define Z_EN_SCOPECOIN_ACTOR_NUMBER     0x027C
#define Z_EN_SCOPECOIN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SCOPECOIN_OBJECT_NUMBER    0x0001
#define Z_EN_SCOPECOIN_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_scopecoin_s z_en_scopecoin_t;
struct z_en_scopecoin_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ short color;
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_EN_SCOPECOIN__ */
