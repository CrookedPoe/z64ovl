#ifndef __Z64OVL_Z_BG_HAKA_TOMB__
#define __Z64OVL_Z_BG_HAKA_TOMB__

#define Z_BG_HAKA_TOMB_ACTOR_NUMBER     0x0259
#define Z_BG_HAKA_TOMB_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HAKA_TOMB_OBJECT_NUMBER    0x01E0
#define Z_BG_HAKA_TOMB_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_haka_tomb_s z_bg_haka_tomb_t;
struct z_bg_haka_tomb_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ short event_id[1];
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_BG_HAKA_TOMB__ */
