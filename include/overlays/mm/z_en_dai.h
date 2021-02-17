#ifndef __Z64OVL_Z_EN_DAI__
#define __Z64OVL_Z_EN_DAI__

#define Z_EN_DAI_ACTOR_NUMBER     0x01FD
#define Z_EN_DAI_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DAI_OBJECT_NUMBER    0x01D5
#define Z_EN_DAI_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_dai_s z_en_dai_t;
struct z_en_dai_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ MtxF old_mtxf;
    /* 0x1CC */ unsigned char olddousa;
    /* 0x1CD */ unsigned char alpha;
    /* 0x1CE */ unsigned short statf;
    /* 0x1D0 */ long msge_ptr;
    /* 0x1D4 */ short atama_sy;
    /* 0x1D6 */ short wink_cnt;
    /* 0x1D8 */ short wink_tmr;
    /* 0x1DA */ short timer;
    /* 0x1DC */ short count;
    /* 0x1E0 */ float fwork;
    /* 0x1E4 */ xyz_t effc_pos;
    /* 0x1F0 */ xyz_t mune_scl;
    /* 0x1FC */ xyz_t kosi_scl;
    /* 0x208 */ s_xyz joint[19][2];
    /* 0x2EC */ Eff_actor effct[32];
    /* 0xA6C */ int hint_flg;
    /* 0xA70 */ int now_anim;
}; /* size = 0x0A74 */

#endif /* __Z64OVL_Z_EN_DAI__ */
