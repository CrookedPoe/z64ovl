#ifndef __Z64OVL_Z_OBJ_MINE__
#define __Z64OVL_Z_OBJ_MINE__

#define Z_OBJ_MINE_ACTOR_NUMBER     0x0185
#define Z_OBJ_MINE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_MINE_OBJECT_NUMBER    0x00BB
#define Z_OBJ_MINE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_mine_s z_obj_mine_t;
struct z_obj_mine_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjJntSph sph;
    /* 0x164 */ ClObjJntSphElem elem;
    /* 0x1A4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1A8 */ float aim_speed;
    /* 0x1AC */ int last_idx;
    /* 0x1B0 */ int now_idx;
    /* 0x1B4 */ s_xyz* rail_pos_0;
    /* 0x1B8 */ ObjMineChain ch;
}; /* size = 0x13B4 */

#endif /* __Z64OVL_Z_OBJ_MINE__ */
