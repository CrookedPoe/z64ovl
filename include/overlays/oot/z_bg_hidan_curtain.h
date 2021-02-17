#ifndef __Z64OVL_Z_BG_HIDAN_CURTAIN__
#define __Z64OVL_Z_BG_HIDAN_CURTAIN__

#define Z_BG_HIDAN_CURTAIN_ACTOR_NUMBER     0x0049
#define Z_BG_HIDAN_CURTAIN_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_HIDAN_CURTAIN_OBJECT_NUMBER    0x0001
#define Z_BG_HIDAN_CURTAIN_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_hidan_curtain_s z_bg_hidan_curtain_t;
struct z_bg_hidan_curtain_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ unsigned char obj_type;
    /* 0x141 */ unsigned char sw_num2;
    /* 0x142 */ unsigned char status_type;
    /* 0x143 */ unsigned char prim_alpha;
    /* 0x144 */ short timer;
    /* 0x146 */ short frame_timer;
    /* 0x148 */ ClObjPipe atoc_pipe;
}; /* size = 0x01A4 */

#endif /* __Z64OVL_Z_BG_HIDAN_CURTAIN__ */
