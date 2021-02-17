#ifndef __Z64OVL_Z_EN_WARP_TAG__
#define __Z64OVL_Z_EN_WARP_TAG__

#define Z_EN_WARP_TAG_ACTOR_NUMBER     0x0116
#define Z_EN_WARP_TAG_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_WARP_TAG_OBJECT_NUMBER    0x0001
#define Z_EN_WARP_TAG_FLAGS            (ACTORFLAG_TARGET | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_warp_tag_s z_en_warp_tag_t;
struct z_en_warp_tag_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ signed char change_bank_ID;
    /* 0x15D */ unsigned char pad1;
    /* 0x15E */ short counter;
    /* 0x160 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_EN_WARP_TAG__ */
