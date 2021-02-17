#ifndef __Z64OVL_Z_BG_HIDAN_FWBIG__
#define __Z64OVL_Z_BG_HIDAN_FWBIG__

#define Z_BG_HIDAN_FWBIG_ACTOR_NUMBER     0x008D
#define Z_BG_HIDAN_FWBIG_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_HIDAN_FWBIG_OBJECT_NUMBER    0x002C
#define Z_BG_HIDAN_FWBIG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_hidan_fwbig_s z_bg_hidan_fwbig_t;
struct z_bg_hidan_fwbig_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ signed char rot_direction;
    /* 0x141 */ unsigned char keep_mode;
    /* 0x142 */ short timer;
    /* 0x144 */ ClObjPipe atoc_pipe;
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_BG_HIDAN_FWBIG__ */
