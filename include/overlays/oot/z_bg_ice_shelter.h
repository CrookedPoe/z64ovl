#ifndef __Z64OVL_Z_BG_ICE_SHELTER__
#define __Z64OVL_Z_BG_ICE_SHELTER__

#define Z_BG_ICE_SHELTER_ACTOR_NUMBER     0x00EF
#define Z_BG_ICE_SHELTER_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_ICE_SHELTER_OBJECT_NUMBER    0x006B
#define Z_BG_ICE_SHELTER_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_ice_shelter_s z_bg_ice_shelter_t;
struct z_bg_ice_shelter_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ ClObjPipe pipe_hono;
    /* 0x1A4 */ ClObjPipe pipe_shield;
    /* 0x1F0 */ short alpha;
}; /* size = 0x0204 */

#endif /* __Z64OVL_Z_BG_ICE_SHELTER__ */
