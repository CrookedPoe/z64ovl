#ifndef __Z64OVL_Z_ITEM_ETCETERA__
#define __Z64OVL_Z_ITEM_ETCETERA__

#define Z_ITEM_ETCETERA_ACTOR_NUMBER     0x010F
#define Z_ITEM_ETCETERA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_ITEM_ETCETERA_OBJECT_NUMBER    0x0001
#define Z_ITEM_ETCETERA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_item_etcetera_s z_item_etcetera_t;
struct z_item_etcetera_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void* next_process;
    /* 0x140 */ short gi_code;
    /* 0x142 */ short rq_code;
    /* 0x144 */ unchar bank;
    /* 0x148 */ void (*drawPro)(/* ECOFF does not store param types */);
    /* 0x14C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0160 */

#endif /* __Z64OVL_Z_ITEM_ETCETERA__ */
