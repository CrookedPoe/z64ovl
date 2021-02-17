#ifndef __Z64OVL_Z_BG_DODOAGO__
#define __Z64OVL_Z_BG_DODOAGO__

#define Z_BG_DODOAGO_ACTOR_NUMBER     0x003F
#define Z_BG_DODOAGO_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_DODOAGO_OBJECT_NUMBER    0x002B
#define Z_BG_DODOAGO_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_dodoago_s z_bg_dodoago_t;
struct z_bg_dodoago_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ short counter;
    /* 0x156 */ short timer;
    /* 0x158 */ ClObjPipe pipe_pos;
    /* 0x1A4 */ ClObjPipe pipe_pos2;
    /* 0x1F0 */ ClObjPipe pipe_pos3;
    /* 0x23C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0250 */

#endif /* __Z64OVL_Z_BG_DODOAGO__ */
