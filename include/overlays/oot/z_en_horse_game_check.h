#ifndef __Z64OVL_Z_EN_HORSE_GAME_CHECK__
#define __Z64OVL_Z_EN_HORSE_GAME_CHECK__

#define Z_EN_HORSE_GAME_CHECK_ACTOR_NUMBER     0x00DB
#define Z_EN_HORSE_GAME_CHECK_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_HORSE_GAME_CHECK_OBJECT_NUMBER    0x0001
#define Z_EN_HORSE_GAME_CHECK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_horse_game_check_s z_en_horse_game_check_t;
struct z_en_horse_game_check_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ HGC_MOVE_TYPE move_index;
    /* 0x140 */ Hgc_Union u;
}; /* size = 0x01A4 */

#endif /* __Z64OVL_Z_EN_HORSE_GAME_CHECK__ */
