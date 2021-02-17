#ifndef __Z64OVL_Z_BG_ICEFLOE__
#define __Z64OVL_Z_BG_ICEFLOE__

#define Z_BG_ICEFLOE_ACTOR_NUMBER     0x01A9
#define Z_BG_ICEFLOE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_ICEFLOE_OBJECT_NUMBER    0x01E7
#define Z_BG_ICEFLOE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_icefloe_s z_bg_icefloe_t;
struct z_bg_icefloe_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ int timer;
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_BG_ICEFLOE__ */
