#ifndef __Z64OVL_Z_DEMO_GETITEM__
#define __Z64OVL_Z_DEMO_GETITEM__

#define Z_DEMO_GETITEM_ACTOR_NUMBER     0x0165
#define Z_DEMO_GETITEM_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_DEMO_GETITEM_OBJECT_NUMBER    0x0001
#define Z_DEMO_GETITEM_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_demo_getitem_s z_demo_getitem_t;
struct z_demo_getitem_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ short model;
    /* 0x146 */ unshort part;
    /* 0x148 */ signed char bank;
    /* 0x14C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_DEMO_GETITEM__ */
