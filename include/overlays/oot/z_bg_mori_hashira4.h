#ifndef __Z64OVL_Z_BG_MORI_HASHIRA4__
#define __Z64OVL_Z_BG_MORI_HASHIRA4__

#define Z_BG_MORI_HASHIRA4_ACTOR_NUMBER     0x00E3
#define Z_BG_MORI_HASHIRA4_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MORI_HASHIRA4_OBJECT_NUMBER    0x0072
#define Z_BG_MORI_HASHIRA4_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_mori_hashira4_s z_bg_mori_hashira4_t;
struct z_bg_mori_hashira4_s {
    /* 0x0 */ MoveBG_Actor a;
    /* 0x154 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x158 */ signed char tex_bank_ID;
    /* 0x159 */ signed char sw_num;
    /* 0x15A */ short count;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_MORI_HASHIRA4__ */
