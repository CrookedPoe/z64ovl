#ifndef __Z64OVL_Z_BG_PO_EVENT__
#define __Z64OVL_Z_BG_PO_EVENT__

#define Z_BG_PO_EVENT_ACTOR_NUMBER     0x0093
#define Z_BG_PO_EVENT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_PO_EVENT_OBJECT_NUMBER    0x0099
#define Z_BG_PO_EVENT_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_po_event_s z_bg_po_event_t;
struct z_bg_po_event_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned char obj_type;
    /* 0x159 */ unsigned char kind_type;
    /* 0x15A */ signed char work;
    /* 0x15C */ short timer;
    /* 0x160 */ ClObjTris ac_tris;
    /* 0x180 */ ClObjTrisElem tris_elem[2];
}; /* size = 0x0248 */

#endif /* __Z64OVL_Z_BG_PO_EVENT__ */
