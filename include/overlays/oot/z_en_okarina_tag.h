#ifndef __Z64OVL_Z_EN_OKARINA_TAG__
#define __Z64OVL_Z_EN_OKARINA_TAG__

#define Z_EN_OKARINA_TAG_ACTOR_NUMBER     0x012E
#define Z_EN_OKARINA_TAG_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_OKARINA_TAG_OBJECT_NUMBER    0x0001
#define Z_EN_OKARINA_TAG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_okarina_tag_s z_en_okarina_tag_t;
struct z_en_okarina_tag_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short type_index;
    /* 0x142 */ short answer_index;
    /* 0x144 */ short save_bit;
    /* 0x146 */ short touch_frag;
    /* 0x148 */ short all_ok;
    /* 0x14A */ short hani_out;
    /* 0x14C */ float hani_hosei;
}; /* size = 0x0160 */

#endif /* __Z64OVL_Z_EN_OKARINA_TAG__ */
