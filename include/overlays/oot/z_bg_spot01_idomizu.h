#ifndef __Z64OVL_Z_BG_SPOT01_IDOMIZU__
#define __Z64OVL_Z_BG_SPOT01_IDOMIZU__

#define Z_BG_SPOT01_IDOMIZU_ACTOR_NUMBER     0x0104
#define Z_BG_SPOT01_IDOMIZU_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT01_IDOMIZU_OBJECT_NUMBER    0x00F9
#define Z_BG_SPOT01_IDOMIZU_FLAGS            (ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_spot01_idomizu_s z_bg_spot01_idomizu_t;
struct z_bg_spot01_idomizu_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ float tgt_pos;
    /* 0x144 */ float def_pos_y;
}; /* size = 0x0158 */

#endif /* __Z64OVL_Z_BG_SPOT01_IDOMIZU__ */
