#ifndef __Z64OVL_Z_EN_INSECT__
#define __Z64OVL_Z_EN_INSECT__

#define Z_EN_INSECT_ACTOR_NUMBER     0x0020
#define Z_EN_INSECT_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_INSECT_OBJECT_NUMBER    0x0001
#define Z_EN_INSECT_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_insect_s z_en_insect_t;
struct z_en_insect_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ ClObjJntSph sph;
    /* 0x15C */ ClObjJntSphElem elem;
    /* 0x19C */ SKELETON_INFO skeleton;
    /* 0x1E0 */ s_xyz joint1[24];
    /* 0x270 */ s_xyz joint2[24];
    /* 0x300 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x304 */ unsigned short status;
    /* 0x306 */ short world_angle_speed_y;
    /* 0x308 */ short shape_angle_speed_y;
    /* 0x30A */ short mode_timer;
    /* 0x30C */ short life_timer;
    /* 0x30E */ short walk_se_timer;
    /* 0x310 */ ACTOR* goal_actor;
    /* 0x314 */ float goal_speed;
    /* 0x318 */ short goal_angle;
    /* 0x31A */ unsigned char hint_se_timer;
}; /* size = 0x032C */

#endif /* __Z64OVL_Z_EN_INSECT__ */
