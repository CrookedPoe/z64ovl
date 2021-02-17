#ifndef __Z64OVL_Z_OBJ_ETCETERA__
#define __Z64OVL_Z_OBJ_ETCETERA__

#define Z_OBJ_ETCETERA_ACTOR_NUMBER     0x0183
#define Z_OBJ_ETCETERA_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_ETCETERA_OBJECT_NUMBER    0x0001
#define Z_OBJ_ETCETERA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_etcetera_s z_obj_etcetera_t;
struct z_obj_etcetera_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ SKELETON_INFO skeleton;
    /* 0x1A0 */ ClObjPipe pipe_info;
    /* 0x1EC */ s_xyz joint1[11];
    /* 0x22E */ s_xyz joint2[11];
    /* 0x270 */ float scale_spd;
    /* 0x274 */ short timer;
    /* 0x276 */ unshort flag;
    /* 0x278 */ signed char bank;
    /* 0x27C */ void* model;
    /* 0x280 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0284 */

#endif /* __Z64OVL_Z_OBJ_ETCETERA__ */
