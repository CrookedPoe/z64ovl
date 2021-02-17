#ifndef __Z64OVL_Z_EN_ZOB__
#define __Z64OVL_Z_EN_ZOB__

#define Z_EN_ZOB_ACTOR_NUMBER     0x0231
#define Z_EN_ZOB_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ZOB_OBJECT_NUMBER    0x0211
#define Z_EN_ZOB_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_zob_s z_en_zob_t;
struct z_en_zob_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[24];
    /* 0x218 */ s_xyz joint2[24];
    /* 0x2A8 */ ClObjPipe pipe_info;
    /* 0x2F4 */ unshort flag;
    /* 0x2F6 */ s_xyz neck_angle;
    /* 0x2FC */ s_xyz body_angle;
    /* 0x302 */ short anime;
    /* 0x304 */ short aniptn;
    /* 0x306 */ short event_list[4];
    /* 0x30E */ short call;
    /* 0x310 */ short dousa;
    /* 0x312 */ short near;
    /* 0x314 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0318 */

#endif /* __Z64OVL_Z_EN_ZOB__ */
