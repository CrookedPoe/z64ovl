#ifndef __Z64OVL_Z_EN_RIVER_SOUND__
#define __Z64OVL_Z_EN_RIVER_SOUND__

#define Z_EN_RIVER_SOUND_ACTOR_NUMBER     0x003B
#define Z_EN_RIVER_SOUND_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_RIVER_SOUND_OBJECT_NUMBER    0x0001
#define Z_EN_RIVER_SOUND_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_river_sound_s z_en_river_sound_t;
struct z_en_river_sound_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ unsigned char sound_on;
    /* 0x13D */ unsigned char power_flg;
    /* 0x13E */ short path_num;
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_EN_RIVER_SOUND__ */
