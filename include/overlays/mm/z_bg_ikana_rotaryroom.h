#ifndef __Z64OVL_Z_BG_IKANA_ROTARYROOM__
#define __Z64OVL_Z_BG_IKANA_ROTARYROOM__

#define Z_BG_IKANA_ROTARYROOM_ACTOR_NUMBER     0x021A
#define Z_BG_IKANA_ROTARYROOM_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_IKANA_ROTARYROOM_OBJECT_NUMBER    0x0203
#define Z_BG_IKANA_ROTARYROOM_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_bg_ikana_rotaryroom_s z_bg_ikana_rotaryroom_t;
struct z_bg_ikana_rotaryroom_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjJntSph sph;
    /* 0x17C */ ClObjJntSphElem elem[2];
    /* 0x1FC */ EvwAnimeInfo* evw_anime_data;
    /* 0x200 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x204 */ ACTOR* block;
    /* 0x208 */ MtxF block_mtx;
    /* 0x248 */ IkanaRotaryroomShut shut[2];
    /* 0x2D0 */ IkanaRotaryroomBody body[4];
    /* 0x3E0 */ IkanaRotaryroomEnemy enemy[4];
    /* 0x520 */ IkanaRotaryroomPl pl;
    /* 0x578 */ void (*enemy_drop)(/* ECOFF does not store param types */);
    /* 0x57C */ void (*pl_drop)(/* ECOFF does not store param types */);
    /* 0x580 */ void (*pl_sand)(/* ECOFF does not store param types */);
    /* 0x584 */ short mode_timer;
}; /* size = 0x0588 */

#endif /* __Z64OVL_Z_BG_IKANA_ROTARYROOM__ */
