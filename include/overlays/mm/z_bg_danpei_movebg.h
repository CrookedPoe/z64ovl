#ifndef __Z64OVL_Z_BG_DANPEI_MOVEBG__
#define __Z64OVL_Z_BG_DANPEI_MOVEBG__

#define Z_BG_DANPEI_MOVEBG_ACTOR_NUMBER     0x01D3
#define Z_BG_DANPEI_MOVEBG_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_BG_DANPEI_MOVEBG_OBJECT_NUMBER    0x0001
#define Z_BG_DANPEI_MOVEBG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_bg_danpei_movebg_s z_bg_danpei_movebg_t;
struct z_bg_danpei_movebg_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ Path_Run_Info_t path_run_info;
    /* 0x1CC */ unsigned short stat;
    /* 0x1CE */ unsigned short stat_b;
    /* 0x1D0 */ Gfx* Oshape_modelP;
    /* 0x1D4 */ signed char bnkID;
}; /* size = 0x01D8 */

#endif /* __Z64OVL_Z_BG_DANPEI_MOVEBG__ */
