#ifndef __Z64OVL_Z_EN_SYATEKI_CROW__
#define __Z64OVL_Z_EN_SYATEKI_CROW__

#define Z_EN_SYATEKI_CROW_ACTOR_NUMBER     0x0120
#define Z_EN_SYATEKI_CROW_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_SYATEKI_CROW_OBJECT_NUMBER    0x0006
#define Z_EN_SYATEKI_CROW_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_syateki_crow_s z_en_syateki_crow_t;
struct z_en_syateki_crow_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ xyz_t work_pos[4];
    /* 0x174 */ SKELETON_INFO skeleton;
    /* 0x1B8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1BC */ short wait_timer;
    /* 0x1BE */ short aim_angle_x;
    /* 0x1C0 */ short aim_angle_y;
    /* 0x1C2 */ short alive_flag;
    /* 0x1C4 */ short dead_counter;
    /* 0x1C8 */ s_xyz* path_ptr;
    /* 0x1CC */ short path_no;
    /* 0x1CE */ short path_max;
    /* 0x1D0 */ s_xyz joint1[9];
    /* 0x206 */ s_xyz joint2[9];
    /* 0x23C */ ClObjJntSph all_jntsph;
    /* 0x25C */ ClObjJntSphElem sph_elem;
}; /* size = 0x029C */

#endif /* __Z64OVL_Z_EN_SYATEKI_CROW__ */
