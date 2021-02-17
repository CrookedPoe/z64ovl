#ifndef __Z64OVL_Z_EN_LIGHT__
#define __Z64OVL_Z_EN_LIGHT__

#define Z_EN_LIGHT_ACTOR_NUMBER     0x0008
#define Z_EN_LIGHT_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_LIGHT_OBJECT_NUMBER    0x0001
#define Z_EN_LIGHT_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_light_s z_en_light_t;
struct z_en_light_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ unsigned char count;
    /* 0x140 */ Light_list* light_list;
    /* 0x144 */ Light_data light_data;
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_EN_LIGHT__ */
