#ifndef __Z64OVL_Z_EN_DNQ__
#define __Z64OVL_Z_EN_DNQ__

#define Z_EN_DNQ_ACTOR_NUMBER     0x016A
#define Z_EN_DNQ_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DNQ_OBJECT_NUMBER    0x018B
#define Z_EN_DNQ_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_dnq_s z_en_dnq_t;
struct z_en_dnq_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ int (*snap_pr)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x190 */ ClObjPipe pipeinfo;
    /* 0x1DC */ unsigned char olddousa;
    /* 0x1E0 */ long msge_ptr;
    /* 0x1E4 */ s_xyz joint[33][2];
    /* 0x370 */ xyz_t w_pos;
    /* 0x37C */ unsigned short statf;
    /* 0x37E */ unsigned short msgno;
    /* 0x380 */ unsigned char* msge_dat;
    /* 0x384 */ short timer;
    /* 0x386 */ short count;
    /* 0x388 */ short total;
    /* 0x38A */ short demo_tmr;
    /* 0x38C */ short demo_cnt;
    /* 0x390 */ float distance;
    /* 0x394 */ float fwork;
    /* 0x398 */ int now_anim;
    /* 0x39C */ int talk_flg;
    /* 0x3A0 */ int demo_flg;
    /* 0x3A4 */ int nabe_flg;
}; /* size = 0x03A8 */

#endif /* __Z64OVL_Z_EN_DNQ__ */
