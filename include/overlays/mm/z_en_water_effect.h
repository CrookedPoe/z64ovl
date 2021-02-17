#ifndef __Z64OVL_Z_EN_WATER_EFFECT__
#define __Z64OVL_Z_EN_WATER_EFFECT__

#define Z_EN_WATER_EFFECT_ACTOR_NUMBER     0x0170
#define Z_EN_WATER_EFFECT_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_WATER_EFFECT_OBJECT_NUMBER    0x0182
#define Z_EN_WATER_EFFECT_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_water_effect_s z_en_water_effect_t;
struct z_en_water_effect_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ We_Eff we_eff[50];
    /* 0xDC4 */ short count;
    /* 0xDC6 */ short timer;
    /* 0xDC8 */ u8 clear_timer;
    /* 0xDCC */ xyz_t scale[5];
    /* 0xE08 */ float scale_Y_spd[4];
    /* 0xE18 */ float scale_G[4];
    /* 0xE28 */ float alpha[5];
}; /* size = 0x0E3C */

#endif /* __Z64OVL_Z_EN_WATER_EFFECT__ */
