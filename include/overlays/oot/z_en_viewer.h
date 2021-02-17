#ifndef __Z64OVL_Z_EN_VIEWER__
#define __Z64OVL_Z_EN_VIEWER__

#define Z_EN_VIEWER_ACTOR_NUMBER     0x002A
#define Z_EN_VIEWER_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_VIEWER_OBJECT_NUMBER    0x0001
#define Z_EN_VIEWER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_viewer_s z_en_viewer_t;
struct z_en_viewer_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ Skin_AnimationWorkBuffer2 skin_awb2;
    /* 0x1CC */ signed char anime_bank_ID;
    /* 0x1CD */ unsigned char shape_type;
    /* 0x1D0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D4 */ unsigned char kosuu;
    /* 0x1D5 */ unsigned char mode;
    /* 0x1D6 */ unsigned char tenso;
    /* 0x1D8 */ GNDFIRE gndfire[20];
}; /* size = 0x05F8 */

#endif /* __Z64OVL_Z_EN_VIEWER__ */
