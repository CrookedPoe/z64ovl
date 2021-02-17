#ifndef __Z64OVL_Z_BG_HAKA_BOMBWALL__
#define __Z64OVL_Z_BG_HAKA_BOMBWALL__

#define Z_BG_HAKA_BOMBWALL_ACTOR_NUMBER     0x0258
#define Z_BG_HAKA_BOMBWALL_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HAKA_BOMBWALL_OBJECT_NUMBER    0x01E0
#define Z_BG_HAKA_BOMBWALL_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_haka_bombwall_s z_bg_haka_bombwall_t;
struct z_bg_haka_bombwall_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjPipe pipe;
    /* 0x1A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1AC */ signed char mode_timer;
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_BG_HAKA_BOMBWALL__ */
