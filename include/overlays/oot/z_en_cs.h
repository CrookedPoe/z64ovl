#ifndef __Z64OVL_Z_EN_CS__
#define __Z64OVL_Z_EN_CS__

#define Z_EN_CS_ACTOR_NUMBER     0x016C
#define Z_EN_CS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_CS_OBJECT_NUMBER    0x0145
#define Z_EN_CS_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_cs_s z_en_cs_t;
struct z_en_cs_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe pipe_info;
    /* 0x1D0 */ int talk_stat;
    /* 0x1D4 */ int eye_pat;
    /* 0x1D8 */ int eye_wink_timer;
    /* 0x1DC */ int stat;
    /* 0x1E0 */ int run_stat;
    /* 0x1E4 */ int rail_no;
    /* 0x1E8 */ int split_point;
    /* 0x1EC */ int rail_pass_no;
    /* 0x1F0 */ int anm_rpt_cnt;
    /* 0x1F4 */ float angle_y_tgt;
    /* 0x1F8 */ float run_dist;
    /* 0x1FC */ float max_spd;
    /* 0x200 */ int anm_no;
    /* 0x204 */ int this_bank_ID;
    /* 0x208 */ MtxF mtxF;
    /* 0x248 */ NpcBasicAct npcbasicact;
    /* 0x270 */ int flag;
    /* 0x274 */ s_xyz joint1[16];
    /* 0x2D4 */ s_xyz joint2[16];
}; /* size = 0x0344 */

#endif /* __Z64OVL_Z_EN_CS__ */
