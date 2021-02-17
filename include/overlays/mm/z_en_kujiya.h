#ifndef __Z64OVL_Z_EN_KUJIYA__
#define __Z64OVL_Z_EN_KUJIYA__

#define Z_EN_KUJIYA_ACTOR_NUMBER     0x0239
#define Z_EN_KUJIYA_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_KUJIYA_OBJECT_NUMBER    0x0263
#define Z_EN_KUJIYA_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_kujiya_s z_en_kujiya_t;
struct z_en_kujiya_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ short proc_timer;
    /* 0x14A */ short old_message_no;
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_EN_KUJIYA__ */
