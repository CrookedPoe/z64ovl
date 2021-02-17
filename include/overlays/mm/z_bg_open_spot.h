#ifndef __Z64OVL_Z_BG_OPEN_SPOT__
#define __Z64OVL_Z_BG_OPEN_SPOT__

#define Z_BG_OPEN_SPOT_ACTOR_NUMBER     0x01AD
#define Z_BG_OPEN_SPOT_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_OPEN_SPOT_OBJECT_NUMBER    0x019F
#define Z_BG_OPEN_SPOT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_open_spot_s z_bg_open_spot_t;
struct z_bg_open_spot_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ EvwAnimeInfo* evw_anime_data;
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_BG_OPEN_SPOT__ */
