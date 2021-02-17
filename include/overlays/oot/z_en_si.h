#ifndef __Z64OVL_Z_EN_SI__
#define __Z64OVL_Z_EN_SI__

#define Z_EN_SI_ACTOR_NUMBER     0x019C
#define Z_EN_SI_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_SI_OBJECT_NUMBER    0x0024
#define Z_EN_SI_FLAGS            (ACTORFLAG_TARGET | ACTORFLAG_CAN_HOOKSHOT_GRAB)

typedef struct z_en_si_s z_en_si_t;
struct z_en_si_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjPipe all_pipe;
    /* 0x18C */ unsigned char ctflag;
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_EN_SI__ */
