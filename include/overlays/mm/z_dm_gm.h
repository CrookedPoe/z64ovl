#ifndef __Z64OVL_Z_DM_GM__
#define __Z64OVL_Z_DM_GM__

#define Z_DM_GM_ACTOR_NUMBER     0x02AD
#define Z_DM_GM_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_DM_GM_OBJECT_NUMBER    0x00E2
#define Z_DM_GM_FLAGS            (ACTORFLAG_TALK)

typedef struct z_dm_gm_s z_dm_gm_t;
struct z_dm_gm_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ xyz_t atamaOfs;
    /* 0x198 */ xyz_t waistOfs;
    /* 0x1A4 */ s_xyz atamaRor;
    /* 0x1AA */ s_xyz waistRor;
    /* 0x1B0 */ s_xyz joint[21][2];
    /* 0x2AC */ signed char bank_ID1;
    /* 0x2AD */ signed char bank_ID2;
    /* 0x2AE */ unsigned short statf;
    /* 0x2B0 */ unsigned char olddousa;
    /* 0x2B4 */ ACTOR* anchor_p;
    /* 0x2B8 */ short wink_cnt;
    /* 0x2BA */ short wink_tmr;
    /* 0x2BC */ short work_tmr;
    /* 0x2BE */ short atama_ang_sx;
    /* 0x2C0 */ short atama_ang_sy;
    /* 0x2C2 */ short waist_ang_sx;
    /* 0x2C4 */ short waist_ang_sy;
    /* 0x2C8 */ int now_anim;
    /* 0x2CC */ int old_anim;
    /* 0x2D0 */ int demo_flg;
    /* 0x2D4 */ int mask_flg;
}; /* size = 0x02D8 */

#endif /* __Z64OVL_Z_DM_GM__ */
