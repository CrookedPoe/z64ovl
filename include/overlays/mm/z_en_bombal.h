#ifndef __Z64OVL_Z_EN_BOMBAL__
#define __Z64OVL_Z_EN_BOMBAL__

#define Z_EN_BOMBAL_ACTOR_NUMBER     0x0282
#define Z_EN_BOMBAL_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_BOMBAL_OBJECT_NUMBER    0x0280
#define Z_EN_BOMBAL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_bombal_s z_en_bombal_t;
struct z_en_bombal_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ short wait_timer;
    /* 0x14A */ short stat_mode;
    /* 0x14C */ short Event_now;
    /* 0x150 */ float scale;
    /* 0x154 */ float work_angle;
    /* 0x158 */ ClObjPipe acoc_pipe_info;
    /* 0x1A4 */ EN_BOMBAL_EFF en_bombal_eff[200];
}; /* size = 0x2A44 */

#endif /* __Z64OVL_Z_EN_BOMBAL__ */
