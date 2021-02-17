#ifndef __Z64OVL_Z_EN_LIGHTBOX__
#define __Z64OVL_Z_EN_LIGHTBOX__

#define Z_EN_LIGHTBOX_ACTOR_NUMBER     0x007C
#define Z_EN_LIGHTBOX_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_LIGHTBOX_OBJECT_NUMBER    0x0081
#define Z_EN_LIGHTBOX_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_lightbox_s z_en_lightbox_t;
struct z_en_lightbox_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ int bg_dyna_index;
    /* 0x140 */ float powerF;
    /* 0x144 */ float powerY;
    /* 0x148 */ short power_angle_y;
    /* 0x14C */ long func_mask;
    /* 0x150 */ unsigned char status;
    /* 0x152 */ short mode;
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_EN_LIGHTBOX__ */
