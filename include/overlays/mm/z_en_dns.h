#ifndef __Z64OVL_Z_EN_DNS__
#define __Z64OVL_Z_EN_DNS__

#define Z_EN_DNS_ACTOR_NUMBER     0x008A
#define Z_EN_DNS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DNS_OBJECT_NUMBER    0x0134
#define Z_EN_DNS_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_dns_s z_en_dns_t;
struct z_en_dns_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe pipeinfo;
    /* 0x1D8 */ unsigned char olddousa;
    /* 0x1DC */ long msge_ptr;
    /* 0x1E0 */ unsigned char* msge_dat;
    /* 0x1E4 */ Gfx* shape[13];
    /* 0x218 */ xyz_t atamaOfs;
    /* 0x224 */ s_xyz atamaRor;
    /* 0x22A */ s_xyz joint[13][2];
    /* 0x2C6 */ unsigned short statf;
    /* 0x2C8 */ unsigned short demopart;
    /* 0x2CA */ unsigned short msgno;
    /* 0x2CC */ short atama_ang_sx;
    /* 0x2CE */ short atama_ang_sy;
    /* 0x2D0 */ short timer;
    /* 0x2D2 */ short count;
    /* 0x2D4 */ short swork;
    /* 0x2D6 */ short distance_ang;
    /* 0x2D8 */ short addangle;
    /* 0x2DA */ short oldangle;
    /* 0x2DC */ short work_tmr;
    /* 0x2DE */ short wink_tmr;
    /* 0x2E0 */ short wink_cnt;
    /* 0x2E4 */ float offset_x;
    /* 0x2E8 */ float distance;
    /* 0x2EC */ float fwork;
    /* 0x2F0 */ float old_anmframe;
    /* 0x2F4 */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x2F8 */ int now_anim;
    /* 0x2FC */ int nabe_flg;
}; /* size = 0x0300 */

#endif /* __Z64OVL_Z_EN_DNS__ */
