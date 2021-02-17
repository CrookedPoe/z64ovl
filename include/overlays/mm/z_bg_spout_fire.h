#ifndef __Z64OVL_Z_BG_SPOUT_FIRE__
#define __Z64OVL_Z_BG_SPOUT_FIRE__

#define Z_BG_SPOUT_FIRE_ACTOR_NUMBER     0x0172
#define Z_BG_SPOUT_FIRE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOUT_FIRE_OBJECT_NUMBER    0x0153
#define Z_BG_SPOUT_FIRE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_spout_fire_s z_bg_spout_fire_t;
struct z_bg_spout_fire_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ short timer;
    /* 0x14A */ short txt_num;
    /* 0x14C */ ClObjPipe atoc_pipe;
}; /* size = 0x0198 */

#endif /* __Z64OVL_Z_BG_SPOUT_FIRE__ */
