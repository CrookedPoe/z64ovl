#ifndef __Z64OVL_Z_EN_HAKUROCK__
#define __Z64OVL_Z_EN_HAKUROCK__

#define Z_EN_HAKUROCK_ACTOR_NUMBER     0x01EA
#define Z_EN_HAKUROCK_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_HAKUROCK_OBJECT_NUMBER    0x01BB
#define Z_EN_HAKUROCK_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_hakurock_s z_en_hakurock_t;
struct z_en_hakurock_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ int timer;
    /* 0x14C */ ClObjPipe atoc_pipe;
}; /* size = 0x0198 */

#endif /* __Z64OVL_Z_EN_HAKUROCK__ */
