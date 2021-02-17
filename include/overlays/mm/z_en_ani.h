#ifndef __Z64OVL_Z_EN_ANI__
#define __Z64OVL_Z_EN_ANI__

#define Z_EN_ANI_ACTOR_NUMBER     0x00BD
#define Z_EN_ANI_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ANI_OBJECT_NUMBER    0x00C2
#define Z_EN_ANI_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ani_s z_en_ani_t;
struct z_en_ani_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ ClObjPipe pipe_info2;
    /* 0x1DC */ SKELETON_INFO skeleton;
    /* 0x220 */ s_xyz joint1[16];
    /* 0x280 */ s_xyz joint2[16];
    /* 0x2E0 */ s_xyz neck_angle;
    /* 0x2E6 */ s_xyz body_angle;
    /* 0x2EC */ unshort flag;
    /* 0x2EE */ unshort count;
    /* 0x2F0 */ short kick;
    /* 0x2F4 */ void* eyesProc;
    /* 0x2F8 */ Eye_Anime eye_anime;
    /* 0x2FC */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0300 */

#endif /* __Z64OVL_Z_EN_ANI__ */
