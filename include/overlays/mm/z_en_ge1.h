#ifndef __Z64OVL_Z_EN_GE1__
#define __Z64OVL_Z_EN_GE1__

#define Z_EN_GE1_ACTOR_NUMBER     0x009F
#define Z_EN_GE1_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GE1_OBJECT_NUMBER    0x00E6
#define Z_EN_GE1_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ge1_s z_en_ge1_t;
struct z_en_ge1_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ int (*snap_proc)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjPipe pipe_info;
    /* 0x194 */ SKELETON_INFO skeleton;
    /* 0x1D8 */ xyz_t kosi;
    /* 0x1E4 */ s_xyz joint1[16];
    /* 0x244 */ s_xyz joint2[16];
    /* 0x2A4 */ s_xyz neck_angle;
    /* 0x2AA */ s_xyz body_angle;
    /* 0x2B0 */ Path_Info* path_data;
    /* 0x2B4 */ int path_now;
    /* 0x2B8 */ Eye_Anime eye_anime;
    /* 0x2BC */ unshort flag;
    /* 0x2BE */ short anime;
    /* 0x2C0 */ short dousa;
    /* 0x2C2 */ short cry_time;
    /* 0x2C4 */ unchar hd_ptn;
    /* 0x2C8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02CC */

#endif /* __Z64OVL_Z_EN_GE1__ */
