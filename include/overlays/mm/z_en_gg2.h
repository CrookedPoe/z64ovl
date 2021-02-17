#ifndef __Z64OVL_Z_EN_GG2__
#define __Z64OVL_Z_EN_GG2__

#define Z_EN_GG2_ACTOR_NUMBER     0x01FA
#define Z_EN_GG2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GG2_OBJECT_NUMBER    0x01D0
#define Z_EN_GG2_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_INVISIBLE)

typedef struct z_en_gg2_s z_en_gg2_t;
struct z_en_gg2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ Path_Info* path;
    /* 0x1DC */ int path_count;
    /* 0x1E0 */ s_xyz neck_angle;
    /* 0x1E6 */ s_xyz body_angle;
    /* 0x1EC */ s_xyz joint1[20];
    /* 0x264 */ s_xyz joint2[20];
    /* 0x2DC */ unshort old_message_no;
    /* 0x2DE */ unshort flag;
    /* 0x2E0 */ unshort type;
    /* 0x2E2 */ unsigned char anime_no;
    /* 0x2E3 */ unsigned char old_dousa;
    /* 0x2E4 */ short eventmgr;
    /* 0x2E6 */ unsigned char neck_flag;
    /* 0x2E8 */ short anm_count;
    /* 0x2EA */ short eyesID;
    /* 0x2EC */ short eyesTM;
    /* 0x2EE */ short stat;
    /* 0x2F0 */ unsigned char draw_fg;
    /* 0x2F1 */ unsigned char path_end;
    /* 0x2F2 */ short fuwa_ang;
    /* 0x2F4 */ short body_ang_x;
    /* 0x2F6 */ short body_ang_y;
    /* 0x2F8 */ xyz_t path_pos;
    /* 0x304 */ xyz_t kira_pos;
}; /* size = 0x0310 */

#endif /* __Z64OVL_Z_EN_GG2__ */
