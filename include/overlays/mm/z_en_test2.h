#ifndef __Z64OVL_Z_EN_TEST2__
#define __Z64OVL_Z_EN_TEST2__

#define Z_EN_TEST2_ACTOR_NUMBER     0x0158
#define Z_EN_TEST2_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_TEST2_OBJECT_NUMBER    0x0001
#define Z_EN_TEST2_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_INVISIBLE)

typedef struct z_en_test2_s z_en_test2_t;
struct z_en_test2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ EvwAnimeInfo* evw_anime;
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_EN_TEST2__ */
