#ifndef __Z64OVL_Z_BG_HAKA_HUTA__
#define __Z64OVL_Z_BG_HAKA_HUTA__

#define Z_BG_HAKA_HUTA_ACTOR_NUMBER     0x00BD
#define Z_BG_HAKA_HUTA_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HAKA_HUTA_OBJECT_NUMBER    0x008D
#define Z_BG_HAKA_HUTA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_haka_huta_s z_bg_haka_huta_t;
struct z_bg_haka_huta_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer;
    /* 0x15A */ short enemy_type;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_HAKA_HUTA__ */
