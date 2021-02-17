#ifndef __Z64OVL_Z_BG_SPOT01_FUSYA__
#define __Z64OVL_Z_BG_SPOT01_FUSYA__

#define Z_BG_SPOT01_FUSYA_ACTOR_NUMBER     0x0102
#define Z_BG_SPOT01_FUSYA_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT01_FUSYA_OBJECT_NUMBER    0x00F9
#define Z_BG_SPOT01_FUSYA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_spot01_fusya_s z_bg_spot01_fusya_t;
struct z_bg_spot01_fusya_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ int mode;
    /* 0x144 */ float rot_spd;
    /* 0x148 */ float rot_spd_tgt;
    /* 0x14C */ float rot_mov_per;
}; /* size = 0x0160 */

#endif /* __Z64OVL_Z_BG_SPOT01_FUSYA__ */
