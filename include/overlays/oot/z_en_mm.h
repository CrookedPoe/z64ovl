#ifndef __Z64OVL_Z_EN_MM__
#define __Z64OVL_Z_EN_MM__

#define Z_EN_MM_ACTOR_NUMBER     0x0162
#define Z_EN_MM_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MM_OBJECT_NUMBER    0x013C
#define Z_EN_MM_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_mm_s z_en_mm_t;
struct z_en_mm_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe pipe_info;
    /* 0x1D0 */ int talk_stat;
    /* 0x1D4 */ int mouth_pat;
    /* 0x1D8 */ int run_stat;
    /* 0x1DC */ int rail_no;
    /* 0x1E0 */ int split_point;
    /* 0x1E4 */ int rail_pass_no;
    /* 0x1E8 */ float angle_y_tgt;
    /* 0x1EC */ float run_dist;
    /* 0x1F0 */ float max_spd;
    /* 0x1F4 */ int this_bank_ID;
    /* 0x1F8 */ MtxF mtxF;
    /* 0x238 */ s_xyz neck_angle;
    /* 0x23E */ s_xyz body_angle;
    /* 0x244 */ int flag;
    /* 0x248 */ int amp_no;
    /* 0x24C */ int cnt1;
    /* 0x250 */ s_xyz joint1[16];
    /* 0x2B0 */ s_xyz joint2[16];
}; /* size = 0x0320 */

#endif /* __Z64OVL_Z_EN_MM__ */
