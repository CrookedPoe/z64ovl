#ifndef __Z64OVL_Z_EN_HIT_TAG__
#define __Z64OVL_Z_EN_HIT_TAG__

#define Z_EN_HIT_TAG_ACTOR_NUMBER     0x0265
#define Z_EN_HIT_TAG_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_HIT_TAG_OBJECT_NUMBER    0x0001
#define Z_EN_HIT_TAG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_hit_tag_s z_en_hit_tag_t;
struct z_en_hit_tag_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0194 */

#endif /* __Z64OVL_Z_EN_HIT_TAG__ */
