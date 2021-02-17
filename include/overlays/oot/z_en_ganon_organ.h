#ifndef __Z64OVL_Z_EN_GANON_ORGAN__
#define __Z64OVL_Z_EN_GANON_ORGAN__

#define Z_EN_GANON_ORGAN_ACTOR_NUMBER     0x015E
#define Z_EN_GANON_ORGAN_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_GANON_ORGAN_OBJECT_NUMBER    0x00E1
#define Z_EN_GANON_ORGAN_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_ganon_organ_s z_en_ganon_organ_t;
struct z_en_ganon_organ_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ short al;
}; /* size = 0x0150 */

#endif /* __Z64OVL_Z_EN_GANON_ORGAN__ */
