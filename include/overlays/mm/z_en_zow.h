#ifndef __Z64OVL_Z_EN_ZOW__
#define __Z64OVL_Z_EN_ZOW__

#define Z_EN_ZOW_ACTOR_NUMBER     0x0260
#define Z_EN_ZOW_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ZOW_OBJECT_NUMBER    0x00D0
#define Z_EN_ZOW_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_zow_s z_en_zow_t;
struct z_en_zow_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ ClObjPipe pipe_info;
    /* 0x1D4 */ s_xyz joint1[20];
    /* 0x24C */ s_xyz joint2[20];
    /* 0x2C4 */ Eye_Anime eye_anime;
    /* 0x2C8 */ short anime;
    /* 0x2CA */ unshort flag;
    /* 0x2CC */ short timer;
    /* 0x2CE */ short alpha;
    /* 0x2D0 */ ZowEff eff[15];
    /* 0x618 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x061C */

#endif /* __Z64OVL_Z_EN_ZOW__ */
