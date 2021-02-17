#ifndef __Z64OVL_Z_EN_HORSE_GANON__
#define __Z64OVL_Z_EN_HORSE_GANON__

#define Z_EN_HORSE_GANON_ACTOR_NUMBER     0x0042
#define Z_EN_HORSE_GANON_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_HORSE_GANON_OBJECT_NUMBER    0x002D
#define Z_EN_HORSE_GANON_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_horse_ganon_s z_en_horse_ganon_t;
struct z_en_horse_ganon_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ EN_HG_MODE mode;
    /* 0x140 */ EN_HG_ANIM_TYPE anim_type;
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

#endif /* __Z64OVL_Z_EN_HORSE_GANON__ */
