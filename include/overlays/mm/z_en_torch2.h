#ifndef __Z64OVL_Z_EN_TORCH2__
#define __Z64OVL_Z_EN_TORCH2__

#define Z_EN_TORCH2_ACTOR_NUMBER     0x0021
#define Z_EN_TORCH2_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_TORCH2_OBJECT_NUMBER    0x0001
#define Z_EN_TORCH2_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_torch2_s z_en_torch2_t;
struct z_en_torch2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe oc_info;
    /* 0x190 */ unsigned char flag;
    /* 0x191 */ unsigned char timer;
    /* 0x192 */ short alpha;
}; /* size = 0x0194 */

#endif /* __Z64OVL_Z_EN_TORCH2__ */
