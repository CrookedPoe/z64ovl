#ifndef __Z64OVL_Z_OBJ_SOUND__
#define __Z64OVL_Z_OBJ_SOUND__

#define Z_OBJ_SOUND_ACTOR_NUMBER     0x00F0
#define Z_OBJ_SOUND_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJ_SOUND_OBJECT_NUMBER    0x0001
#define Z_OBJ_SOUND_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_sound_s z_obj_sound_t;
struct z_obj_sound_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ unsigned char move_flg;
    /* 0x145 */ unsigned char pos_flg;
    /* 0x146 */ short function_type;
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_OBJ_SOUND__ */
