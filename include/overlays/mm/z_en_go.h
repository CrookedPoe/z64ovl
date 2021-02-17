#ifndef __Z64OVL_Z_EN_GO__
#define __Z64OVL_Z_EN_GO__

#define Z_EN_GO_ACTOR_NUMBER     0x0138
#define Z_EN_GO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GO_OBJECT_NUMBER    0x00A1
#define Z_EN_GO_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_go_s z_en_go_t;
struct z_en_go_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ void (*oldproc)(/* ECOFF does not store param types */);
    /* 0x190 */ void (*msgproc)(/* ECOFF does not store param types */);
    /* 0x194 */ ClObjPipe pipeinfo;
    /* 0x1E0 */ ClObjPipe oyu_info;
    /* 0x22C */ ClObjSph sph_info;
    /* 0x284 */ Path_Info* rails;
    /* 0x288 */ signed char bank_ID1;
    /* 0x289 */ signed char bank_ID2;
    /* 0x28C */ long msge_ptr;
    /* 0x290 */ xyz_t atamaOfs;
    /* 0x29C */ xyz_t waistOfs;
    /* 0x2A8 */ s_xyz atamaRor;
    /* 0x2AE */ s_xyz waistRor;
    /* 0x2B4 */ s_xyz joint[18][2];
    /* 0x38C */ ACTOR* anchor_p;
    /* 0x390 */ unsigned short statf;
    /* 0x392 */ unsigned short msgno;
    /* 0x394 */ unsigned char old_actn;
    /* 0x398 */ float base_frm;
    /* 0x39C */ float iceScale;
    /* 0x3A0 */ float iceEnv_a;
    /* 0x3A4 */ float scale;
    /* 0x3A8 */ float scaleOfs;
    /* 0x3AC */ short timer;
    /* 0x3AE */ short count;
    /* 0x3B0 */ short atama_ang_sx;
    /* 0x3B2 */ short atama_ang_sy;
    /* 0x3B4 */ short waist_ang_sx;
    /* 0x3B6 */ short waist_ang_sy;
    /* 0x3B8 */ short event_id;
    /* 0x3BA */ short work_tmr;
    /* 0x3BC */ short wink_tmr;
    /* 0x3BE */ short wink_cnt;
    /* 0x3C0 */ short demo_seq;
    /* 0x3C2 */ short demo_tmr;
    /* 0x3C4 */ short demo_cnt;
    /* 0x3C6 */ short attk_tmr;
    /* 0x3C8 */ short pwait_sx[3];
    /* 0x3CE */ short pwait_sy[3];
    /* 0x3D4 */ short proc_cnt;
    /* 0x3D8 */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x3DC */ int now_anim;
    /* 0x3E0 */ int old_anim;
    /* 0x3E4 */ int path_idx;
    /* 0x3E8 */ int tire_idx;
    /* 0x3EC */ int sund_flg;
    /* 0x3F0 */ int demo_flg;
    /* 0x3F4 */ int talk_flg;
    /* 0x3F8 */ Eff_actor goeff[32];
}; /* size = 0x0B78 */

#endif /* __Z64OVL_Z_EN_GO__ */
