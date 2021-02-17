#ifndef __Z64OVL_Z_EN_NB__
#define __Z64OVL_Z_EN_NB__

#define Z_EN_NB_ACTOR_NUMBER     0x0243
#define Z_EN_NB_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_NB_OBJECT_NUMBER    0x0004
#define Z_EN_NB_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_nb_s z_en_nb_t;
struct z_en_nb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ void (*msgproc)(/* ECOFF does not store param types */);
    /* 0x190 */ ClObjPipe pipeinfo;
    /* 0x1DC */ unsigned char schedule;
    /* 0x1E0 */ unsigned char* msge_dat;
    /* 0x1E4 */ long msge_ptr;
    /* 0x1E8 */ ACTOR* anchor_p;
    /* 0x1EC */ ACTOR* enmy1;
    /* 0x1F0 */ xyz_t atamaOfs;
    /* 0x1FC */ s_xyz atamaRor;
    /* 0x202 */ s_xyz joint[8][2];
    /* 0x262 */ unsigned short statf;
    /* 0x264 */ unsigned short msgno;
    /* 0x268 */ float base_frm;
    /* 0x26C */ float aim_trns;
    /* 0x270 */ float now_trns;
    /* 0x274 */ float distance;
    /* 0x278 */ short timer;
    /* 0x27A */ short count;
    /* 0x27C */ short atama_ang_sx;
    /* 0x27E */ short atama_ang_sy;
    /* 0x280 */ short pass_tmr;
    /* 0x282 */ short work_tmr;
    /* 0x284 */ short proc_cnt;
    /* 0x286 */ short fade_tmr;
    /* 0x288 */ short demo_cnt;
    /* 0x28C */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x290 */ int now_anim;
    /* 0x294 */ int old_anim;
    /* 0x298 */ int old_stat;
}; /* size = 0x029C */

#endif /* __Z64OVL_Z_EN_NB__ */
