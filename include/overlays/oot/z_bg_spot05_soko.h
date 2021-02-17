#ifndef __Z64OVL_Z_BG_SPOT05_SOKO__
#define __Z64OVL_Z_BG_SPOT05_SOKO__

#define Z_BG_SPOT05_SOKO_ACTOR_NUMBER     0x018D
#define Z_BG_SPOT05_SOKO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_SPOT05_SOKO_OBJECT_NUMBER    0x0161
#define Z_BG_SPOT05_SOKO_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_spot05_soko_s z_bg_spot05_soko_t;
struct z_bg_spot05_soko_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ int sw_num;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_SPOT05_SOKO__ */
