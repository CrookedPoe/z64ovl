#ifndef __Z64OVL_Z_EN_SNOWWD__
#define __Z64OVL_Z_EN_SNOWWD__

#define Z_EN_SNOWWD_ACTOR_NUMBER     0x01D4
#define Z_EN_SNOWWD_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_SNOWWD_OBJECT_NUMBER    0x01B7
#define Z_EN_SNOWWD_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_snowwd_s z_en_snowwd_t;
struct z_en_snowwd_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_pos;
    /* 0x190 */ short yure_timer;
    /* 0x194 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0198 */

#endif /* __Z64OVL_Z_EN_SNOWWD__ */
