#ifndef __Z64OVL_Z_OBJ_GRASS_UNIT__
#define __Z64OVL_Z_OBJ_GRASS_UNIT__

#define Z_OBJ_GRASS_UNIT_ACTOR_NUMBER     0x010D
#define Z_OBJ_GRASS_UNIT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_GRASS_UNIT_OBJECT_NUMBER    0x0002
#define Z_OBJ_GRASS_UNIT_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_grass_unit_s z_obj_grass_unit_t;
struct z_obj_grass_unit_s {
    /* 0x0 */ ACTOR actor;
}; /* size = 0x0144 */

#endif /* __Z64OVL_Z_OBJ_GRASS_UNIT__ */
