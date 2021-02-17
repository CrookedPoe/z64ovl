#ifndef __Z64OVL_Z_BG_LADDER__
#define __Z64OVL_Z_BG_LADDER__

#define Z_BG_LADDER_ACTOR_NUMBER     0x0163
#define Z_BG_LADDER_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_LADDER_OBJECT_NUMBER    0x0179
#define Z_BG_LADDER_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_ladder_s z_bg_ladder_t;
struct z_bg_ladder_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ short env_alpha;
    /* 0x162 */ short sw_num;
}; /* size = 0x0164 */

#endif /* __Z64OVL_Z_BG_LADDER__ */
