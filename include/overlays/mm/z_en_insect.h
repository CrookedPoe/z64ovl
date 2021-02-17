#ifndef __Z64OVL_Z_EN_INSECT__
#define __Z64OVL_Z_EN_INSECT__

#define Z_EN_INSECT_ACTOR_NUMBER     0x0016
#define Z_EN_INSECT_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_INSECT_OBJECT_NUMBER    0x0001
#define Z_EN_INSECT_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_insect_s z_en_insect_t;
struct z_en_insect_s {
    /* 0x0 */ ACTOR a;
    /* 0x144 */ ClObjJntSph sph;
    /* 0x164 */ ClObjJntSphElem elem;
    /* 0x1A4 */ SKELETON_INFO skeleton;
    /* 0x1E8 */ s_xyz joint1[24];
    /* 0x278 */ s_xyz joint2[24];
    /* 0x308 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x30C */ unsigned short status;
    /* 0x30E */ short world_angle_speed_y;
    /* 0x310 */ short shape_angle_speed_y;
    /* 0x312 */ short mode_timer;
    /* 0x314 */ short life_timer;
    /* 0x316 */ short walk_se_timer;
}; /* size = 0x0318 */

#endif /* __Z64OVL_Z_EN_INSECT__ */
