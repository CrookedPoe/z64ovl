#ifndef __Z64OVL_Z_BG_ZG__
#define __Z64OVL_Z_BG_ZG__

#define Z_BG_ZG_ACTOR_NUMBER     0x0177
#define Z_BG_ZG_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_BG_ZG_OBJECT_NUMBER    0x0156
#define Z_BG_ZG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_zg_s z_bg_zg_t;
struct z_bg_zg_s {
    /* 0x0 */ MoveBG_Actor moveBG_actor;
    /* 0x154 */ int main_mode;
    /* 0x158 */ int draw_mode;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_ZG__ */
