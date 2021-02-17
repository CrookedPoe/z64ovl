#ifndef __Z64OVL_Z_EN_TANA__
#define __Z64OVL_Z_EN_TANA__

#define Z_EN_TANA_ACTOR_NUMBER     0x00C2
#define Z_EN_TANA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_TANA_OBJECT_NUMBER    0x00B2
#define Z_EN_TANA_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_tana_s z_en_tana_t;
struct z_en_tana_s {
    /* 0x0 */ ACTOR actor;
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_EN_TANA__ */
