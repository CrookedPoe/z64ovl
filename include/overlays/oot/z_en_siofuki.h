#ifndef __Z64OVL_Z_EN_SIOFUKI__
#define __Z64OVL_Z_EN_SIOFUKI__

#define Z_EN_SIOFUKI_ACTOR_NUMBER     0x015F
#define Z_EN_SIOFUKI_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_SIOFUKI_OBJECT_NUMBER    0x013A
#define Z_EN_SIOFUKI_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_siofuki_s z_en_siofuki_t;
struct z_en_siofuki_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x158 */ int wait_timer;
    /* 0x15C */ float default_pos_y;
    /* 0x160 */ float trans_y;
    /* 0x164 */ float offset_y;
    /* 0x168 */ float stand_y;
    /* 0x16C */ float high_y_tgt;
    /* 0x170 */ float high_y_now;
    /* 0x174 */ int splash_timer;
    /* 0x178 */ int pl_chk_flg;
    /* 0x17C */ float env_spd;
    /* 0x180 */ float env_spd_max;
    /* 0x184 */ short env_ang;
    /* 0x186 */ short def_ang_y;
    /* 0x188 */ float def_high_y;
    /* 0x18C */ unsigned char flag;
}; /* size = 0x01A0 */

#endif /* __Z64OVL_Z_EN_SIOFUKI__ */
