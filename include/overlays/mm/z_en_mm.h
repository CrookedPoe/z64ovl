#ifndef __Z64OVL_Z_EN_MM__
#define __Z64OVL_Z_EN_MM__

#define Z_EN_MM_ACTOR_NUMBER     0x00B9
#define Z_EN_MM_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_MM_OBJECT_NUMBER    0x0001
#define Z_EN_MM_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_mm_s z_en_mm_t;
struct z_en_mm_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe acoc_info;
    /* 0x190 */ short spin_angle_x;
    /* 0x194 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0198 */

#endif /* __Z64OVL_Z_EN_MM__ */
