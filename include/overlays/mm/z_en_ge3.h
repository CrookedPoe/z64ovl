#ifndef __Z64OVL_Z_EN_GE3__
#define __Z64OVL_Z_EN_GE3__

#define Z_EN_GE3_ACTOR_NUMBER     0x00FA
#define Z_EN_GE3_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GE3_OBJECT_NUMBER    0x0130
#define Z_EN_GE3_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_ge3_s z_en_ge3_t;
struct z_en_ge3_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ int (*snap_proc)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjPipe pipe_info;
    /* 0x194 */ SKELETON_INFO skeleton;
    /* 0x1D8 */ s_xyz joint1[24];
    /* 0x268 */ s_xyz joint2[24];
    /* 0x2F8 */ Eye_Anime eye_anime;
    /* 0x2FC */ Path_Info* path_data;
    /* 0x300 */ int path_now;
    /* 0x304 */ s_xyz neck_angle;
    /* 0x30A */ s_xyz body_angle;
    /* 0x310 */ unshort flag;
    /* 0x312 */ short anime;
    /* 0x314 */ short dousa;
    /* 0x316 */ short s_timer;
    /* 0x318 */ short cry_time;
    /* 0x31C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0320 */

#endif /* __Z64OVL_Z_EN_GE3__ */
