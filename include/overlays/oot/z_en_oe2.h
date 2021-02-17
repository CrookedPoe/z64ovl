#ifndef __Z64OVL_Z_EN_OE2__
#define __Z64OVL_Z_EN_OE2__

#define Z_EN_OE2_ACTOR_NUMBER     0x004F
#define Z_EN_OE2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_OE2_OBJECT_NUMBER    0x0035
#define Z_EN_OE2_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_oe2_s z_en_oe2_t;
struct z_en_oe2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0194 */

#endif /* __Z64OVL_Z_EN_OE2__ */
