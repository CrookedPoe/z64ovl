#ifndef __Z64OVL_Z_EN_SDA__
#define __Z64OVL_Z_EN_SDA__

#define Z_EN_SDA_ACTOR_NUMBER     0x00A1
#define Z_EN_SDA_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_SDA_OBJECT_NUMBER    0x0001
#define Z_EN_SDA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_sda_s z_en_sda_t;
struct z_en_sda_s {
    /* 0x0 */ ACTOR actor;
}; /* size = 0x0144 */

#endif /* __Z64OVL_Z_EN_SDA__ */
