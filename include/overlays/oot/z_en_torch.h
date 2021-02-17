#ifndef __Z64OVL_Z_EN_TORCH__
#define __Z64OVL_Z_EN_TORCH__

#define Z_EN_TORCH_ACTOR_NUMBER     0x0181
#define Z_EN_TORCH_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_TORCH_OBJECT_NUMBER    0x0001
#define Z_EN_TORCH_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_torch_s z_en_torch_t;
struct z_en_torch_s {
    /* 0x0 */ ACTOR actor;
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_EN_TORCH__ */
