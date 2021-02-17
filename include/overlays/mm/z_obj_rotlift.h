#ifndef __Z64OVL_Z_OBJ_ROTLIFT__
#define __Z64OVL_Z_OBJ_ROTLIFT__

#define Z_OBJ_ROTLIFT_ACTOR_NUMBER     0x0225
#define Z_OBJ_ROTLIFT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_ROTLIFT_OBJECT_NUMBER    0x0207
#define Z_OBJ_ROTLIFT_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_rotlift_s z_obj_rotlift_t;
struct z_obj_rotlift_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ACTOR* child[2];
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_OBJ_ROTLIFT__ */
