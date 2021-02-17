#ifndef __Z64OVL_Z_EN_GK__
#define __Z64OVL_Z_EN_GK__

#define Z_EN_GK_ACTOR_NUMBER     0x0201
#define Z_EN_GK_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GK_OBJECT_NUMBER    0x01DF
#define Z_EN_GK_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_gk_s z_en_gk_t;
struct z_en_gk_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ s_xyz neck_angle;
    /* 0x1DE */ s_xyz body_angle;
    /* 0x1E4 */ unsigned short statf;
    /* 0x1E8 */ Path_Info* path;
    /* 0x1EC */ int path_count;
    /* 0x1F0 */ s_xyz joint1[20];
    /* 0x268 */ s_xyz joint2[20];
    /* 0x2E0 */ short eyesID;
    /* 0x2E2 */ short eyesTM;
    /* 0x2E4 */ short stat;
    /* 0x2E6 */ short body_ang_y;
    /* 0x2E8 */ xyz_t tears_pos_l;
    /* 0x2F4 */ xyz_t tears_pos_r;
    /* 0x300 */ xyz_t tears_vec_l;
    /* 0x30C */ xyz_t tears_vec_r;
    /* 0x318 */ short eventmgr;
    /* 0x31A */ unsigned char anime_no;
    /* 0x31B */ unsigned char old_dousa;
    /* 0x31C */ unshort mes_no;
    /* 0x31E */ short atama_ang_sx;
    /* 0x320 */ short atama_ang_sy;
    /* 0x322 */ short waist_ang_sx;
    /* 0x324 */ short waist_ang_sy;
    /* 0x328 */ xyz_t atama_ofs;
    /* 0x334 */ s_xyz atama_ror;
    /* 0x33C */ xyz_t waist_ofs;
    /* 0x348 */ s_xyz waist_ror;
    /* 0x34E */ short timer;
    /* 0x350 */ short sleep_timer;
    /* 0x354 */ float scl;
}; /* size = 0x0358 */

#endif /* __Z64OVL_Z_EN_GK__ */
