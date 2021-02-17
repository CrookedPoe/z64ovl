#ifndef __Z64OVL_Z_OBJ_TREE__
#define __Z64OVL_Z_OBJ_TREE__

#define Z_OBJ_TREE_ACTOR_NUMBER     0x0229
#define Z_OBJ_TREE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_TREE_OBJECT_NUMBER    0x020D
#define Z_OBJ_TREE_FLAGS            (ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_obj_tree_s z_obj_tree_t;
struct z_obj_tree_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjPipe pipe_info;
    /* 0x1A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1AC */ float angle_max;
    /* 0x1B0 */ short angle_zx;
    /* 0x1B2 */ short angle_speed_zx;
    /* 0x1B4 */ short proc_timer;
}; /* size = 0x01B8 */

#endif /* __Z64OVL_Z_OBJ_TREE__ */
