#ifndef __Z64OVL_Z_EN_AN__
#define __Z64OVL_Z_EN_AN__

#define Z_EN_AN_ACTOR_NUMBER     0x0202
#define Z_EN_AN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_AN_OBJECT_NUMBER    0x00E2
#define Z_EN_AN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_an_s z_en_an_t;
struct z_en_an_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ void (*msgproc)(/* ECOFF does not store param types */);
    /* 0x190 */ ClObjPipe pipeinfo;
    /* 0x1DC */ Path_Info* rails;
    /* 0x1E0 */ Nurbs_MvParm nurbs;
    /* 0x200 */ unsigned char schedule;
    /* 0x204 */ unsigned char* msge_dat;
    /* 0x208 */ signed char bank_ID1;
    /* 0x209 */ signed char bank_ID2;
    /* 0x20A */ signed char bank_ID3;
    /* 0x20B */ signed char bank_ID4;
    /* 0x20C */ signed char bank_ID5;
    /* 0x210 */ long msge_ptr;
    /* 0x214 */ signed char room_num;
    /* 0x215 */ signed char open_req;
    /* 0x218 */ ACTOR* anchor_p;
    /* 0x21C */ ACTOR* enmy1;
    /* 0x220 */ ACTOR* enmy2;
    /* 0x224 */ ACTOR* door_act;
    /* 0x228 */ xyz_t doors[2];
    /* 0x240 */ xyz_t atamaOfs;
    /* 0x24C */ xyz_t waistOfs;
    /* 0x258 */ s_xyz atamaRor;
    /* 0x25E */ s_xyz waistRor;
    /* 0x264 */ s_xyz joint[21][2];
    /* 0x360 */ unsigned short statf;
    /* 0x362 */ unsigned short msgno;
    /* 0x364 */ unsigned char olddousa;
    /* 0x368 */ float base_frm;
    /* 0x36C */ float aim_trns;
    /* 0x370 */ float now_trns;
    /* 0x374 */ float distance;
    /* 0x378 */ short timer;
    /* 0x37A */ short count;
    /* 0x37C */ short atama_ang_sx;
    /* 0x37E */ short atama_ang_sy;
    /* 0x380 */ short waist_ang_sx;
    /* 0x382 */ short waist_ang_sy;
    /* 0x384 */ short pass_tmr;
    /* 0x386 */ short look_tmr;
    /* 0x388 */ short work_tmr;
    /* 0x38A */ short wink_def;
    /* 0x38C */ short wink_typ;
    /* 0x38E */ short wink_tmr;
    /* 0x390 */ short wink_cnt;
    /* 0x392 */ short mouth;
    /* 0x394 */ short demo_cnt;
    /* 0x396 */ short proc_cnt;
    /* 0x398 */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x39C */ int now_anim;
    /* 0x3A0 */ int old_stat;
    /* 0x3A4 */ int old_anim;
    /* 0x3A8 */ int scr_cnt1;
    /* 0x3AC */ int scr_cnt2;
    /* 0x3B0 */ int demo_flg;
    /* 0x3B4 */ int mask_flg;
    /* 0x3B8 */ int room_chg;
    /* 0x3BC */ int looktype;
    /* 0x3C0 */ int happyend;
    /* 0x3C4 */ int talk_flg;
}; /* size = 0x03C8 */

#endif /* __Z64OVL_Z_EN_AN__ */
