#ifndef __Z64OVL_Z_EN_OSK__
#define __Z64OVL_Z_EN_OSK__

#define Z_EN_OSK_ACTOR_NUMBER     0x0278
#define Z_EN_OSK_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_OSK_OBJECT_NUMBER    0x0249
#define Z_EN_OSK_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_osk_s z_en_osk_t;
struct z_en_osk_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[17];
    /* 0x1EE */ s_xyz joint2[17];
    /* 0x254 */ short anime;
    /* 0x256 */ short dousa;
    /* 0x258 */ unshort part;
    /* 0x25C */ float zure;
    /* 0x260 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0264 */

#endif /* __Z64OVL_Z_EN_OSK__ */
