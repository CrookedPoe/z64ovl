#ifndef __Z64OVL_Z_BG_INGATE__
#define __Z64OVL_Z_BG_INGATE__

#define Z_BG_INGATE_ACTOR_NUMBER     0x0140
#define Z_BG_INGATE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_INGATE_OBJECT_NUMBER    0x0129
#define Z_BG_INGATE_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_ingate_s z_bg_ingate_t;
struct z_bg_ingate_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_INGATE__ */
