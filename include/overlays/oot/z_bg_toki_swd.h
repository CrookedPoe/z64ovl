#ifndef __Z64OVL_Z_BG_TOKI_SWD__
#define __Z64OVL_Z_BG_TOKI_SWD__

#define Z_BG_TOKI_SWD_ACTOR_NUMBER     0x006C
#define Z_BG_TOKI_SWD_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_TOKI_SWD_OBJECT_NUMBER    0x005E
#define Z_BG_TOKI_SWD_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_toki_swd_s z_bg_toki_swd_t;
struct z_bg_toki_swd_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjPipe cl_pipe;
}; /* size = 0x019C */

#endif /* __Z64OVL_Z_BG_TOKI_SWD__ */
