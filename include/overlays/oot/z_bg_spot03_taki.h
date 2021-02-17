#ifndef __Z64OVL_Z_BG_SPOT03_TAKI__
#define __Z64OVL_Z_BG_SPOT03_TAKI__

#define Z_BG_SPOT03_TAKI_ACTOR_NUMBER     0x011F
#define Z_BG_SPOT03_TAKI_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SPOT03_TAKI_OBJECT_NUMBER    0x0112
#define Z_BG_SPOT03_TAKI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_spot03_taki_s z_bg_spot03_taki_t;
struct z_bg_spot03_taki_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer;
    /* 0x15A */ unsigned char mode;
    /* 0x15C */ unsigned short save_bit_open;
    /* 0x160 */ float alpha;
    /* 0x164 */ unsigned char wbuffF;
}; /* size = 0x0178 */

#endif /* __Z64OVL_Z_BG_SPOT03_TAKI__ */
