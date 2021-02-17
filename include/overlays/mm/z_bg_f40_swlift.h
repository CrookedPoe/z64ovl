#ifndef __Z64OVL_Z_BG_F40_SWLIFT__
#define __Z64OVL_Z_BG_F40_SWLIFT__

#define Z_BG_F40_SWLIFT_ACTOR_NUMBER     0x00C7
#define Z_BG_F40_SWLIFT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_F40_SWLIFT_OBJECT_NUMBER    0x005C
#define Z_BG_F40_SWLIFT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_f40_swlift_s z_bg_f40_swlift_t;
struct z_bg_f40_swlift_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ int timer;
}; /* size = 0x0160 */

#endif /* __Z64OVL_Z_BG_F40_SWLIFT__ */
