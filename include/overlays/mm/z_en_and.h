#ifndef __Z64OVL_Z_EN_AND__
#define __Z64OVL_Z_EN_AND__

#define Z_EN_AND_ACTOR_NUMBER     0x0299
#define Z_EN_AND_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_AND_OBJECT_NUMBER    0x0015
#define Z_EN_AND_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_and_s z_en_and_t;
struct z_en_and_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char olddousa;
    /* 0x18D */ unsigned char schedule;
    /* 0x190 */ ACTOR* anchor_p;
    /* 0x194 */ xyz_t atamaOfs;
    /* 0x1A0 */ xyz_t waistOfs;
    /* 0x1AC */ s_xyz atamaRor;
    /* 0x1B2 */ s_xyz waistRor;
    /* 0x1B8 */ s_xyz joint[26][2];
    /* 0x2F0 */ unsigned short statf;
    /* 0x2F2 */ short timer;
    /* 0x2F4 */ short count;
    /* 0x2F6 */ short atama_ang_sx;
    /* 0x2F8 */ short atama_ang_sy;
    /* 0x2FA */ short waist_ang_sx;
    /* 0x2FC */ short waist_ang_sy;
    /* 0x2FE */ short work_tmr;
    /* 0x300 */ short wink_tmr;
    /* 0x302 */ short wink_cnt;
    /* 0x304 */ int now_anim;
    /* 0x308 */ int old_anim;
    /* 0x30C */ int demo_flg;
    /* 0x310 */ int mask_flg;
}; /* size = 0x0314 */

#endif /* __Z64OVL_Z_EN_AND__ */
