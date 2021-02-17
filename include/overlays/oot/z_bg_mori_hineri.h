#ifndef __Z64OVL_Z_BG_MORI_HINERI__
#define __Z64OVL_Z_BG_MORI_HINERI__

#define Z_BG_MORI_HINERI_ACTOR_NUMBER     0x0068
#define Z_BG_MORI_HINERI_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_MORI_HINERI_OBJECT_NUMBER    0x0001
#define Z_BG_MORI_HINERI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_mori_hineri_s z_bg_mori_hineri_t;
struct z_bg_mori_hineri_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ signed char change_bank_ID;
    /* 0x159 */ signed char tex_bank_ID;
    /* 0x15A */ signed char box_bank_ID;
    /* 0x15B */ signed char tmp_num;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_MORI_HINERI__ */
