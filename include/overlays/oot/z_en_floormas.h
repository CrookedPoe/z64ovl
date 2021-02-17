#ifndef __Z64OVL_Z_EN_FLOORMAS__
#define __Z64OVL_Z_EN_FLOORMAS__

#define Z_EN_FLOORMAS_ACTOR_NUMBER     0x008E
#define Z_EN_FLOORMAS_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_FLOORMAS_OBJECT_NUMBER    0x000B
#define Z_EN_FLOORMAS_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_floormas_s z_en_floormas_t;
struct z_en_floormas_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ short timer;
    /* 0x186 */ short work;
    /* 0x188 */ short shape_offset_z;
    /* 0x18A */ short wait_timer;
    /* 0x18C */ s_xyz joint1[25];
    /* 0x222 */ s_xyz joint2[25];
    /* 0x2B8 */ ClObjPipe all_pipe;
}; /* size = 0x0314 */

#endif /* __Z64OVL_Z_EN_FLOORMAS__ */
