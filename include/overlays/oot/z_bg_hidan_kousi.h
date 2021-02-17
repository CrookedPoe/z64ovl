#ifndef __Z64OVL_Z_BG_HIDAN_KOUSI__
#define __Z64OVL_Z_BG_HIDAN_KOUSI__

#define Z_BG_HIDAN_KOUSI_ACTOR_NUMBER     0x006F
#define Z_BG_HIDAN_KOUSI_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_HIDAN_KOUSI_OBJECT_NUMBER    0x002C
#define Z_BG_HIDAN_KOUSI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_hidan_kousi_s z_bg_hidan_kousi_t;
struct z_bg_hidan_kousi_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short attention_timer;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_HIDAN_KOUSI__ */
