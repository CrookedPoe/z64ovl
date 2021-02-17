#ifndef __Z64OVL_Z_EN_PAPER__
#define __Z64OVL_Z_EN_PAPER__

#define Z_EN_PAPER_ACTOR_NUMBER     0x02A4
#define Z_EN_PAPER_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_PAPER_OBJECT_NUMBER    0x0185
#define Z_EN_PAPER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_SFX_SYSTEM | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_paper_s z_en_paper_t;
struct z_en_paper_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ Paper_Eff paper[60];
    /* 0xD78 */ xyz_t wind_vec;
    /* 0xD84 */ short alive_timer;
}; /* size = 0x0D88 */

#endif /* __Z64OVL_Z_EN_PAPER__ */
