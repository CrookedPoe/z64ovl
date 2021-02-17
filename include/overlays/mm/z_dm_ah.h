#ifndef __Z64OVL_Z_DM_AH__
#define __Z64OVL_Z_DM_AH__

#define Z_DM_AH_ACTOR_NUMBER     0x029F
#define Z_DM_AH_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_DM_AH_OBJECT_NUMBER    0x0007
#define Z_DM_AH_FLAGS            (ACTORFLAG_TALK)

typedef struct z_dm_ah_s z_dm_ah_t;
struct z_dm_ah_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ xyz_t atamaOfs;
    /* 0x198 */ xyz_t waistOfs;
    /* 0x1A4 */ s_xyz atamaRor;
    /* 0x1AA */ s_xyz waistRor;
    /* 0x1B0 */ s_xyz joint[17][2];
    /* 0x27C */ unsigned short statf;
    /* 0x27E */ unsigned char olddousa;
    /* 0x280 */ ACTOR* anchor_p;
    /* 0x284 */ short wink_cnt;
    /* 0x286 */ short wink_tmr;
    /* 0x288 */ short work_tmr;
    /* 0x28A */ short atama_ang_sx;
    /* 0x28C */ short atama_ang_sy;
    /* 0x28E */ short waist_ang_sx;
    /* 0x290 */ short waist_ang_sy;
    /* 0x294 */ int now_anim;
    /* 0x298 */ int old_anim;
    /* 0x29C */ int demo_flg;
}; /* size = 0x02A0 */

#endif /* __Z64OVL_Z_DM_AH__ */
