#ifndef __Z64OVL_Z_EN_SC_RUPPE__
#define __Z64OVL_Z_EN_SC_RUPPE__

#define Z_EN_SC_RUPPE_ACTOR_NUMBER     0x025A
#define Z_EN_SC_RUPPE_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SC_RUPPE_OBJECT_NUMBER    0x0001
#define Z_EN_SC_RUPPE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_sc_ruppe_s z_en_sc_ruppe_t;
struct z_en_sc_ruppe_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x194 */ short timer;
    /* 0x196 */ short ruppe_color;
}; /* size = 0x0198 */

#endif /* __Z64OVL_Z_EN_SC_RUPPE__ */
