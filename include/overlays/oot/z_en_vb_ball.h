#ifndef __Z64OVL_Z_EN_VB_BALL__
#define __Z64OVL_Z_EN_VB_BALL__

#define Z_EN_VB_BALL_ACTOR_NUMBER     0x0000
#define Z_EN_VB_BALL_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_VB_BALL_OBJECT_NUMBER    0x009C
#define Z_EN_VB_BALL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_vb_ball_s z_en_vb_ball_t;
struct z_en_vb_ball_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ short timer;
    /* 0x142 */ short work[3];
    /* 0x148 */ float fwork[4];
    /* 0x158 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x01B4 */

#endif /* __Z64OVL_Z_EN_VB_BALL__ */
