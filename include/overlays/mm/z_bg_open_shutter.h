#ifndef __Z64OVL_Z_BG_OPEN_SHUTTER__
#define __Z64OVL_Z_BG_OPEN_SHUTTER__

#define Z_BG_OPEN_SHUTTER_ACTOR_NUMBER     0x01AC
#define Z_BG_OPEN_SHUTTER_ACTOR_CATEGORY   ACTORCAT_DOOR
#define Z_BG_OPEN_SHUTTER_OBJECT_NUMBER    0x019F
#define Z_BG_OPEN_SHUTTER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_open_shutter_s z_bg_open_shutter_t;
struct z_bg_open_shutter_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ short work[2];
    /* 0x160 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x164 */ int opened_timer;
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_OPEN_SHUTTER__ */
