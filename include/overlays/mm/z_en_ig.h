#ifndef __Z64OVL_Z_EN_IG__
#define __Z64OVL_Z_EN_IG__

#define Z_EN_IG_ACTOR_NUMBER     0x0276
#define Z_EN_IG_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_IG_OBJECT_NUMBER    0x01D5
#define Z_EN_IG_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_ig_s z_en_ig_t;
struct z_en_ig_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ void (*msgproc)(/* ECOFF does not store param types */);
    /* 0x190 */ MtxF old_mtx;
    /* 0x1D0 */ ClObjPipe pipeinfo;
    /* 0x21C */ ClObjSph sph_info;
    /* 0x274 */ Path_Info* rails;
    /* 0x278 */ Nurbs_MvParm nurbs;
    /* 0x298 */ unsigned char schedule;
    /* 0x29C */ unsigned char* msge_dat;
    /* 0x2A0 */ long msge_ptr;
    /* 0x2A4 */ signed char open_req;
    /* 0x2A8 */ ACTOR* anchor_p;
    /* 0x2AC */ ACTOR* door_act;
    /* 0x2B0 */ xyz_t doors[2];
    /* 0x2C8 */ xyz_t atamaOfs;
    /* 0x2D4 */ xyz_t waistOfs;
    /* 0x2E0 */ s_xyz atamaRor;
    /* 0x2E6 */ s_xyz waistRor;
    /* 0x2EC */ s_xyz joint[19][2];
    /* 0x3D0 */ unsigned short statf;
    /* 0x3D2 */ unsigned short msgno;
    /* 0x3D4 */ float base_frm;
    /* 0x3D8 */ float aim_trns;
    /* 0x3DC */ float now_trns;
    /* 0x3E0 */ short timer;
    /* 0x3E2 */ short count;
    /* 0x3E4 */ short atama_ang_sx;
    /* 0x3E6 */ short atama_ang_sy;
    /* 0x3E8 */ short waist_ang_sx;
    /* 0x3EA */ short waist_ang_sy;
    /* 0x3EC */ short pass_tmr;
    /* 0x3EE */ short work_tmr;
    /* 0x3F0 */ short wink_tmr;
    /* 0x3F2 */ short wink_cnt;
    /* 0x3F4 */ short proc_cnt;
    /* 0x3F6 */ short demo_cnt;
    /* 0x3F8 */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x3FC */ int now_anim;
    /* 0x400 */ int old_anim;
    /* 0x404 */ int old_stat;
    /* 0x408 */ int sound_fg;
}; /* size = 0x040C */

#endif /* __Z64OVL_Z_EN_IG__ */
