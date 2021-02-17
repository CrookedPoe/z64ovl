#ifndef __Z64OVL_Z_BG_HAKA_TUBO__
#define __Z64OVL_Z_BG_HAKA_TUBO__

#define Z_BG_HAKA_TUBO_ACTOR_NUMBER     0x00BB
#define Z_BG_HAKA_TUBO_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HAKA_TUBO_OBJECT_NUMBER    0x0069
#define Z_BG_HAKA_TUBO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_haka_tubo_s z_bg_haka_tubo_t;
struct z_bg_haka_tubo_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer;
    /* 0x15A */ short frame_timer;
    /* 0x15C */ ClObjPipe ac_pipe;
    /* 0x1A8 */ ClObjPipe atoc_pipe;
}; /* size = 0x0204 */

#endif /* __Z64OVL_Z_BG_HAKA_TUBO__ */
