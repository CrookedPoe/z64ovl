#ifndef __Z64OVL_Z_EN_COW__
#define __Z64OVL_Z_EN_COW__

#define Z_EN_COW_ACTOR_NUMBER     0x01C6
#define Z_EN_COW_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_COW_OBJECT_NUMBER    0x018B
#define Z_EN_COW_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_cow_s z_en_cow_t;
struct z_en_cow_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ ClObjPipe pipe_info2;
    /* 0x1D4 */ SKELETON_INFO skeleton;
    /* 0x218 */ s_xyz joint1[6];
    /* 0x23C */ s_xyz joint2[6];
    /* 0x260 */ s_xyz neck_angle;
    /* 0x266 */ unshort flag;
    /* 0x268 */ unshort timer;
    /* 0x26A */ unshort anime;
    /* 0x26C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0280 */

#endif /* __Z64OVL_Z_EN_COW__ */
