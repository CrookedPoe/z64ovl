#ifndef __Z64OVL_Z_BG_ICE_SHUTTER__
#define __Z64OVL_Z_BG_ICE_SHUTTER__

#define Z_BG_ICE_SHUTTER_ACTOR_NUMBER     0x01C8
#define Z_BG_ICE_SHUTTER_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_ICE_SHUTTER_OBJECT_NUMBER    0x006B
#define Z_BG_ICE_SHUTTER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_ice_shutter_s z_bg_ice_shutter_t;
struct z_bg_ice_shutter_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_ICE_SHUTTER__ */
