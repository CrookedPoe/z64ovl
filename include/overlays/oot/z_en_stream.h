#ifndef __Z64OVL_Z_EN_STREAM__
#define __Z64OVL_Z_EN_STREAM__

#define Z_EN_STREAM_ACTOR_NUMBER     0x0160
#define Z_EN_STREAM_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_STREAM_OBJECT_NUMBER    0x013B
#define Z_EN_STREAM_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_stream_s z_en_stream_t;
struct z_en_stream_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ int no;
    /* 0x144 */ int timer;
}; /* size = 0x0158 */

#endif /* __Z64OVL_Z_EN_STREAM__ */
