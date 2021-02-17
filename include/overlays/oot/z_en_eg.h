#ifndef __Z64OVL_Z_EN_EG__
#define __Z64OVL_Z_EN_EG__

#define Z_EN_EG_ACTOR_NUMBER     0x01CC
#define Z_EN_EG_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_EG_OBJECT_NUMBER    0x0060
#define Z_EN_EG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_eg_s z_en_eg_t;
struct z_en_eg_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ int main_mode;
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_EN_EG__ */
