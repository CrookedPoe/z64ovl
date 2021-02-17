#ifndef __Z64OVL_Z_EN_GE3__
#define __Z64OVL_Z_EN_GE3__

#define Z_EN_GE3_ACTOR_NUMBER     0x01D0
#define Z_EN_GE3_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GE3_OBJECT_NUMBER    0x0169
#define Z_EN_GE3_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_ge3_s z_en_ge3_t;
struct z_en_ge3_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ SKELETON_INFO skeleton;
    /* 0x1CC */ s_xyz joint1[24];
    /* 0x25C */ s_xyz joint2[24];
    /* 0x2EC */ Eye_Anime eye_anime;
    /* 0x2F0 */ s_xyz neck_angle;
    /* 0x2F6 */ s_xyz body_angle;
    /* 0x2FC */ unshort flag;
    /* 0x300 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0314 */

#endif /* __Z64OVL_Z_EN_GE3__ */
