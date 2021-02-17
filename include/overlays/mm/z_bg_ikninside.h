#ifndef __Z64OVL_Z_BG_IKNINSIDE__
#define __Z64OVL_Z_BG_IKNINSIDE__

#define Z_BG_IKNINSIDE_ACTOR_NUMBER     0x0285
#define Z_BG_IKNINSIDE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_IKNINSIDE_OBJECT_NUMBER    0x0236
#define Z_BG_IKNINSIDE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_ikninside_s z_bg_ikninside_t;
struct z_bg_ikninside_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjPipe pipe_info;
    /* 0x1A8 */ unshort flag;
    /* 0x1AA */ short yure;
    /* 0x1AC */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_BG_IKNINSIDE__ */
