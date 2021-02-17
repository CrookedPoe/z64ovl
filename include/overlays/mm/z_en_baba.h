#ifndef __Z64OVL_Z_EN_BABA__
#define __Z64OVL_Z_EN_BABA__

#define Z_EN_BABA_ACTOR_NUMBER     0x0236
#define Z_EN_BABA_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_BABA_OBJECT_NUMBER    0x00DF
#define Z_EN_BABA_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_baba_s z_en_baba_t;
struct z_en_baba_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ACTOR* bomya;
    /* 0x148 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x14C */ void (*nxtproc)(/* ECOFF does not store param types */);
    /* 0x150 */ SKELETON_INFO skeleton;
    /* 0x194 */ ClObjPipe all_pipe;
    /* 0x1E0 */ unsigned short mesno;
    /* 0x1E2 */ unsigned char speak_flag;
    /* 0x1E4 */ Path_Info* path;
    /* 0x1E8 */ short path_count;
    /* 0x1EC */ xyz_t foot_pos[2];
    /* 0x204 */ unsigned char footl_flag;
    /* 0x205 */ unsigned char footr_flag;
    /* 0x206 */ s_xyz jnt[18][2];
    /* 0x2DE */ s_xyz anchor_ang;
    /* 0x2E4 */ s_xyz atama;
    /* 0x2EA */ s_xyz koshi;
    /* 0x2F0 */ s_xyz anchor_ang_bak;
    /* 0x2F6 */ s_xyz atama_bak;
    /* 0x2FC */ s_xyz koshi_bak;
    /* 0x302 */ short pwt_y[18];
    /* 0x326 */ short pwt_z[18];
    /* 0x34C */ xyz_t shadow_pos[15];
    /* 0x400 */ short swork;
    /* 0x402 */ short count;
    /* 0x404 */ short timer;
    /* 0x406 */ short paci_count;
    /* 0x408 */ short paci_timer;
    /* 0x40A */ unsigned short statf;
    /* 0x40C */ int stat;
    /* 0x410 */ Path_Info* rails;
    /* 0x414 */ Nurbs_MvParm nurbs;
    /* 0x434 */ unsigned char schedule;
    /* 0x436 */ short pass_tmr;
    /* 0x438 */ int now_move;
    /* 0x43C */ int end_move;
}; /* size = 0x0440 */

#endif /* __Z64OVL_Z_EN_BABA__ */
