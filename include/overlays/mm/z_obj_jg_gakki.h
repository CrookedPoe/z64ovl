#ifndef __Z64OVL_Z_OBJ_JG_GAKKI__
#define __Z64OVL_Z_OBJ_JG_GAKKI__

#define Z_OBJ_JG_GAKKI_ACTOR_NUMBER     0x0226
#define Z_OBJ_JG_GAKKI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_JG_GAKKI_OBJECT_NUMBER    0x01F8
#define Z_OBJ_JG_GAKKI_FLAGS            (ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_jg_gakki_s z_obj_jg_gakki_t;
struct z_obj_jg_gakki_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ ClObjPipe pipe_info;
}; /* size = 0x01D4 */

#endif /* __Z64OVL_Z_OBJ_JG_GAKKI__ */
