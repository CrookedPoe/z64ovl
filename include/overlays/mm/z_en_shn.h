#ifndef __Z64OVL_Z_EN_SHN__
#define __Z64OVL_Z_EN_SHN__

#define Z_EN_SHN_ACTOR_NUMBER     0x01C5
#define Z_EN_SHN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SHN_OBJECT_NUMBER    0x01AC
#define Z_EN_SHN_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_shn_s z_en_shn_t;
struct z_en_shn_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ ClObjPipe pipeinfo;
    /* 0x1D8 */ unsigned short statf;
    /* 0x1DA */ unsigned short msgno;
    /* 0x1DC */ unsigned char* msge_dat;
    /* 0x1E0 */ long msge_ptr;
    /* 0x1E4 */ ACTOR* anchor_p;
    /* 0x1E8 */ xyz_t atamaOfs;
    /* 0x1F4 */ s_xyz atamaRor;
    /* 0x1FA */ s_xyz joint[16][2];
    /* 0x2BA */ short atama_ang_sx;
    /* 0x2BC */ short atama_ang_sy;
    /* 0x2BE */ short count;
    /* 0x2C0 */ short timer;
    /* 0x2C2 */ short wink_tmr;
    /* 0x2C4 */ short wink_cnt;
    /* 0x2C6 */ short demo_cnt;
    /* 0x2C8 */ short look_tmr;
    /* 0x2CA */ short work_tmr;
    /* 0x2CC */ float base_frm;
    /* 0x2D0 */ float aim_trns;
    /* 0x2D4 */ float now_trns;
    /* 0x2D8 */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x2DC */ int old_stat;
    /* 0x2E0 */ int put_item;
    /* 0x2E4 */ int get_item;
    /* 0x2E8 */ int now_anim;
    /* 0x2EC */ int looktype;
}; /* size = 0x02F0 */

#endif /* __Z64OVL_Z_EN_SHN__ */
