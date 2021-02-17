#ifndef __Z64OVL_Z_EN_TALK__
#define __Z64OVL_Z_EN_TALK__

#define Z_EN_TALK_ACTOR_NUMBER     0x0261
#define Z_EN_TALK_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_TALK_OBJECT_NUMBER    0x0001
#define Z_EN_TALK_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_talk_s z_en_talk_t;
struct z_en_talk_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_EN_TALK__ */
