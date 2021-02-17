#ifndef __Z64OVL_Z_EN_FU__
#define __Z64OVL_Z_EN_FU__

#define Z_EN_FU_ACTOR_NUMBER     0x0153
#define Z_EN_FU_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_FU_OBJECT_NUMBER    0x0133
#define Z_EN_FU_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_fu_s z_en_fu_t;
struct z_en_fu_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ SKELETON_INFO skeleton;
    /* 0x1CC */ s_xyz joint1[16];
    /* 0x22C */ s_xyz joint2[16];
    /* 0x28C */ s_xyz neck_angle;
    /* 0x292 */ s_xyz body_angle;
    /* 0x298 */ unshort flag;
    /* 0x29A */ unshort type;
    /* 0x29C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02B0 */

#endif /* __Z64OVL_Z_EN_FU__ */
