#ifndef __Z64OVL_Z_BG_SST_FLOOR__
#define __Z64OVL_Z_BG_SST_FLOOR__

#define Z_BG_SST_FLOOR_ACTOR_NUMBER     0x0166
#define Z_BG_SST_FLOOR_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_SST_FLOOR_OBJECT_NUMBER    0x00E2
#define Z_BG_SST_FLOOR_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_sst_floor_s z_bg_sst_floor_t;
struct z_bg_sst_floor_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x154 */ short timer;
    /* 0x156 */ short bound_y;
    /* 0x158 */ short offset_y;
}; /* size = 0x016C */

#endif /* __Z64OVL_Z_BG_SST_FLOOR__ */
