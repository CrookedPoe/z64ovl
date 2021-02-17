#ifndef __Z64OVL_Z_EN_HORSE_GAME_CHECK__
#define __Z64OVL_Z_EN_HORSE_GAME_CHECK__

#define Z_EN_HORSE_GAME_CHECK_ACTOR_NUMBER     0x006B
#define Z_EN_HORSE_GAME_CHECK_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_HORSE_GAME_CHECK_OBJECT_NUMBER    0x0191
#define Z_EN_HORSE_GAME_CHECK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_horse_game_check_s z_en_horse_game_check_t;
struct z_en_horse_game_check_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ HGC_MOVE_TYPE move_index;
    /* 0x160 */ int arg1;
    /* 0x164 */ Hgc_Union u;
}; /* size = 0x01B8 */

#endif /* __Z64OVL_Z_EN_HORSE_GAME_CHECK__ */
