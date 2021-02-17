#ifndef __Z64OVL_Z_EN_IT__
#define __Z64OVL_Z_EN_IT__

#define Z_EN_IT_ACTOR_NUMBER     0x0196
#define Z_EN_IT_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_IT_OBJECT_NUMBER    0x0001
#define Z_EN_IT_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_it_s z_en_it_t;
struct z_en_it_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjPipe all_pipe;
}; /* size = 0x019C */

#endif /* __Z64OVL_Z_EN_IT__ */
