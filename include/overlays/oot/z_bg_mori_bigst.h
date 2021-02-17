#ifndef __Z64OVL_Z_BG_MORI_BIGST__
#define __Z64OVL_Z_BG_MORI_BIGST__

#define Z_BG_MORI_BIGST_ACTOR_NUMBER     0x0086
#define Z_BG_MORI_BIGST_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MORI_BIGST_OBJECT_NUMBER    0x0072
#define Z_BG_MORI_BIGST_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_mori_bigst_s z_bg_mori_bigst_t;
struct z_bg_mori_bigst_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer;
    /* 0x15A */ signed char tex_bank_ID;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_MORI_BIGST__ */
