#ifndef __Z64OVL_Z_EN_ANI__
#define __Z64OVL_Z_EN_ANI__

#define Z_EN_ANI_ACTOR_NUMBER     0x0167
#define Z_EN_ANI_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ANI_OBJECT_NUMBER    0x00EC
#define Z_EN_ANI_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ani_s z_en_ani_t;
struct z_en_ani_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ SKELETON_INFO skeleton;
    /* 0x1CC */ s_xyz joint1[16];
    /* 0x22C */ s_xyz joint2[16];
    /* 0x28C */ s_xyz neck_angle;
    /* 0x292 */ s_xyz body_angle;
    /* 0x298 */ unshort flag;
    /* 0x29A */ unshort count;
    /* 0x29C */ Eye_Anime eye_anime;
    /* 0x2A0 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02B4 */

#endif /* __Z64OVL_Z_EN_ANI__ */
