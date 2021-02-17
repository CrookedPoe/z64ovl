#ifndef __Z64OVL_Z_BG_MARKET_STEP__
#define __Z64OVL_Z_BG_MARKET_STEP__

#define Z_BG_MARKET_STEP_ACTOR_NUMBER     0x01CC
#define Z_BG_MARKET_STEP_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MARKET_STEP_OBJECT_NUMBER    0x01B0
#define Z_BG_MARKET_STEP_FLAGS            (ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_SFX_TIMER)

typedef struct z_bg_market_step_s z_bg_market_step_t;
struct z_bg_market_step_s {
    /* 0x0 */ ACTOR actor;
}; /* size = 0x0144 */

#endif /* __Z64OVL_Z_BG_MARKET_STEP__ */
