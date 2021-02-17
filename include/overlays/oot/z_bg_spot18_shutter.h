#ifndef __Z64OVL_Z_BG_SPOT18_SHUTTER__
#define __Z64OVL_Z_BG_SPOT18_SHUTTER__

#define Z_BG_SPOT18_SHUTTER_ACTOR_NUMBER     0x01C4
#define Z_BG_SPOT18_SHUTTER_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_SPOT18_SHUTTER_OBJECT_NUMBER    0x00AF
#define Z_BG_SPOT18_SHUTTER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_spot18_shutter_s z_bg_spot18_shutter_t;
struct z_bg_spot18_shutter_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_SPOT18_SHUTTER__ */
