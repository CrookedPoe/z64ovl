#ifndef __Z64OVL_Z_BG_IKANA_SHUTTER__
#define __Z64OVL_Z_BG_IKANA_SHUTTER__

#define Z_BG_IKANA_SHUTTER_ACTOR_NUMBER     0x0257
#define Z_BG_IKANA_SHUTTER_ACTOR_CATEGORY   ACTORCAT_SWITCH
#define Z_BG_IKANA_SHUTTER_OBJECT_NUMBER    0x0203
#define Z_BG_IKANA_SHUTTER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_ikana_shutter_s z_bg_ikana_shutter_t;
struct z_bg_ikana_shutter_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0160 */

#endif /* __Z64OVL_Z_BG_IKANA_SHUTTER__ */
