#ifndef __Z64OVL_Z_EN_WONDER_TALK__
#define __Z64OVL_Z_EN_WONDER_TALK__

#define Z_EN_WONDER_TALK_ACTOR_NUMBER     0x0147
#define Z_EN_WONDER_TALK_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_WONDER_TALK_OBJECT_NUMBER    0x0001
#define Z_EN_WONDER_TALK_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_wonder_talk_s z_en_wonder_talk_t;
struct z_en_wonder_talk_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short type_index;
    /* 0x142 */ short check_index;
    /* 0x144 */ short save_bit;
    /* 0x146 */ short message_end_code;
    /* 0x148 */ short timer;
    /* 0x14A */ short hani_out;
    /* 0x14C */ float check_pos;
    /* 0x150 */ float eye_pos;
    /* 0x154 */ u8 next_frag;
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_EN_WONDER_TALK__ */
