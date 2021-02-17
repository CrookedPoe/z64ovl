#ifndef __Z64OVL_Z_EN_SUTTARI__
#define __Z64OVL_Z_EN_SUTTARI__

#define Z_EN_SUTTARI_ACTOR_NUMBER     0x0237
#define Z_EN_SUTTARI_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SUTTARI_OBJECT_NUMBER    0x00E3
#define Z_EN_SUTTARI_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_suttari_s z_en_suttari_t;
struct z_en_suttari_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ACTOR* sub_actor;
    /* 0x148 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x14C */ void (*nxtproc)(/* ECOFF does not store param types */);
    /* 0x150 */ SKELETON_INFO skeleton;
    /* 0x194 */ signed char atama_bank_ID;
    /* 0x195 */ signed char upper_bank_ID;
    /* 0x196 */ signed char lower_bank_ID;
    /* 0x197 */ signed char anime_bank_ID;
    /* 0x198 */ ClObjPipe all_pipe;
    /* 0x1E4 */ unsigned short statf;
    /* 0x1E6 */ unsigned short statf2;
    /* 0x1E8 */ unsigned short mesno;
    /* 0x1EC */ Path_Info* path[2];
    /* 0x1F4 */ int path_count[2];
    /* 0x1FC */ xyz_t foot_pos[2];
    /* 0x214 */ unsigned char footl_flag;
    /* 0x215 */ unsigned char footr_flag;
    /* 0x216 */ s_xyz jnt[16][2];
    /* 0x2D6 */ s_xyz anchor_ang;
    /* 0x2DC */ s_xyz atama;
    /* 0x2E2 */ s_xyz koshi;
    /* 0x2E8 */ s_xyz anchor_ang_bak;
    /* 0x2EE */ s_xyz atama_bak;
    /* 0x2F4 */ s_xyz koshi_bak;
    /* 0x2FA */ short pwt_y[16];
    /* 0x31A */ short pwt_z[16];
    /* 0x33C */ xyz_t shadow_pos[15];
    /* 0x3F0 */ short find_flag;
    /* 0x3F2 */ short neck_ang;
    /* 0x3F4 */ short cycle;
    /* 0x3F6 */ short wait_timer;
    /* 0x3F8 */ xyz_t bag_pos;
    /* 0x404 */ Path_Info* rails;
    /* 0x408 */ Nurbs_MvParm nurbs;
    /* 0x428 */ unsigned char schedule;
    /* 0x42A */ short pass_tmr;
    /* 0x42C */ int now_move;
    /* 0x430 */ int end_move;
    /* 0x434 */ short count;
    /* 0x436 */ short timer;
    /* 0x438 */ xyz_t doors[2];
    /* 0x450 */ int anime_no;
    /* 0x454 */ unsigned short mes_no;
    /* 0x456 */ short eventmgr[2];
    /* 0x45A */ short owner;
}; /* size = 0x045C */

#endif /* __Z64OVL_Z_EN_SUTTARI__ */
