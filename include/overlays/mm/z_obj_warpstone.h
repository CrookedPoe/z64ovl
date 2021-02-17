#ifndef __Z64OVL_Z_OBJ_WARPSTONE__
#define __Z64OVL_Z_OBJ_WARPSTONE__

#define Z_OBJ_WARPSTONE_ACTOR_NUMBER     0x0223
#define Z_OBJ_WARPSTONE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_OBJ_WARPSTONE_OBJECT_NUMBER    0x0170
#define Z_OBJ_WARPSTONE_FLAGS            (ACTORFLAG_TALK)

typedef struct z_obj_warpstone_s z_obj_warpstone_t;
struct z_obj_warpstone_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjPipe acoc_info;
    /* 0x1A8 */ unsigned char talk_flag;
    /* 0x1A9 */ unsigned char timer;
    /* 0x1AA */ unsigned char shape;
    /* 0x1AB */ unsigned char pad1;
    /* 0x1AC */ int (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_OBJ_WARPSTONE__ */
