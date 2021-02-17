#ifndef __Z64OVL_Z_BG_F40_FLIFT__
#define __Z64OVL_Z_BG_F40_FLIFT__

#define Z_BG_F40_FLIFT_ACTOR_NUMBER     0x004D
#define Z_BG_F40_FLIFT_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_F40_FLIFT_OBJECT_NUMBER    0x005C
#define Z_BG_F40_FLIFT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_f40_flift_s z_bg_f40_flift_t;
struct z_bg_f40_flift_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ int timer;
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_BG_F40_FLIFT__ */
