#ifndef __Z64OVL_Z_OBJ_HSBLOCK__
#define __Z64OVL_Z_OBJ_HSBLOCK__

#define Z_OBJ_HSBLOCK_ACTOR_NUMBER     0x0096
#define Z_OBJ_HSBLOCK_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_OBJ_HSBLOCK_OBJECT_NUMBER    0x00EC
#define Z_OBJ_HSBLOCK_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_hsblock_s z_obj_hsblock_t;
struct z_obj_hsblock_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x15C */ void (*moveProc)(/* ECOFF does not store param types */);
}; /* size = 0x0160 */

#endif /* __Z64OVL_Z_OBJ_HSBLOCK__ */
