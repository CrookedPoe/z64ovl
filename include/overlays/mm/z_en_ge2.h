#ifndef __Z64OVL_Z_EN_GE2__
#define __Z64OVL_Z_EN_GE2__

#define Z_EN_GE2_ACTOR_NUMBER     0x021E
#define Z_EN_GE2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GE2_OBJECT_NUMBER    0x012E
#define Z_EN_GE2_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ge2_s z_en_ge2_t;
struct z_en_ge2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ int (*snap_proc)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjPipe pipe_info;
    /* 0x194 */ SKELETON_INFO skeleton;
    /* 0x1D8 */ s_xyz joint1[22];
    /* 0x25C */ s_xyz joint2[22];
    /* 0x2E0 */ Eye_Anime eye_anime;
    /* 0x2E4 */ s_xyz neck_angle;
    /* 0x2EA */ s_xyz body_angle;
    /* 0x2F0 */ Path_Info* path_data;
    /* 0x2F4 */ int path_now;
    /* 0x2F8 */ unshort flag;
    /* 0x2FA */ short s_angleY;
    /* 0x2FC */ float hi_search;
    /* 0x300 */ unchar s_timer;
    /* 0x301 */ unchar warn_level;
    /* 0x302 */ short dousa;
    /* 0x304 */ short turn_timer;
    /* 0x306 */ short cry_time;
    /* 0x308 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x030C */

#endif /* __Z64OVL_Z_EN_GE2__ */
