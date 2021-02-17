#ifndef __Z64OVL_Z_EN_CROW__
#define __Z64OVL_Z_EN_CROW__

#define Z_EN_CROW_ACTOR_NUMBER     0x01C0
#define Z_EN_CROW_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_CROW_OBJECT_NUMBER    0x0008
#define Z_EN_CROW_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_NO_QUAKE | ACTORFLAG_ARROW_CARRY)

typedef struct z_en_crow_s z_en_crow_t;
struct z_en_crow_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ xyz_t work_pos[4];
    /* 0x16C */ SKELETON_INFO skeleton;
    /* 0x1B0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1B4 */ short timer;
    /* 0x1B6 */ short aim_angle_x;
    /* 0x1B8 */ short aim_angle_y;
    /* 0x1BA */ s_xyz joint1[9];
    /* 0x1F0 */ s_xyz joint2[9];
    /* 0x228 */ ClObjJntSph all_jntsph;
    /* 0x248 */ ClObjJntSphElem sph_elem;
}; /* size = 0x0298 */

#endif /* __Z64OVL_Z_EN_CROW__ */
