#ifndef __Z64OVL_Z_BG_YDAN_HASI__
#define __Z64OVL_Z_BG_YDAN_HASI__

#define Z_BG_YDAN_HASI_ACTOR_NUMBER     0x0050
#define Z_BG_YDAN_HASI_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_YDAN_HASI_OBJECT_NUMBER    0x0036
#define Z_BG_YDAN_HASI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_ydan_hasi_s z_bg_ydan_hasi_t;
struct z_bg_ydan_hasi_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ unsigned char sw_num;
    /* 0x15A */ short timer;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_YDAN_HASI__ */
