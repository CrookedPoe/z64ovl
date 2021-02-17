#ifndef __Z64OVL_Z_OBJ_MAKEOSHIHIKI__
#define __Z64OVL_Z_OBJ_MAKEOSHIHIKI__

#define Z_OBJ_MAKEOSHIHIKI_ACTOR_NUMBER     0x00CB
#define Z_OBJ_MAKEOSHIHIKI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_MAKEOSHIHIKI_OBJECT_NUMBER    0x0001
#define Z_OBJ_MAKEOSHIHIKI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_makeoshihiki_s z_obj_makeoshihiki_t;
struct z_obj_makeoshihiki_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ s_xyz* path_pos_0;
    /* 0x148 */ int path_num;
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_OBJ_MAKEOSHIHIKI__ */
