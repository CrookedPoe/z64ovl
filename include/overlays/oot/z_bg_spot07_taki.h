#ifndef __Z64OVL_Z_BG_SPOT07_TAKI__
#define __Z64OVL_Z_BG_SPOT07_TAKI__

#define Z_BG_SPOT07_TAKI_ACTOR_NUMBER     0x0120
#define Z_BG_SPOT07_TAKI_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT07_TAKI_OBJECT_NUMBER    0x0113
#define Z_BG_SPOT07_TAKI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_spot07_taki_s z_bg_spot07_taki_t;
struct z_bg_spot07_taki_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_SPOT07_TAKI__ */
