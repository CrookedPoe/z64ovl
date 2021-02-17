#ifndef __Z64OVL_Z_EN_RUPPECROW__
#define __Z64OVL_Z_EN_RUPPECROW__

#define Z_EN_RUPPECROW_ACTOR_NUMBER     0x0266
#define Z_EN_RUPPECROW_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_RUPPECROW_OBJECT_NUMBER    0x0006
#define Z_EN_RUPPECROW_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_ARROW_CARRY)

typedef struct z_en_ruppecrow_s z_en_ruppecrow_t;
struct z_en_ruppecrow_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ACTOR* ruppe_actor[20];
    /* 0x194 */ SKELETON_INFO skeleton;
    /* 0x1D8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1DC */ void (*subproc)(/* ECOFF does not store param types */);
    /* 0x1E0 */ s_xyz joint1[9];
    /* 0x216 */ s_xyz joint2[9];
    /* 0x24C */ Path_Info* path;
    /* 0x250 */ int path_count;
    /* 0x254 */ ClObjJntSph all_jntsph;
    /* 0x274 */ ClObjJntSphElem sph_elem;
    /* 0x2B4 */ unsigned short statf;
    /* 0x2B8 */ float speed;
    /* 0x2BC */ short count;
    /* 0x2BE */ short fuwafuwa;
    /* 0x2C0 */ short timer;
    /* 0x2C2 */ short old_ang_y;
    /* 0x2C4 */ unsigned char damage_eff_kind;
    /* 0x2C8 */ float damage_eff_alpha;
    /* 0x2CC */ float damage_eff_scale;
    /* 0x2D0 */ float damage_eff_scale2;
    /* 0x2D4 */ xyz_t shape_pos[4];
}; /* size = 0x0304 */

#endif /* __Z64OVL_Z_EN_RUPPECROW__ */
