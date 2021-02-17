#ifndef __Z64OVL_Z_EN_ZOV__
#define __Z64OVL_Z_EN_ZOV__

#define Z_EN_ZOV_ACTOR_NUMBER     0x0252
#define Z_EN_ZOV_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ZOV_OBJECT_NUMBER    0x022B
#define Z_EN_ZOV_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_zov_s z_en_zov_t;
struct z_en_zov_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ int (*snap_proc)(/* ECOFF does not store param types */);
    /* 0x148 */ s_xyz joint1[23];
    /* 0x1D2 */ s_xyz joint2[23];
    /* 0x25C */ SKELETON_INFO skeleton;
    /* 0x2A0 */ ClObjPipe pipe_info;
    /* 0x2EC */ Eye_Anime eye_anime;
    /* 0x2F0 */ s_xyz neck_angle;
    /* 0x2F6 */ s_xyz body_angle;
    /* 0x2FC */ xyz_t head;
    /* 0x308 */ xyz_t left;
    /* 0x314 */ xyz_t right;
    /* 0x320 */ unshort flag;
    /* 0x322 */ short anime;
    /* 0x324 */ short timer;
    /* 0x326 */ short dousa;
    /* 0x328 */ short event_list[2];
    /* 0x32C */ short call;
    /* 0x330 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0334 */

#endif /* __Z64OVL_Z_EN_ZOV__ */
