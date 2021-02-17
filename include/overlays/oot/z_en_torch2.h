#ifndef __Z64OVL_Z_EN_TORCH2__
#define __Z64OVL_Z_EN_TORCH2__

#define Z_EN_TORCH2_ACTOR_NUMBER     0x0033
#define Z_EN_TORCH2_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_TORCH2_OBJECT_NUMBER    0x0020
#define Z_EN_TORCH2_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_torch2_s z_en_torch2_t;
struct z_en_torch2_s {
    /* 0x0 */ PLAYER_ACTOR player;
}; /* size = 0x0A94 */

#endif /* __Z64OVL_Z_EN_TORCH2__ */
