#ifndef __Z64OVL_Z_ITEM_INBOX__
#define __Z64OVL_Z_ITEM_INBOX__

#define Z_ITEM_INBOX_ACTOR_NUMBER     0x0137
#define Z_ITEM_INBOX_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_ITEM_INBOX_OBJECT_NUMBER    0x0001
#define Z_ITEM_INBOX_FLAGS            (ACTORFLAG_TALK)

typedef struct z_item_inbox_s z_item_inbox_t;
struct z_item_inbox_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_ITEM_INBOX__ */
