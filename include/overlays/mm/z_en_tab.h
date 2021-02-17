#ifndef __Z64OVL_Z_EN_TAB__
#define __Z64OVL_Z_EN_TAB__

#define Z_EN_TAB_ACTOR_NUMBER     0x0263
#define Z_EN_TAB_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TAB_OBJECT_NUMBER    0x0013
#define Z_EN_TAB_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_tab_s z_en_tab_t;
struct z_en_tab_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe pipeinfo;
    /* 0x1D8 */ unsigned char schedule;
    /* 0x1DC */ long msge_ptr;
    /* 0x1E0 */ ACTOR* anchor_p;
    /* 0x1E4 */ ACTOR* enmy1;
    /* 0x1E8 */ xyz_t atamaOfs;
    /* 0x1F4 */ xyz_t waistOfs;
    /* 0x200 */ s_xyz atamaRor;
    /* 0x206 */ s_xyz waistRor;
    /* 0x20C */ s_xyz joint[20][2];
    /* 0x2FC */ unsigned short statf;
    /* 0x2FE */ unsigned short msgno;
    /* 0x300 */ float base_frm;
    /* 0x304 */ float aim_trns;
    /* 0x308 */ float now_trns;
    /* 0x30C */ short distance;
    /* 0x30E */ short timer;
    /* 0x310 */ short count;
    /* 0x312 */ short atama_ang_sx;
    /* 0x314 */ short atama_ang_sy;
    /* 0x316 */ short waist_ang_sx;
    /* 0x318 */ short waist_ang_sy;
    /* 0x31A */ short pass_tmr;
    /* 0x31C */ short wink_tmr;
    /* 0x31E */ short wink_cnt;
    /* 0x320 */ short demo_cnt;
    /* 0x322 */ short look_tmr;
    /* 0x324 */ short work_tmr;
    /* 0x328 */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x32C */ int now_anim;
    /* 0x330 */ int old_anim;
    /* 0x334 */ int old_stat;
    /* 0x338 */ int looktype;
}; /* size = 0x033C */

#endif /* __Z64OVL_Z_EN_TAB__ */
