#ifndef __Z64OVL_Z_BG_DKJAIL_IVY__
#define __Z64OVL_Z_BG_DKJAIL_IVY__

#define Z_BG_DKJAIL_IVY_ACTOR_NUMBER     0x01BE
#define Z_BG_DKJAIL_IVY_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_DKJAIL_IVY_OBJECT_NUMBER    0x01A7
#define Z_BG_DKJAIL_IVY_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_dkjail_ivy_s z_bg_dkjail_ivy_t;
struct z_bg_dkjail_ivy_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjPipe pipe;
    /* 0x1A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1AC */ signed char event_stop_timer;
    /* 0x1AD */ unsigned char alpha;
    /* 0x1AE */ unsigned char pad[2];
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_BG_DKJAIL_IVY__ */
