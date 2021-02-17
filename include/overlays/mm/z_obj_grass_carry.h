#ifndef __Z64OVL_Z_OBJ_GRASS_CARRY__
#define __Z64OVL_Z_OBJ_GRASS_CARRY__

#define Z_OBJ_GRASS_CARRY_ACTOR_NUMBER     0x010C
#define Z_OBJ_GRASS_CARRY_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_GRASS_CARRY_OBJECT_NUMBER    0x0002
#define Z_OBJ_GRASS_CARRY_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_THROW_ONLY)

typedef struct z_obj_grass_carry_s z_obj_grass_carry_t;
struct z_obj_grass_carry_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_pos;
    /* 0x190 */ Obj_Grass_actor_s* parent_actor;
    /* 0x194 */ GRASS* carry_grass;
    /* 0x198 */ short item_table_num;
    /* 0x19A */ short drop_counter;
    /* 0x19C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_OBJ_GRASS_CARRY__ */
