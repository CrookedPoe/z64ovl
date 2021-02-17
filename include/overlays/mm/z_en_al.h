#ifndef __Z64OVL_Z_EN_AL__
#define __Z64OVL_Z_EN_AL__

#define Z_EN_AL_ACTOR_NUMBER     0x0262
#define Z_EN_AL_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_AL_OBJECT_NUMBER    0x000D
#define Z_EN_AL_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_al_s z_en_al_t;
struct z_en_al_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ void (*msgproc)(/* ECOFF does not store param types */);
    /* 0x190 */ MtxF old_mtxf[6];
    /* 0x310 */ ClObjPipe pipeinfo;
    /* 0x35C */ unsigned char schedule;
    /* 0x360 */ unsigned char* msge_dat;
    /* 0x364 */ long msge_ptr;
    /* 0x368 */ ACTOR* anchor_p;
    /* 0x36C */ xyz_t atamaOfs;
    /* 0x378 */ s_xyz atamaRor;
    /* 0x37E */ s_xyz joint[27][2];
    /* 0x4C2 */ unsigned short statf;
    /* 0x4C4 */ unsigned short msgno;
    /* 0x4C8 */ float base_frm;
    /* 0x4CC */ float aim_trns;
    /* 0x4D0 */ float now_trns;
    /* 0x4D4 */ float distance;
    /* 0x4D8 */ short timer;
    /* 0x4DA */ short count;
    /* 0x4DC */ short atama_ang_sx;
    /* 0x4DE */ short atama_ang_sy;
    /* 0x4E0 */ short pass_tmr;
    /* 0x4E2 */ short work_tmr;
    /* 0x4E4 */ short proc_cnt;
    /* 0x4E6 */ short demo_cnt;
    /* 0x4E8 */ short demo_tmr;
    /* 0x4EA */ short turn_cnt;
    /* 0x4EC */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x4F0 */ int put_item;
    /* 0x4F4 */ int get_item;
    /* 0x4F8 */ int now_anim;
    /* 0x4FC */ int old_stat;
}; /* size = 0x0500 */

#endif /* __Z64OVL_Z_EN_AL__ */
