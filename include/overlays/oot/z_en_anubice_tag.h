#ifndef __Z64OVL_Z_EN_ANUBICE_TAG__
#define __Z64OVL_Z_EN_ANUBICE_TAG__

#define Z_EN_ANUBICE_TAG_ACTOR_NUMBER     0x00F6
#define Z_EN_ANUBICE_TAG_ACTOR_CATEGORY   ACTORCAT_SWITCH
#define Z_EN_ANUBICE_TAG_OBJECT_NUMBER    0x0001
#define Z_EN_ANUBICE_TAG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_anubice_tag_s z_en_anubice_tag_t;
struct z_en_anubice_tag_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ ACTOR* Actor_child;
    /* 0x144 */ float hani;
}; /* size = 0x0158 */

#endif /* __Z64OVL_Z_EN_ANUBICE_TAG__ */
