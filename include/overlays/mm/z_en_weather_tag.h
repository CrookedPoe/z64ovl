#ifndef __Z64OVL_Z_EN_WEATHER_TAG__
#define __Z64OVL_Z_EN_WEATHER_TAG__

#define Z_EN_WEATHER_TAG_ACTOR_NUMBER     0x00BC
#define Z_EN_WEATHER_TAG_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_WEATHER_TAG_OBJECT_NUMBER    0x0001
#define Z_EN_WEATHER_TAG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_weather_tag_s z_en_weather_tag_t;
struct z_en_weather_tag_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ short index;
    /* 0x14A */ short hani_index;
    /* 0x14C */ unsigned char path_num;
    /* 0x150 */ s_xyz* path_pos;
    /* 0x154 */ unsigned short speed_timer;
    /* 0x156 */ unsigned short kyori;
    /* 0x158 */ unsigned short tuyosa;
}; /* size = 0x015C */

#endif /* __Z64OVL_Z_EN_WEATHER_TAG__ */
