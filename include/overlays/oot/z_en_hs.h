#ifndef __Z64OVL_Z_EN_HS__
#define __Z64OVL_Z_EN_HS__

#define Z_EN_HS_ACTOR_NUMBER     0x013F
#define Z_EN_HS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_HS_OBJECT_NUMBER    0x0128
#define Z_EN_HS_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_hs_s z_en_hs_t;
struct z_en_hs_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ SKELETON_INFO skeleton;
    /* 0x1CC */ s_xyz joint1[16];
    /* 0x22C */ s_xyz joint2[16];
    /* 0x28C */ s_xyz neck_angle;
    /* 0x292 */ s_xyz body_angle;
    /* 0x298 */ unshort flag;
    /* 0x29A */ short timer;
    /* 0x29C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02B0 */

#endif /* __Z64OVL_Z_EN_HS__ */
