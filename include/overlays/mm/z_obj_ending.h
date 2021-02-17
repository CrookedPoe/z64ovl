#ifndef __Z64OVL_Z_OBJ_ENDING__
#define __Z64OVL_Z_OBJ_ENDING__

#define Z_OBJ_ENDING_ACTOR_NUMBER     0x02B0
#define Z_OBJ_ENDING_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_ENDING_OBJECT_NUMBER    0x0281
#define Z_OBJ_ENDING_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_ending_s z_obj_ending_t;
struct z_obj_ending_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ Ending_obj_shape_set* shape_setP;
    /* 0x148 */ EvwAnimeInfo* evw_anime;
}; /* size = 0x014C */

#endif /* __Z64OVL_Z_OBJ_ENDING__ */
