#ifndef __Z64OVL_Z_EN_NUTSBALL__
#define __Z64OVL_Z_EN_NUTSBALL__

#define Z_EN_NUTSBALL_ACTOR_NUMBER     0x00DA
#define Z_EN_NUTSBALL_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_NUTSBALL_OBJECT_NUMBER    0x0001
#define Z_EN_NUTSBALL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_nutsball_s z_en_nutsball_t;
struct z_en_nutsball_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ short timer;
    /* 0x146 */ short oc_set_timer;
    /* 0x148 */ ClObjPipe all_pipe;
}; /* size = 0x0194 */

#endif /* __Z64OVL_Z_EN_NUTSBALL__ */
