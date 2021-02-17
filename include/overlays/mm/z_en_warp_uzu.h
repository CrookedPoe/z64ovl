#ifndef __Z64OVL_Z_EN_WARP_UZU__
#define __Z64OVL_Z_EN_WARP_UZU__

#define Z_EN_WARP_UZU_ACTOR_NUMBER     0x0178
#define Z_EN_WARP_UZU_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_WARP_UZU_OBJECT_NUMBER    0x0186
#define Z_EN_WARP_UZU_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_warp_uzu_s z_en_warp_uzu_t;
struct z_en_warp_uzu_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjPipe pipe_info;
}; /* size = 0x0194 */

#endif /* __Z64OVL_Z_EN_WARP_UZU__ */
