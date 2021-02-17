#ifndef __Z64OVL_Z_BG_MENKURI_EYE__
#define __Z64OVL_Z_BG_MENKURI_EYE__

#define Z_BG_MENKURI_EYE_ACTOR_NUMBER     0x0062
#define Z_BG_MENKURI_EYE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MENKURI_EYE_OBJECT_NUMBER    0x004D
#define Z_BG_MENKURI_EYE_FLAGS            (ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_menkuri_eye_s z_bg_menkuri_eye_t;
struct z_bg_menkuri_eye_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ short timer;
    /* 0x140 */ ClObjJntSph ac_jntsph;
    /* 0x160 */ ClObjJntSphElem sph_elem;
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_BG_MENKURI_EYE__ */
