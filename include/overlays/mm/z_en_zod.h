#ifndef __Z64OVL_Z_EN_ZOD__
#define __Z64OVL_Z_EN_ZOD__

#define Z_EN_ZOD_ACTOR_NUMBER     0x0238
#define Z_EN_ZOD_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ZOD_OBJECT_NUMBER    0x0216
#define Z_EN_ZOD_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_zod_s z_en_zod_t;
struct z_en_zod_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ s_xyz joint1[10];
    /* 0x180 */ s_xyz joint2[10];
    /* 0x1BC */ SKELETON_INFO skeleton;
    /* 0x200 */ ClObjPipe pipe_info;
    /* 0x24C */ Eye_Anime eye_anime;
    /* 0x250 */ s_xyz neck_angle;
    /* 0x256 */ unshort flag;
    /* 0x258 */ short anime;
    /* 0x25A */ short next;
    /* 0x25C */ short cymbal[3];
    /* 0x262 */ short cymspd[3];
    /* 0x268 */ float drm[6];
    /* 0x280 */ float drmspd[6];
    /* 0x298 */ short dousa;
    /* 0x29A */ short near;
    /* 0x29C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02A0 */

#endif /* __Z64OVL_Z_EN_ZOD__ */
