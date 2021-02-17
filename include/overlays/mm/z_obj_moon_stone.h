#ifndef __Z64OVL_Z_OBJ_MOON_STONE__
#define __Z64OVL_Z_OBJ_MOON_STONE__

#define Z_OBJ_MOON_STONE_ACTOR_NUMBER     0x0283
#define Z_OBJ_MOON_STONE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_MOON_STONE_OBJECT_NUMBER    0x01B1
#define Z_OBJ_MOON_STONE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_SFX_SYSTEM)

typedef struct z_obj_moon_stone_s z_obj_moon_stone_t;
struct z_obj_moon_stone_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x194 */ short type;
}; /* size = 0x0198 */

#endif /* __Z64OVL_Z_OBJ_MOON_STONE__ */
