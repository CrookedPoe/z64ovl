#ifndef __Z64OVL_Z_EN_WALL_TUBO__
#define __Z64OVL_Z_EN_WALL_TUBO__

#define Z_EN_WALL_TUBO_ACTOR_NUMBER     0x01BE
#define Z_EN_WALL_TUBO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_WALL_TUBO_OBJECT_NUMBER    0x0001
#define Z_EN_WALL_TUBO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_wall_tubo_s z_en_wall_tubo_t;
struct z_en_wall_tubo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short timer;
    /* 0x144 */ xyz_t fire_pos;
    /* 0x150 */ ACTOR* Tein_Actor;
    /* 0x154 */ xyz_t pos;
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_EN_WALL_TUBO__ */
