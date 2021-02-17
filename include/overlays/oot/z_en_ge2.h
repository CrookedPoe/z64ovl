#ifndef __Z64OVL_Z_EN_GE2__
#define __Z64OVL_Z_EN_GE2__

#define Z_EN_GE2_ACTOR_NUMBER     0x0186
#define Z_EN_GE2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GE2_OBJECT_NUMBER    0x0167
#define Z_EN_GE2_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_ge2_s z_en_ge2_t;
struct z_en_ge2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ SKELETON_INFO skeleton;
    /* 0x1CC */ s_xyz joint1[22];
    /* 0x250 */ s_xyz joint2[22];
    /* 0x2D4 */ Eye_Anime eye_anime;
    /* 0x2D8 */ s_xyz neck_angle;
    /* 0x2DE */ s_xyz body_angle;
    /* 0x2E4 */ unshort flag;
    /* 0x2E6 */ short angleY;
    /* 0x2E8 */ short s_angleY;
    /* 0x2EC */ float hi_search;
    /* 0x2F0 */ unshort w_timer_max;
    /* 0x2F2 */ unshort w_timer;
    /* 0x2F4 */ unchar hd_ptn;
    /* 0x2F5 */ unchar s_timer;
    /* 0x2F6 */ unchar warn_level;
    /* 0x2F8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x030C */

#endif /* __Z64OVL_Z_EN_GE2__ */
