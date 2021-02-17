#ifndef __Z64OVL_Z_EN_CHA__
#define __Z64OVL_Z_EN_CHA__

#define Z_EN_CHA_ACTOR_NUMBER     0x0270
#define Z_EN_CHA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_CHA_OBJECT_NUMBER    0x0243
#define Z_EN_CHA_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_cha_s z_en_cha_t;
struct z_en_cha_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0194 */

#endif /* __Z64OVL_Z_EN_CHA__ */
