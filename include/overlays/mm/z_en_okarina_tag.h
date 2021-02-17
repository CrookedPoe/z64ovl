#ifndef __Z64OVL_Z_EN_OKARINA_TAG__
#define __Z64OVL_Z_EN_OKARINA_TAG__

#define Z_EN_OKARINA_TAG_ACTOR_NUMBER     0x0097
#define Z_EN_OKARINA_TAG_ACTOR_CATEGORY   ACTORCAT_SWITCH
#define Z_EN_OKARINA_TAG_OBJECT_NUMBER    0x0001
#define Z_EN_OKARINA_TAG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_okarina_tag_s z_en_okarina_tag_t;
struct z_en_okarina_tag_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ short index;
    /* 0x14A */ short answer;
    /* 0x14C */ int save_bit;
    /* 0x150 */ u8 hani_in;
    /* 0x154 */ float XZ_hani;
    /* 0x158 */ float Y_hani;
}; /* size = 0x015C */

#endif /* __Z64OVL_Z_EN_OKARINA_TAG__ */
