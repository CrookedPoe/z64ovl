#ifndef __Z64OVL_Z_BG_SPOT15_SAKU__
#define __Z64OVL_Z_BG_SPOT15_SAKU__

#define Z_BG_SPOT15_SAKU_ACTOR_NUMBER     0x00F8
#define Z_BG_SPOT15_SAKU_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_BG_SPOT15_SAKU_OBJECT_NUMBER    0x00F0
#define Z_BG_SPOT15_SAKU_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_spot15_saku_s z_bg_spot15_saku_t;
struct z_bg_spot15_saku_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ u64 move_OK;
    /* 0x160 */ xyz_t kari_pos;
    /* 0x16C */ short timer;
}; /* size = 0x0180 */

#endif /* __Z64OVL_Z_BG_SPOT15_SAKU__ */
