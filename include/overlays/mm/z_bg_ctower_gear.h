#ifndef __Z64OVL_Z_BG_CTOWER_GEAR__
#define __Z64OVL_Z_BG_CTOWER_GEAR__

#define Z_BG_CTOWER_GEAR_ACTOR_NUMBER     0x01B6
#define Z_BG_CTOWER_GEAR_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_CTOWER_GEAR_OBJECT_NUMBER    0x0088
#define Z_BG_CTOWER_GEAR_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_ctower_gear_s z_bg_ctower_gear_t;
struct z_bg_ctower_gear_s {
    /* 0x0 */ MoveBG_Actor moveBG;
}; /* size = 0x015C */

#endif /* __Z64OVL_Z_BG_CTOWER_GEAR__ */
