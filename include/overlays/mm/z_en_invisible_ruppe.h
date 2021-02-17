#ifndef __Z64OVL_Z_EN_INVISIBLE_RUPPE__
#define __Z64OVL_Z_EN_INVISIBLE_RUPPE__

#define Z_EN_INVISIBLE_RUPPE_ACTOR_NUMBER     0x02AF
#define Z_EN_INVISIBLE_RUPPE_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_INVISIBLE_RUPPE_OBJECT_NUMBER    0x0001
#define Z_EN_INVISIBLE_RUPPE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_invisible_ruppe_s z_en_invisible_ruppe_t;
struct z_en_invisible_ruppe_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ short end_bit;
    /* 0x194 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0198 */

#endif /* __Z64OVL_Z_EN_INVISIBLE_RUPPE__ */
