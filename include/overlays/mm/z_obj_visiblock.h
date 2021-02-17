#ifndef __Z64OVL_Z_OBJ_VISIBLOCK__
#define __Z64OVL_Z_OBJ_VISIBLOCK__

#define Z_OBJ_VISIBLOCK_ACTOR_NUMBER     0x01C0
#define Z_OBJ_VISIBLOCK_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_VISIBLOCK_OBJECT_NUMBER    0x01A8
#define Z_OBJ_VISIBLOCK_FLAGS            (ACTORFLAG_INVISIBLE)

typedef struct z_obj_visiblock_s z_obj_visiblock_t;
struct z_obj_visiblock_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0160 */

#endif /* __Z64OVL_Z_OBJ_VISIBLOCK__ */
