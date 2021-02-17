#ifndef __Z64OVL_Z_BG_GANON_OTYUKA__
#define __Z64OVL_Z_BG_GANON_OTYUKA__

#define Z_BG_GANON_OTYUKA_ACTOR_NUMBER     0x0106
#define Z_BG_GANON_OTYUKA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_GANON_OTYUKA_OBJECT_NUMBER    0x00E1
#define Z_BG_GANON_OTYUKA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_ganon_otyuka_s z_bg_ganon_otyuka_t;
struct z_bg_ganon_otyuka_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ short timer;
    /* 0x15A */ u8 down_sw;
    /* 0x15B */ u8 bgckf;
    /* 0x15C */ u8 disp_sw;
    /* 0x15D */ u8 count;
    /* 0x15E */ u8 eff_flag;
    /* 0x160 */ float eff_scale;
    /* 0x164 */ rgb_f_35 eff_prim;
    /* 0x170 */ rgb_f_35 eff_env;
}; /* size = 0x018C */

#endif /* __Z64OVL_Z_BG_GANON_OTYUKA__ */
