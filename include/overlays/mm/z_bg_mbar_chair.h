#ifndef __Z64OVL_Z_BG_MBAR_CHAIR__
#define __Z64OVL_Z_BG_MBAR_CHAIR__

#define Z_BG_MBAR_CHAIR_ACTOR_NUMBER     0x0217
#define Z_BG_MBAR_CHAIR_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MBAR_CHAIR_OBJECT_NUMBER    0x0202
#define Z_BG_MBAR_CHAIR_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_mbar_chair_s z_bg_mbar_chair_t;
struct z_bg_mbar_chair_s {
    /* 0x0 */ MoveBG_Actor moveBG;
}; /* size = 0x015C */

#endif /* __Z64OVL_Z_BG_MBAR_CHAIR__ */
