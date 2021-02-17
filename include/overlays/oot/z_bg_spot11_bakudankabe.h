#ifndef __Z64OVL_Z_BG_SPOT11_BAKUDANKABE__
#define __Z64OVL_Z_BG_SPOT11_BAKUDANKABE__

#define Z_BG_SPOT11_BAKUDANKABE_ACTOR_NUMBER     0x019F
#define Z_BG_SPOT11_BAKUDANKABE_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT11_BAKUDANKABE_OBJECT_NUMBER    0x016F
#define Z_BG_SPOT11_BAKUDANKABE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_spot11_bakudankabe_s z_bg_spot11_bakudankabe_t;
struct z_bg_spot11_bakudankabe_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ ClObjPipe pipe;
}; /* size = 0x01B0 */

#endif /* __Z64OVL_Z_BG_SPOT11_BAKUDANKABE__ */
