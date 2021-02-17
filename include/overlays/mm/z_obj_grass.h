#ifndef __Z64OVL_Z_OBJ_GRASS__
#define __Z64OVL_Z_OBJ_GRASS__

#define Z_OBJ_GRASS_ACTOR_NUMBER     0x010B
#define Z_OBJ_GRASS_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_GRASS_OBJECT_NUMBER    0x0002
#define Z_OBJ_GRASS_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_grass_s z_obj_grass_t;
struct z_obj_grass_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ Grass_Colony g_colony[40];
    /* 0x2944 */ short g_colony_num;
    /* 0x2946 */ unsigned char pad_0[2];
    /* 0x2948 */ Grass_Collision g_collision[20];
    /* 0x2F88 */ MtxF mtx_swing[12];
    /* 0x3288 */ short swing_angle_0;
    /* 0x328A */ short swing_angle_1;
    /* 0x328C */ short swing_angle_2;
    /* 0x328E */ short swing_angle_3;
    /* 0x3290 */ short swing_angle_4;
    /* 0x3292 */ short wait_carry_flag;
    /* 0x3294 */ GRASS* carry_area_grass;
    /* 0x3298 */ Obj_Grass_Carry_actor_s* carry_grass_actor[2];
}; /* size = 0x32A0 */

#endif /* __Z64OVL_Z_OBJ_GRASS__ */
