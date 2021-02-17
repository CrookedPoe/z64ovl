#ifndef __Z64OVL_Z_BG_MENKURI_KAITEN__
#define __Z64OVL_Z_BG_MENKURI_KAITEN__

#define Z_BG_MENKURI_KAITEN_ACTOR_NUMBER     0x0061
#define Z_BG_MENKURI_KAITEN_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MENKURI_KAITEN_OBJECT_NUMBER    0x004D
#define Z_BG_MENKURI_KAITEN_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_menkuri_kaiten_s z_bg_menkuri_kaiten_t;
struct z_bg_menkuri_kaiten_s {
    /* 0x0 */ MoveBG_Actor moveBG;
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_BG_MENKURI_KAITEN__ */
