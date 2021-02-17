#ifndef __Z64OVL_Z_OBJ_TAKARAYA_WALL__
#define __Z64OVL_Z_OBJ_TAKARAYA_WALL__

#define Z_OBJ_TAKARAYA_WALL_ACTOR_NUMBER     0x01BB
#define Z_OBJ_TAKARAYA_WALL_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_TAKARAYA_WALL_OBJECT_NUMBER    0x01B4
#define Z_OBJ_TAKARAYA_WALL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_takaraya_wall_s z_obj_takaraya_wall_t;
struct z_obj_takaraya_wall_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjPipe all_pipe[2];
}; /* size = 0x01E0 */

#endif /* __Z64OVL_Z_OBJ_TAKARAYA_WALL__ */
