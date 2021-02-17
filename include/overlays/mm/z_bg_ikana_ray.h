#ifndef __Z64OVL_Z_BG_IKANA_RAY__
#define __Z64OVL_Z_BG_IKANA_RAY__

#define Z_BG_IKANA_RAY_ACTOR_NUMBER     0x0256
#define Z_BG_IKANA_RAY_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_IKANA_RAY_OBJECT_NUMBER    0x0203
#define Z_BG_IKANA_RAY_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_ikana_ray_s z_bg_ikana_ray_t;
struct z_bg_ikana_ray_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe;
    /* 0x190 */ EvwAnimeInfo* evw;
    /* 0x194 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0198 */

#endif /* __Z64OVL_Z_BG_IKANA_RAY__ */
