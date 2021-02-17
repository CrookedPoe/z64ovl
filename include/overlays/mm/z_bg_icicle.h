#ifndef __Z64OVL_Z_BG_ICICLE__
#define __Z64OVL_Z_BG_ICICLE__

#define Z_BG_ICICLE_ACTOR_NUMBER     0x011F
#define Z_BG_ICICLE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_ICICLE_OBJECT_NUMBER    0x0157
#define Z_BG_ICICLE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_icicle_s z_bg_icicle_t;
struct z_bg_icicle_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ unsigned char item_num;
    /* 0x161 */ unsigned char item_save_num;
    /* 0x162 */ short timer;
    /* 0x164 */ ClObjPipe ac_pipe;
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_BG_ICICLE__ */
