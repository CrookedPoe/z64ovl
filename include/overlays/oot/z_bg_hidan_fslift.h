#ifndef __Z64OVL_Z_BG_HIDAN_FSLIFT__
#define __Z64OVL_Z_BG_HIDAN_FSLIFT__

#define Z_BG_HIDAN_FSLIFT_ACTOR_NUMBER     0x004E
#define Z_BG_HIDAN_FSLIFT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HIDAN_FSLIFT_OBJECT_NUMBER    0x002C
#define Z_BG_HIDAN_FSLIFT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_hidan_fslift_s z_bg_hidan_fslift_t;
struct z_bg_hidan_fslift_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer;
    /* 0x15A */ short player_ride_flg;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_HIDAN_FSLIFT__ */
