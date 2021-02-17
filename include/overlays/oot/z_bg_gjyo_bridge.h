#ifndef __Z64OVL_Z_BG_GJYO_BRIDGE__
#define __Z64OVL_Z_BG_GJYO_BRIDGE__

#define Z_BG_GJYO_BRIDGE_ACTOR_NUMBER     0x0148
#define Z_BG_GJYO_BRIDGE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_GJYO_BRIDGE_OBJECT_NUMBER    0x0130
#define Z_BG_GJYO_BRIDGE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_gjyo_bridge_s z_bg_gjyo_bridge_t;
struct z_bg_gjyo_bridge_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_GJYO_BRIDGE__ */
