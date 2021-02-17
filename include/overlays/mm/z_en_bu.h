#ifndef __Z64OVL_Z_EN_BU__
#define __Z64OVL_Z_EN_BU__

#define Z_EN_BU_ACTOR_NUMBER     0x0111
#define Z_EN_BU_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BU_OBJECT_NUMBER    0x0001
#define Z_EN_BU_FLAGS            (ACTORFLAG_TARGET)

typedef struct z_en_bu_s z_en_bu_t;
struct z_en_bu_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ Gfx* mdl;
}; /* size = 0x0190 */

#endif /* __Z64OVL_Z_EN_BU__ */
