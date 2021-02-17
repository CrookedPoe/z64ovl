#ifndef __Z64OVL_Z_BG_SPOT16_DOUGHNUT__
#define __Z64OVL_Z_BG_SPOT16_DOUGHNUT__

#define Z_BG_SPOT16_DOUGHNUT_ACTOR_NUMBER     0x00E5
#define Z_BG_SPOT16_DOUGHNUT_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_SPOT16_DOUGHNUT_OBJECT_NUMBER    0x017A
#define Z_BG_SPOT16_DOUGHNUT_FLAGS            (ACTORFLAG_NOP)

typedef struct z_bg_spot16_doughnut_s z_bg_spot16_doughnut_t;
struct z_bg_spot16_doughnut_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ unshort flag;
    /* 0x13E */ unshort timer;
    /* 0x140 */ unchar alpha;
}; /* size = 0x0154 */

#endif /* __Z64OVL_Z_BG_SPOT16_DOUGHNUT__ */
