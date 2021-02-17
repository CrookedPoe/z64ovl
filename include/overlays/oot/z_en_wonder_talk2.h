#ifndef __Z64OVL_Z_EN_WONDER_TALK2__
#define __Z64OVL_Z_EN_WONDER_TALK2__

#define Z_EN_WONDER_TALK2_ACTOR_NUMBER     0x0185
#define Z_EN_WONDER_TALK2_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_WONDER_TALK2_OBJECT_NUMBER    0x0001
#define Z_EN_WONDER_TALK2_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_wonder_talk2_s z_en_wonder_talk2_t;
struct z_en_wonder_talk2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short message_index;
    /* 0x142 */ short save_bit;
    /* 0x144 */ short type_index;
    /* 0x146 */ short hani_frag;
    /* 0x148 */ short hani_out;
    /* 0x14A */ u8 check_frag;
    /* 0x14C */ float hani_pos;
    /* 0x150 */ float eye_pos;
    /* 0x154 */ xyz_t pos;
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_EN_WONDER_TALK2__ */
