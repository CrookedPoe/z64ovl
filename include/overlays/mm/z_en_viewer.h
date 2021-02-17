#ifndef __Z64OVL_Z_EN_VIEWER__
#define __Z64OVL_Z_EN_VIEWER__

#define Z_EN_VIEWER_ACTOR_NUMBER     0x001C
#define Z_EN_VIEWER_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_VIEWER_OBJECT_NUMBER    0x0001
#define Z_EN_VIEWER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_SFX_FIXED)

typedef struct z_en_viewer_s z_en_viewer_t;
struct z_en_viewer_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ float hankei;
    /* 0x14C */ float hankei2;
    /* 0x150 */ float height;
    /* 0x154 */ unchar myno;
}; /* size = 0x0158 */

#endif /* __Z64OVL_Z_EN_VIEWER__ */
