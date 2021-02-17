#ifndef __Z64OVL_Z_EN_GE1__
#define __Z64OVL_Z_EN_GE1__

#define Z_EN_GE1_ACTOR_NUMBER     0x0138
#define Z_EN_GE1_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GE1_OBJECT_NUMBER    0x0116
#define Z_EN_GE1_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ge1_s z_en_ge1_t;
struct z_en_ge1_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ SKELETON_INFO skeleton;
    /* 0x1CC */ s_xyz joint1[16];
    /* 0x22C */ s_xyz joint2[16];
    /* 0x28C */ s_xyz neck_angle;
    /* 0x292 */ s_xyz body_angle;
    /* 0x298 */ Eye_Anime eye_anime;
    /* 0x29C */ unshort flag;
    /* 0x29E */ unchar hd_ptn;
    /* 0x29F */ unchar timer;
    /* 0x2A0 */ SoftAnimTblInfo2* next_anime;
    /* 0x2A4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2A8 */ void (*anime_prc)(/* ECOFF does not store param types */);
}; /* size = 0x02BC */

#endif /* __Z64OVL_Z_EN_GE1__ */
