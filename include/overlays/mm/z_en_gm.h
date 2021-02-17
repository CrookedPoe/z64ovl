#ifndef __Z64OVL_Z_EN_GM__
#define __Z64OVL_Z_EN_GM__

#define Z_EN_GM_ACTOR_NUMBER     0x00A4
#define Z_EN_GM_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GM_OBJECT_NUMBER    0x0248
#define Z_EN_GM_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_gm_s z_en_gm_t;
struct z_en_gm_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ void (*msgproc)(/* ECOFF does not store param types */);
    /* 0x190 */ ClObjPipe pipeinfo;
    /* 0x1DC */ ClObjSph sph_info;
    /* 0x234 */ Path_Info* rails;
    /* 0x238 */ Nurbs_MvParm nurbs;
    /* 0x258 */ unsigned char schedule;
    /* 0x259 */ unsigned char olddousa;
    /* 0x25C */ long msge_ptr;
    /* 0x260 */ signed char room_num;
    /* 0x261 */ signed char open_req;
    /* 0x262 */ signed char bank_ID1;
    /* 0x264 */ unsigned char* msge_dat;
    /* 0x268 */ ACTOR* anchor_p;
    /* 0x26C */ ACTOR* enmy1;
    /* 0x270 */ ACTOR* enmy2;
    /* 0x274 */ ACTOR* door_act;
    /* 0x278 */ xyz_t doors[2];
    /* 0x290 */ xyz_t atamaOfs;
    /* 0x29C */ xyz_t waistOfs;
    /* 0x2A8 */ s_xyz atamaRor;
    /* 0x2AE */ s_xyz waistRor;
    /* 0x2B4 */ s_xyz joint[20][2];
    /* 0x3A4 */ unsigned short statf;
    /* 0x3A6 */ unsigned short msgno;
    /* 0x3A8 */ float base_frm;
    /* 0x3AC */ float aim_trns;
    /* 0x3B0 */ float now_trns;
    /* 0x3B4 */ float distance;
    /* 0x3B8 */ short timer;
    /* 0x3BA */ short count;
    /* 0x3BC */ short atama_ang_sx;
    /* 0x3BE */ short atama_ang_sy;
    /* 0x3C0 */ short waist_ang_sx;
    /* 0x3C2 */ short waist_ang_sy;
    /* 0x3C4 */ short pass_tmr;
    /* 0x3C6 */ short work_tmr;
    /* 0x3C8 */ short wink_def;
    /* 0x3CA */ short wink_typ;
    /* 0x3CC */ short wink_tmr;
    /* 0x3CE */ short wink_cnt;
    /* 0x3D0 */ short proc_cnt;
    /* 0x3D2 */ short pwait_sx[3];
    /* 0x3D8 */ short pwait_sy[3];
    /* 0x3DE */ short nomu_tmr;
    /* 0x3E0 */ short demo_cnt;
    /* 0x3E2 */ short demo_tmr;
    /* 0x3E4 */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x3E8 */ int now_anim;
    /* 0x3EC */ int old_anim;
    /* 0x3F0 */ int old_stat;
    /* 0x3F4 */ int nomu_idx;
    /* 0x3F8 */ int demo_flg;
    /* 0x3FC */ int room_chg;
    /* 0x400 */ int yaba_flg;
}; /* size = 0x0404 */

#endif /* __Z64OVL_Z_EN_GM__ */
