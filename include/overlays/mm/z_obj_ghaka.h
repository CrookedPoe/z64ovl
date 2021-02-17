#ifndef __Z64OVL_Z_OBJ_GHAKA__
#define __Z64OVL_Z_OBJ_GHAKA__

#define Z_OBJ_GHAKA_ACTOR_NUMBER     0x01FB
#define Z_OBJ_GHAKA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_GHAKA_OBJECT_NUMBER    0x01D2
#define Z_OBJ_GHAKA_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_ghaka_s z_obj_ghaka_t;
struct z_obj_ghaka_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ float keep_player_distance;
    /* 0x164 */ s_xyz shift;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_OBJ_GHAKA__ */
