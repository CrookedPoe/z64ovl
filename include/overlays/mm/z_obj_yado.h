#ifndef __Z64OVL_Z_OBJ_YADO__
#define __Z64OVL_Z_OBJ_YADO__

#define Z_OBJ_YADO_ACTOR_NUMBER     0x0294
#define Z_OBJ_YADO_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_YADO_OBJECT_NUMBER    0x026E
#define Z_OBJ_YADO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_yado_s z_obj_yado_t;
struct z_obj_yado_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ unsigned char color_pat;
}; /* size = 0x0148 */

#endif /* __Z64OVL_Z_OBJ_YADO__ */
