#ifndef __Z64OVL_Z_EFF_KAMEJIMA_WAVE__
#define __Z64OVL_Z_EFF_KAMEJIMA_WAVE__

#define Z_EFF_KAMEJIMA_WAVE_ACTOR_NUMBER     0x024F
#define Z_EFF_KAMEJIMA_WAVE_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EFF_KAMEJIMA_WAVE_OBJECT_NUMBER    0x0229
#define Z_EFF_KAMEJIMA_WAVE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_eff_kamejima_wave_s z_eff_kamejima_wave_t;
struct z_eff_kamejima_wave_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ float scale_spd_y;
    /* 0x148 */ unchar alpha;
    /* 0x14C */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_EFF_KAMEJIMA_WAVE__ */
