#ifndef __Z64OVL_Z_EN_M_FIRE1__
#define __Z64OVL_Z_EN_M_FIRE1__

#define Z_EN_M_FIRE1_ACTOR_NUMBER     0x0034
#define Z_EN_M_FIRE1_ACTOR_CATEGORY   ACTORCAT_MISC
#define Z_EN_M_FIRE1_OBJECT_NUMBER    0x0001
#define Z_EN_M_FIRE1_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_m_fire1_s z_en_m_fire1_t;
struct z_en_m_fire1_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe acoc_info;
    /* 0x190 */ float light_power;
}; /* size = 0x0194 */

#endif /* __Z64OVL_Z_EN_M_FIRE1__ */
