#ifndef __Z64OVL_Z_EN_GAKUFU__
#define __Z64OVL_Z_EN_GAKUFU__

#define Z_EN_GAKUFU_ACTOR_NUMBER     0x01D6
#define Z_EN_GAKUFU_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_GAKUFU_OBJECT_NUMBER    0x0001
#define Z_EN_GAKUFU_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_gakufu_s z_en_gakufu_t;
struct z_en_gakufu_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ int ocarina_no;
    /* 0x148 */ unchar onpu_buff[8];
    /* 0x150 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_EN_GAKUFU__ */
