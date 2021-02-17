#ifndef __Z64OVL_Z_OBJ_PURIFY__
#define __Z64OVL_Z_OBJ_PURIFY__

#define Z_OBJ_PURIFY_ACTOR_NUMBER     0x0186
#define Z_OBJ_PURIFY_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_PURIFY_OBJECT_NUMBER    0x0001
#define Z_OBJ_PURIFY_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_obj_purify_s z_obj_purify_t;
struct z_obj_purify_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ Obj_Purify_shape shape_num;
    /* 0x164 */ short timer;
    /* 0x166 */ short bank_ID;
    /* 0x168 */ float demo_y[2];
}; /* size = 0x0170 */

#endif /* __Z64OVL_Z_OBJ_PURIFY__ */
