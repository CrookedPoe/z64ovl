#ifndef __Z64OVL_Z_BG_INIBS_MOVEBG__
#define __Z64OVL_Z_BG_INIBS_MOVEBG__

#define Z_BG_INIBS_MOVEBG_ACTOR_NUMBER     0x0227
#define Z_BG_INIBS_MOVEBG_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_INIBS_MOVEBG_OBJECT_NUMBER    0x020C
#define Z_BG_INIBS_MOVEBG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_inibs_movebg_s z_bg_inibs_movebg_t;
struct z_bg_inibs_movebg_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ Gfx* Oshape_modelP;
    /* 0x160 */ Gfx* Xshape_modelP;
    /* 0x164 */ EvwAnimeInfo* animeinfoP;
}; /* size = 0x0168 */

#endif /* __Z64OVL_Z_BG_INIBS_MOVEBG__ */
