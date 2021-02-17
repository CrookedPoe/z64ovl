#ifndef __Z64OVL_Z_OBJ_KEPN_KOYA__
#define __Z64OVL_Z_OBJ_KEPN_KOYA__

#define Z_OBJ_KEPN_KOYA_ACTOR_NUMBER     0x0287
#define Z_OBJ_KEPN_KOYA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_KEPN_KOYA_OBJECT_NUMBER    0x0256
#define Z_OBJ_KEPN_KOYA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_obj_kepn_koya_s z_obj_kepn_koya_t;
struct z_obj_kepn_koya_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0160 */

#endif /* __Z64OVL_Z_OBJ_KEPN_KOYA__ */
