#ifndef __Z64OVL_Z_EN_RG__
#define __Z64OVL_Z_EN_RG__

#define Z_EN_RG_ACTOR_NUMBER     0x0277
#define Z_EN_RG_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_RG_OBJECT_NUMBER    0x00A1
#define Z_EN_RG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_rg_s z_en_rg_t;
struct z_en_rg_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ACTOR* enemy;
    /* 0x190 */ ClObjPipe pipeinfo;
    /* 0x1DC */ ClObjSph sph_info;
    /* 0x234 */ Path_Info* rails;
    /* 0x238 */ s_xyz joint[18][2];
    /* 0x310 */ unsigned short statf;
    /* 0x314 */ float base_frm;
    /* 0x318 */ short timer;
    /* 0x31A */ short count;
    /* 0x31C */ short wink_tmr;
    /* 0x31E */ short wink_cnt;
    /* 0x320 */ short fuel_tmr;
    /* 0x322 */ short lock_tmr;
    /* 0x324 */ short escp_tmr;
    /* 0x326 */ short pl_hit_tmr;
    /* 0x328 */ short pwait_sx[3];
    /* 0x32E */ short pwait_sy[3];
    /* 0x334 */ int now_anim;
    /* 0x338 */ int old_anim;
    /* 0x33C */ int path_idx;
    /* 0x340 */ int tire_idx;
    /* 0x344 */ int ground_c;
    /* 0x348 */ int vs_pldis;
    /* 0x34C */ Eff_actor goeff[32];
}; /* size = 0x0ACC */

#endif /* __Z64OVL_Z_EN_RG__ */
