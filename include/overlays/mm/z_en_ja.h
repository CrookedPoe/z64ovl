#ifndef __Z64OVL_Z_EN_JA__
#define __Z64OVL_Z_EN_JA__

#define Z_EN_JA_ACTOR_NUMBER     0x0244
#define Z_EN_JA_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_JA_OBJECT_NUMBER    0x00E3
#define Z_EN_JA_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_ja_s z_en_ja_t;
struct z_en_ja_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe pipeinfo;
    /* 0x1D8 */ unsigned char schedule;
    /* 0x1DC */ long msge_ptr;
    /* 0x1E0 */ ACTOR* anchor_p;
    /* 0x1E4 */ ACTOR* enmy1;
    /* 0x1E8 */ ACTOR* enmy2;
    /* 0x1EC */ xyz_t atamaOfs;
    /* 0x1F8 */ xyz_t waistOfs;
    /* 0x204 */ xyz_t my_lt;
    /* 0x210 */ xyz_t my_lc;
    /* 0x21C */ xyz_t br_rt;
    /* 0x228 */ xyz_t br_rc;
    /* 0x234 */ Ja_Ball ball[4];
    /* 0x274 */ s_xyz atamaRor;
    /* 0x27A */ s_xyz waistRor;
    /* 0x280 */ s_xyz joint[16][2];
    /* 0x340 */ unsigned short statf;
    /* 0x342 */ unsigned short msgno;
    /* 0x344 */ float base_frm;
    /* 0x348 */ float aim_trns;
    /* 0x34C */ float now_trns;
    /* 0x350 */ short timer;
    /* 0x352 */ short count;
    /* 0x354 */ short atama_ang_sx;
    /* 0x356 */ short atama_ang_sy;
    /* 0x358 */ short waist_ang_sx;
    /* 0x35A */ short waist_ang_sy;
    /* 0x35C */ short pass_tmr;
    /* 0x35E */ short work_tmr;
    /* 0x360 */ short wink_tmr;
    /* 0x362 */ short wink_cnt;
    /* 0x364 */ short l_ball_color;
    /* 0x366 */ short r_ball_color;
    /* 0x368 */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x36C */ int now_anim;
    /* 0x370 */ int old_anim;
    /* 0x374 */ int old_stat;
}; /* size = 0x0378 */

#endif /* __Z64OVL_Z_EN_JA__ */
