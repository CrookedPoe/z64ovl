#ifndef __Z64OVL_Z_EN_MAG__
#define __Z64OVL_Z_EN_MAG__

#define Z_EN_MAG_ACTOR_NUMBER     0x0171
#define Z_EN_MAG_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_MAG_OBJECT_NUMBER    0x014A
#define Z_EN_MAG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_mag_s z_en_mag_t;
struct z_en_mag_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ Sram sram;
    /* 0x140 */ Kanfont kanfont;
    /* 0xE2C8 */ short effect_rgb_fg;
    /* 0xE2CA */ short effect_rgb_ct;
    /* 0xE2CC */ short title_mode;
    /* 0xE2D0 */ float effect_prim_f;
    /* 0xE2D4 */ float effect_prim[3];
    /* 0xE2E0 */ float effect_env[3];
    /* 0xE2EC */ float effect_alpha;
    /* 0xE2F0 */ float title_alpha;
    /* 0xE2F4 */ float sub_alpha;
    /* 0xE2F8 */ float copy_alpha;
    /* 0xE2FC */ short scroll_x;
    /* 0xE2FE */ short scroll_y;
    /* 0xE300 */ short alpha_ct;
    /* 0xE302 */ short alpha_fdin;
    /* 0xE304 */ short alpha_fdout;
    /* 0xE306 */ short key_point;
    /* 0xE308 */ short key_frame;
    /* 0xE30C */ int old_key;
    /* 0xE310 */ int key_wait;
}; /* size = 0xE328 */

#endif /* __Z64OVL_Z_EN_MAG__ */
