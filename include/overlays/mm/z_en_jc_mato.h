#ifndef __Z64OVL_Z_EN_JC_MATO__
#define __Z64OVL_Z_EN_JC_MATO__

#define Z_EN_JC_MATO_ACTOR_NUMBER     0x022F
#define Z_EN_JC_MATO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_JC_MATO_OBJECT_NUMBER    0x018E
#define Z_EN_JC_MATO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_ARROW_CARRY)

typedef struct z_en_jc_mato_s z_en_jc_mato_t;
struct z_en_jc_mato_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjSph mt_sph;
    /* 0x1A0 */ short timer;
    /* 0x1A2 */ short mt_hit;
    /* 0x1A4 */ xyz_t mt_pos;
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_EN_JC_MATO__ */
