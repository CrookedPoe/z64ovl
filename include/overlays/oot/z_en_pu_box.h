#ifndef __Z64OVL_Z_EN_PU_BOX__
#define __Z64OVL_Z_EN_PU_BOX__

#define Z_EN_PU_BOX_ACTOR_NUMBER     0x007D
#define Z_EN_PU_BOX_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_PU_BOX_OBJECT_NUMBER    0x0082
#define Z_EN_PU_BOX_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_pu_box_s z_en_pu_box_t;
struct z_en_pu_box_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ int bg_dyna_index;
    /* 0x140 */ float powerF;
    /* 0x144 */ float powerY;
    /* 0x148 */ short power_angle_y;
    /* 0x14C */ long func_mask;
    /* 0x150 */ unsigned char status;
    /* 0x154 */ int action;
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_EN_PU_BOX__ */
