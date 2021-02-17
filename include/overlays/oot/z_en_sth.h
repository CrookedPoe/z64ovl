#ifndef __Z64OVL_Z_EN_STH__
#define __Z64OVL_Z_EN_STH__

#define Z_EN_STH_ACTOR_NUMBER     0x0189
#define Z_EN_STH_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_STH_OBJECT_NUMBER    0x0001
#define Z_EN_STH_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_sth_s z_en_sth_t;
struct z_en_sth_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ SKELETON_INFO skeleton;
    /* 0x1CC */ s_xyz joint1[16];
    /* 0x22C */ s_xyz joint2[16];
    /* 0x28C */ unshort event_flag;
    /* 0x290 */ void (*drawPro)(/* ECOFF does not store param types */);
    /* 0x294 */ unchar bank;
    /* 0x295 */ unchar anime_bank;
    /* 0x296 */ s_xyz neck_angle;
    /* 0x29C */ s_xyz body_angle;
    /* 0x2A2 */ unshort flag;
    /* 0x2A4 */ Eye_Anime eye_anime;
    /* 0x2A8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02BC */

#endif /* __Z64OVL_Z_EN_STH__ */
