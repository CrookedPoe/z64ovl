#ifndef __Z64OVL_Z_EN_TAG_OBJ__
#define __Z64OVL_Z_EN_TAG_OBJ__

#define Z_EN_TAG_OBJ_ACTOR_NUMBER     0x01E1
#define Z_EN_TAG_OBJ_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_TAG_OBJ_OBJECT_NUMBER    0x0001
#define Z_EN_TAG_OBJ_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_tag_obj_s z_en_tag_obj_t;
struct z_en_tag_obj_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjPipe pipe_info;
    /* 0x194 */ int flag;
}; /* size = 0x0198 */

#endif /* __Z64OVL_Z_EN_TAG_OBJ__ */
