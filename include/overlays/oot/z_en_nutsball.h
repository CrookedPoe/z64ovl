#ifndef __Z64OVL_Z_EN_NUTSBALL__
#define __Z64OVL_Z_EN_NUTSBALL__

#define Z_EN_NUTSBALL_ACTOR_NUMBER     0x0193
#define Z_EN_NUTSBALL_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_NUTSBALL_OBJECT_NUMBER    0x0001
#define Z_EN_NUTSBALL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_nutsball_s z_en_nutsball_t;
struct z_en_nutsball_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ signed char change_bank_ID;
    /* 0x142 */ short timer;
    /* 0x144 */ ClObjPipe all_pipe;
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_EN_NUTSBALL__ */
