#ifndef __Z64OVL_Z_BG_ICE_TURARA__
#define __Z64OVL_Z_BG_ICE_TURARA__

#define Z_BG_ICE_TURARA_ACTOR_NUMBER     0x01C7
#define Z_BG_ICE_TURARA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_ICE_TURARA_OBJECT_NUMBER    0x006B
#define Z_BG_ICE_TURARA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_ice_turara_s z_bg_ice_turara_t;
struct z_bg_ice_turara_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer;
    /* 0x15C */ ClObjPipe ac_pipe;
}; /* size = 0x01B8 */

#endif /* __Z64OVL_Z_BG_ICE_TURARA__ */
