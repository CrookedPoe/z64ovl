#ifndef __Z64OVL_Z_EN_TRU__
#define __Z64OVL_Z_EN_TRU__

#define Z_EN_TRU_ACTOR_NUMBER     0x0187
#define Z_EN_TRU_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TRU_OBJECT_NUMBER    0x018E
#define Z_EN_TRU_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_tru_s z_en_tru_t;
struct z_en_tru_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjSph sph_info;
    /* 0x1E4 */ Path_Info* rails;
    /* 0x1E8 */ long msge_ptr;
    /* 0x1EC */ xyz_t atamaOfs;
    /* 0x1F8 */ xyz_t jewelPos;
    /* 0x204 */ s_xyz atamaRor;
    /* 0x20A */ s_xyz joint[27][2];
    /* 0x34E */ unsigned short statf;
    /* 0x350 */ unsigned short msgno;
    /* 0x354 */ unsigned char* msge_dat;
    /* 0x358 */ float base_frm;
    /* 0x35C */ float fwork;
    /* 0x360 */ short swork;
    /* 0x362 */ short timer;
    /* 0x364 */ short count;
    /* 0x366 */ short atama_ang_sx;
    /* 0x368 */ short atama_ang_sy;
    /* 0x36A */ short work_tmr;
    /* 0x36C */ short wink_tmr;
    /* 0x36E */ short wink_cnt;
    /* 0x370 */ short fade_tmr;
    /* 0x372 */ short fade_cnt;
    /* 0x374 */ short event_id;
    /* 0x378 */ int (*evn_proc)(/* ECOFF does not store param types */);
    /* 0x37C */ int now_anim;
    /* 0x380 */ int old_anim;
    /* 0x384 */ int path_idx;
    /* 0x388 */ int put_item;
    /* 0x38C */ int get_item;
    /* 0x390 */ int drug_col;
    /* 0x394 */ Eff_actor kouka[30];
}; /* size = 0x0934 */

#endif /* __Z64OVL_Z_EN_TRU__ */
