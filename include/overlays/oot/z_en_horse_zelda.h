#ifndef __Z64OVL_Z_EN_HORSE_ZELDA__
#define __Z64OVL_Z_EN_HORSE_ZELDA__

#define Z_EN_HORSE_ZELDA_ACTOR_NUMBER     0x005B
#define Z_EN_HORSE_ZELDA_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_HORSE_ZELDA_OBJECT_NUMBER    0x0046
#define Z_EN_HORSE_ZELDA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_horse_zelda_s z_en_horse_zelda_t;
struct z_en_horse_zelda_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ EN_HZ_MODE mode;
    /* 0x140 */ EN_HZ_ANIM_TYPE anim_type;
    /* 0x144 */ Skin_AnimationWorkBuffer2 skin_awb2;
    /* 0x1D4 */ unsigned short status;
    /* 0x1D8 */ int sound_cnt;
    /* 0x1DC */ int rail_wrk;
    /* 0x1E0 */ float demo_start_y;
    /* 0x1E4 */ float front_y;
    /* 0x1E8 */ float back_y;
    /* 0x1EC */ ClObjPipe oc_pipe_info;
    /* 0x238 */ ClObjJntSph oc_jntsph_info;
    /* 0x258 */ ClObjJntSphElem sph[1];
}; /* size = 0x02A8 */

#endif /* __Z64OVL_Z_EN_HORSE_ZELDA__ */
