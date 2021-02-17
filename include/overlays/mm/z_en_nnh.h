#ifndef __Z64OVL_Z_EN_NNH__
#define __Z64OVL_Z_EN_NNH__

#define Z_EN_NNH_ACTOR_NUMBER     0x0289
#define Z_EN_NNH_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_NNH_OBJECT_NUMBER    0x025B
#define Z_EN_NNH_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_nnh_s z_en_nnh_t;
struct z_en_nnh_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0194 */

#endif /* __Z64OVL_Z_EN_NNH__ */
