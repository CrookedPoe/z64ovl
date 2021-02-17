#ifndef __Z64OVL_Z_BG_HAKA_MEGANEBG__
#define __Z64OVL_Z_BG_HAKA_MEGANEBG__

#define Z_BG_HAKA_MEGANEBG_ACTOR_NUMBER     0x00AF
#define Z_BG_HAKA_MEGANEBG_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_HAKA_MEGANEBG_OBJECT_NUMBER    0x0069
#define Z_BG_HAKA_MEGANEBG_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_haka_meganebg_s z_bg_haka_meganebg_t;
struct z_bg_haka_meganebg_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned char sw_num;
    /* 0x15A */ short timer;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_HAKA_MEGANEBG__ */
