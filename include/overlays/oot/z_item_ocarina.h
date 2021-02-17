#ifndef __Z64OVL_Z_ITEM_OCARINA__
#define __Z64OVL_Z_ITEM_OCARINA__

#define Z_ITEM_OCARINA_ACTOR_NUMBER     0x00F1
#define Z_ITEM_OCARINA_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_ITEM_OCARINA_OBJECT_NUMBER    0x00DE
#define Z_ITEM_OCARINA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_item_ocarina_s z_item_ocarina_t;
struct z_item_ocarina_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short add_angle;
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_ITEM_OCARINA__ */
