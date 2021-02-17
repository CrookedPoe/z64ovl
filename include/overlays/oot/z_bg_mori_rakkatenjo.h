#ifndef __Z64OVL_Z_BG_MORI_RAKKATENJO__
#define __Z64OVL_Z_BG_MORI_RAKKATENJO__

#define Z_BG_MORI_RAKKATENJO_ACTOR_NUMBER     0x0089
#define Z_BG_MORI_RAKKATENJO_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MORI_RAKKATENJO_OBJECT_NUMBER    0x0072
#define Z_BG_MORI_RAKKATENJO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_mori_rakkatenjo_s z_bg_mori_rakkatenjo_t;
struct z_bg_mori_rakkatenjo_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ int timer;
    /* 0x15C */ int bound;
    /* 0x160 */ int drop_cnt;
    /* 0x164 */ signed char tex_bank_ID;
}; /* size = 0x0178 */

#endif /* __Z64OVL_Z_BG_MORI_RAKKATENJO__ */
