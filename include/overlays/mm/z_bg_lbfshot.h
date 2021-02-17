#ifndef __Z64OVL_Z_BG_LBFSHOT__
#define __Z64OVL_Z_BG_LBFSHOT__

#define Z_BG_LBFSHOT_ACTOR_NUMBER     0x0297
#define Z_BG_LBFSHOT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_LBFSHOT_OBJECT_NUMBER    0x027F
#define Z_BG_LBFSHOT_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_lbfshot_s z_bg_lbfshot_t;
struct z_bg_lbfshot_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0160 */

#endif /* __Z64OVL_Z_BG_LBFSHOT__ */
