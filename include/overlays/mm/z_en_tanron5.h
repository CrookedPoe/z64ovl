#ifndef __Z64OVL_Z_EN_TANRON5__
#define __Z64OVL_Z_EN_TANRON5__

#define Z_EN_TANRON5_ACTOR_NUMBER     0x0268
#define Z_EN_TANRON5_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_TANRON5_OBJECT_NUMBER    0x015B
#define Z_EN_TANRON5_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_tanron5_s z_en_tanron5_t;
struct z_en_tanron5_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ short damage;
    /* 0x148 */ Gfx* model;
    /* 0x14C */ ClObjPipe pipe_info;
    /* 0x198 */ short spin_spd_X;
    /* 0x19A */ short spin_spd_Y;
    /* 0x19C */ float scale2;
    /* 0x1A0 */ u8 hit_count;
    /* 0x1A1 */ u8 no_hit;
}; /* size = 0x01A4 */

#endif /* __Z64OVL_Z_EN_TANRON5__ */
