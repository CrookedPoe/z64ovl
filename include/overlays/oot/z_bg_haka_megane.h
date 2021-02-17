#ifndef __Z64OVL_Z_BG_HAKA_MEGANE__
#define __Z64OVL_Z_BG_HAKA_MEGANE__

#define Z_BG_HAKA_MEGANE_ACTOR_NUMBER     0x00AE
#define Z_BG_HAKA_MEGANE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_HAKA_MEGANE_OBJECT_NUMBER    0x0001
#define Z_BG_HAKA_MEGANE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_INVISIBLE)

typedef struct z_bg_haka_megane_s z_bg_haka_megane_t;
struct z_bg_haka_megane_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned char megane_flg;
    /* 0x159 */ signed char change_bank_ID;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_HAKA_MEGANE__ */
