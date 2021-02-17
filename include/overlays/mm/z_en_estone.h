#ifndef __Z64OVL_Z_EN_ESTONE__
#define __Z64OVL_Z_EN_ESTONE__

#define Z_EN_ESTONE_ACTOR_NUMBER     0x018E
#define Z_EN_ESTONE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_ESTONE_OBJECT_NUMBER    0x018D
#define Z_EN_ESTONE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_estone_s z_en_estone_t;
struct z_en_estone_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ float scale;
    /* 0x14C */ xyz_t angle;
    /* 0x158 */ xyz_t angle_speed;
    /* 0x164 */ short wait_timer;
    /* 0x166 */ short stat_mode;
    /* 0x168 */ ClObjPipe acoc_pipe_info;
    /* 0x1B4 */ EN_ESTONE_EFF en_estone_eff[200];
}; /* size = 0x2D74 */

#endif /* __Z64OVL_Z_EN_ESTONE__ */
