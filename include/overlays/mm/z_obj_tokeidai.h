#ifndef __Z64OVL_Z_OBJ_TOKEIDAI__
#define __Z64OVL_Z_OBJ_TOKEIDAI__

#define Z_OBJ_TOKEIDAI_ACTOR_NUMBER     0x019C
#define Z_OBJ_TOKEIDAI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_TOKEIDAI_OBJECT_NUMBER    0x018C
#define Z_OBJ_TOKEIDAI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_tokeidai_s z_obj_tokeidai_t;
struct z_obj_tokeidai_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ Gfx* model;
    /* 0x148 */ Gfx* modelT;
    /* 0x14C */ short tyousin[3];
    /* 0x152 */ short tansin;
    /* 0x154 */ short add_tansin;
    /* 0x156 */ short add_tansin_time;
    /* 0x158 */ int paneru;
    /* 0x15C */ short add_paneru;
    /* 0x15E */ short transY;
    /* 0x160 */ short rotate;
    /* 0x162 */ short hekomi;
    /* 0x164 */ short bound;
    /* 0x168 */ int minute;
    /* 0x16C */ int hour;
    /* 0x170 */ unshort own_time;
    /* 0x174 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0178 */

#endif /* __Z64OVL_Z_OBJ_TOKEIDAI__ */
