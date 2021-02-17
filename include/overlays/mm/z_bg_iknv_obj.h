#ifndef __Z64OVL_Z_BG_IKNV_OBJ__
#define __Z64OVL_Z_BG_IKNV_OBJ__

#define Z_BG_IKNV_OBJ_ACTOR_NUMBER     0x025C
#define Z_BG_IKNV_OBJ_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_IKNV_OBJ_OBJECT_NUMBER    0x0237
#define Z_BG_IKNV_OBJ_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_iknv_obj_s z_bg_iknv_obj_t;
struct z_bg_iknv_obj_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjPipe pipe_info;
    /* 0x1A8 */ void* display;
    /* 0x1AC */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_BG_IKNV_OBJ__ */
