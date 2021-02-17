#ifndef __Z64OVL_Z_EN_PM__
#define __Z64OVL_Z_EN_PM__

#define Z_EN_PM_ACTOR_NUMBER     0x01D5
#define Z_EN_PM_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_PM_OBJECT_NUMBER    0x0107
#define Z_EN_PM_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_pm_s z_en_pm_t;
struct z_en_pm_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ void (*msgproc)(/* ECOFF does not store param types */);
    /* 0x190 */ ClObjPipe pipeinfo;
    /* 0x1DC */ ClObjSph sph_info;
    /* 0x234 */ Path_Info* rails;
    /* 0x238 */ Nurbs_MvParm nurbs;
    /* 0x258 */ unsigned char schedule;
    /* 0x25C */ unsigned char* msge_dat;
    /* 0x260 */ signed char open_req;
    /* 0x264 */ long msge_ptr;
    /* 0x268 */ ACTOR* anchor_p;
    /* 0x26C */ xyz_t doors[2];
    /* 0x284 */ xyz_t atamaOfs;
    /* 0x290 */ s_xyz atamaRor;
    /* 0x296 */ s_xyz joint[16][2];
    /* 0x356 */ unsigned short statf;
    /* 0x358 */ unsigned short msgno;
    /* 0x35C */ float base_frm;
    /* 0x360 */ float aim_trns;
    /* 0x364 */ float now_trns;
    /* 0x368 */ float distance;
    /* 0x36C */ short timer;
    /* 0x36E */ short count;
    /* 0x370 */ short atama_ang_sx;
    /* 0x372 */ short atama_ang_sy;
    /* 0x374 */ short pass_tmr;
    /* 0x376 */ short work_tmr;
    /* 0x378 */ short demo_cnt;
    /* 0x37A */ short proc_cnt;
    /* 0x37C */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x380 */ int demo_flg;
    /* 0x384 */ int now_anim;
    /* 0x388 */ int old_stat;
    /* 0x38C */ int start_sw;
    /* 0x390 */ int get_item;
    /* 0x394 */ int put_item;
    /* 0x398 */ int talk_flg;
    /* 0x39C */ int happyend;
}; /* size = 0x03A0 */

#endif /* __Z64OVL_Z_EN_PM__ */
