#ifndef __Z64OVL_Z_EN_AH__
#define __Z64OVL_Z_EN_AH__

#define Z_EN_AH_ACTOR_NUMBER     0x0253
#define Z_EN_AH_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_AH_OBJECT_NUMBER    0x0007
#define Z_EN_AH_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_ah_s z_en_ah_t;
struct z_en_ah_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ void (*msgproc)(/* ECOFF does not store param types */);
    /* 0x190 */ ClObjPipe pipeinfo;
    /* 0x1DC */ unsigned char schedule;
    /* 0x1E0 */ long msge_ptr;
    /* 0x1E4 */ ACTOR* anchor_p;
    /* 0x1E8 */ xyz_t atamaOfs;
    /* 0x1F4 */ xyz_t waistOfs;
    /* 0x200 */ s_xyz atamaRor;
    /* 0x206 */ s_xyz waistRor;
    /* 0x20C */ s_xyz joint[17][2];
    /* 0x2D8 */ unsigned short statf;
    /* 0x2DA */ unsigned short msgno;
    /* 0x2DC */ float base_frm;
    /* 0x2E0 */ float aim_trns;
    /* 0x2E4 */ float now_trns;
    /* 0x2E8 */ short timer;
    /* 0x2EA */ short count;
    /* 0x2EC */ short atama_ang_sx;
    /* 0x2EE */ short atama_ang_sy;
    /* 0x2F0 */ short waist_ang_sx;
    /* 0x2F2 */ short waist_ang_sy;
    /* 0x2F4 */ short work_tmr;
    /* 0x2F6 */ short wink_typ;
    /* 0x2F8 */ short wink_tmr;
    /* 0x2FA */ short wink_cnt;
    /* 0x2FC */ short mouth;
    /* 0x2FE */ short proc_cnt;
    /* 0x300 */ int now_anim;
}; /* size = 0x0304 */

#endif /* __Z64OVL_Z_EN_AH__ */
