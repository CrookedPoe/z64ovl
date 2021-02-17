#ifndef __Z64OVL_Z_BG_MJIN__
#define __Z64OVL_Z_BG_MJIN__

#define Z_BG_MJIN_ACTOR_NUMBER     0x006E
#define Z_BG_MJIN_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MJIN_OBJECT_NUMBER    0x0001
#define Z_BG_MJIN_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_mjin_s z_bg_mjin_t;
struct z_bg_mjin_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ signed char change_bank_ID;
    /* 0x158 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_MJIN__ */
