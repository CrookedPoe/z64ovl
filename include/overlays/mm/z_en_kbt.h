#ifndef __Z64OVL_Z_EN_KBT__
#define __Z64OVL_Z_EN_KBT__

#define Z_EN_KBT_ACTOR_NUMBER     0x01F6
#define Z_EN_KBT_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_KBT_OBJECT_NUMBER    0x01CF
#define Z_EN_KBT_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_kbt_s z_en_kbt_t;
struct z_en_kbt_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[20];
    /* 0x200 */ s_xyz joint2[20];
    /* 0x278 */ ACTOR* kgy;
    /* 0x27C */ unshort flag;
    /* 0x27E */ unchar eye;
    /* 0x27F */ unchar kuchi;
    /* 0x280 */ short anime;
    /* 0x282 */ short aniptn;
    /* 0x284 */ short stop_wait;
    /* 0x288 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x028C */

#endif /* __Z64OVL_Z_EN_KBT__ */
