#ifndef __Z64OVL_Z_EN_VASE__
#define __Z64OVL_Z_EN_VASE__

#define Z_EN_VASE_ACTOR_NUMBER     0x0082
#define Z_EN_VASE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_VASE_OBJECT_NUMBER    0x0086
#define Z_EN_VASE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_vase_s z_en_vase_t;
struct z_en_vase_s {
    /* 0x0 */ ACTOR actor;
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_EN_VASE__ */
