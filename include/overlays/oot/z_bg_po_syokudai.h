#ifndef __Z64OVL_Z_BG_PO_SYOKUDAI__
#define __Z64OVL_Z_BG_PO_SYOKUDAI__

#define Z_BG_PO_SYOKUDAI_ACTOR_NUMBER     0x0105
#define Z_BG_PO_SYOKUDAI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_PO_SYOKUDAI_OBJECT_NUMBER    0x00A4
#define Z_BG_PO_SYOKUDAI_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_po_syokudai_s z_bg_po_syokudai_t;
struct z_bg_po_syokudai_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ unsigned char obj_type;
    /* 0x13E */ short frame_timer;
    /* 0x140 */ Light_list* light_list;
    /* 0x144 */ Light_data light_data;
    /* 0x154 */ ClObjPipe oc_pipe;
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_BG_PO_SYOKUDAI__ */
