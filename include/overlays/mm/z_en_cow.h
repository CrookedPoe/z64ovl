#ifndef __Z64OVL_Z_EN_COW__
#define __Z64OVL_Z_EN_COW__

#define Z_EN_COW_ACTOR_NUMBER     0x00F3
#define Z_EN_COW_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_COW_OBJECT_NUMBER    0x0146
#define Z_EN_COW_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_cow_s z_en_cow_t;
struct z_en_cow_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ ClObjPipe pipe_info2;
    /* 0x1DC */ SKELETON_INFO skeleton;
    /* 0x220 */ s_xyz joint1[6];
    /* 0x244 */ s_xyz joint2[6];
    /* 0x268 */ s_xyz neck_angle;
    /* 0x26E */ unshort flag;
    /* 0x270 */ unshort timer;
    /* 0x272 */ unshort anime;
    /* 0x274 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0278 */

#endif /* __Z64OVL_Z_EN_COW__ */
