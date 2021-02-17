#ifndef __Z64OVL_Z_EN_RIVER_SOUND__
#define __Z64OVL_Z_EN_RIVER_SOUND__

#define Z_EN_RIVER_SOUND_ACTOR_NUMBER     0x0028
#define Z_EN_RIVER_SOUND_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_RIVER_SOUND_OBJECT_NUMBER    0x0001
#define Z_EN_RIVER_SOUND_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_river_sound_s z_en_river_sound_t;
struct z_en_river_sound_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ unsigned char sound_on;
    /* 0x145 */ unsigned char power_flg;
    /* 0x146 */ unsigned char path_num;
    /* 0x148 */ s_xyz* path_pos;
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_EN_RIVER_SOUND__ */
