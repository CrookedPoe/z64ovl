#ifndef __Z64OVL_Z_BG_SPOT01_IDOHASHIRA__
#define __Z64OVL_Z_BG_SPOT01_IDOHASHIRA__

#define Z_BG_SPOT01_IDOHASHIRA_ACTOR_NUMBER     0x0103
#define Z_BG_SPOT01_IDOHASHIRA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_SPOT01_IDOHASHIRA_OBJECT_NUMBER    0x00F9
#define Z_BG_SPOT01_IDOHASHIRA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_spot01_idohashira_s z_bg_spot01_idohashira_t;
struct z_bg_spot01_idohashira_s {
    /* 0x0 */ MoveBG_Actor moveBG_actor;
    /* 0x154 */ int main_mode;
    /* 0x158 */ int draw_mode;
    /* 0x15C */ int old_dousa;
    /* 0x160 */ int fly_dust;
}; /* size = 0x0174 */

#endif /* __Z64OVL_Z_BG_SPOT01_IDOHASHIRA__ */
