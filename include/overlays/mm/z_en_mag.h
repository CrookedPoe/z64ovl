#ifndef __Z64OVL_Z_EN_MAG__
#define __Z64OVL_Z_EN_MAG__

#define Z_EN_MAG_ACTOR_NUMBER     0x00C5
#define Z_EN_MAG_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_MAG_OBJECT_NUMBER    0x0115
#define Z_EN_MAG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_mag_s z_en_mag_t;
struct z_en_mag_s {
    /* 0x0 */ ACTOR actor;
    /* 0x148 */ Sram sram;
    /* 0x170 */ Kanfont kanfont;
    /* 0x11F00 */ short effect_rgb_fg;
    /* 0x11F02 */ short effect_rgb_ct;
    /* 0x11F04 */ short title_mode;
    /* 0x11F06 */ short effect_prim_f;
    /* 0x11F08 */ short effect_prim[3];
    /* 0x11F0E */ short effect_env[3];
    /* 0x11F14 */ short effect_alpha;
    /* 0x11F16 */ short effect2_prim_f;
    /* 0x11F18 */ short effect2_prim[3];
    /* 0x11F1E */ short effect2_env[3];
    /* 0x11F24 */ short effect2_alpha;
    /* 0x11F26 */ short mask_alpha;
    /* 0x11F28 */ short mask_env[3];
    /* 0x11F2E */ short title_alpha;
    /* 0x11F30 */ short rogo_alpha;
    /* 0x11F32 */ short sub_alpha;
    /* 0x11F34 */ short copy_alpha;
    /* 0x11F36 */ short scroll_x[7];
    /* 0x11F44 */ short scroll_y[7];
    /* 0x11F52 */ short alpha_ct;
    /* 0x11F54 */ short alpha_fdin;
    /* 0x11F56 */ short alpha_fdout;
    /* 0x11F58 */ short key_point;
    /* 0x11F5A */ short key_frame;
    /* 0x11F5C */ int old_key;
    /* 0x11F60 */ int key_wait;
    /* 0x11F64 */ short effect1_fct;
    /* 0x11F66 */ short effect2_fct;
    /* 0x11F68 */ short title_fct;
    /* 0x11F6A */ short effect3_fct;
    /* 0x11F6C */ short rogo_fct;
    /* 0x11F6E */ short copy_fct;
    /* 0x11F70 */ short erase_fct;
    /* 0x11F72 */ short wait_fct;
}; /* size = 0x11F78 */

#endif /* __Z64OVL_Z_EN_MAG__ */
