#ifndef __Z64OVL_Z_BG_BOWL_WALL__
#define __Z64OVL_Z_BG_BOWL_WALL__

#define Z_BG_BOWL_WALL_ACTOR_NUMBER     0x01BD
#define Z_BG_BOWL_WALL_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_BOWL_WALL_OBJECT_NUMBER    0x0178
#define Z_BG_BOWL_WALL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_bowl_wall_s z_bg_bowl_wall_t;
struct z_bg_bowl_wall_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ xyz_t pos;
    /* 0x164 */ xyz_t fire_pos;
    /* 0x170 */ short break_OK;
    /* 0x172 */ short timer;
    /* 0x174 */ ACTOR* Nechan_Actor;
}; /* size = 0x0188 */

#endif /* __Z64OVL_Z_BG_BOWL_WALL__ */
