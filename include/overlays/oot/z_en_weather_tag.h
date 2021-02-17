#ifndef __Z64OVL_Z_EN_WEATHER_TAG__
#define __Z64OVL_Z_EN_WEATHER_TAG__

#define Z_EN_WEATHER_TAG_ACTOR_NUMBER     0x0165
#define Z_EN_WEATHER_TAG_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_WEATHER_TAG_OBJECT_NUMBER    0x0001
#define Z_EN_WEATHER_TAG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_weather_tag_s z_en_weather_tag_t;
struct z_en_weather_tag_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short index;
    /* 0x142 */ short hani_index;
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_EN_WEATHER_TAG__ */
