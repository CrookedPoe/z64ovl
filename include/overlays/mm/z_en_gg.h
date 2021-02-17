#ifndef __Z64OVL_Z_EN_GG__
#define __Z64OVL_Z_EN_GG__

#define Z_EN_GG_ACTOR_NUMBER     0x01F7
#define Z_EN_GG_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_GG_OBJECT_NUMBER    0x01D0
#define Z_EN_GG_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_INVISIBLE)

typedef struct z_en_gg_s z_en_gg_t;
struct z_en_gg_s {
    /* 0x0 */ xyz_t trs_pos_l;
    /* 0xC */ xyz_t trs_pos_r;
    /* 0x18 */ xyz_t trs_vec;
    /* 0x24 */ xyz_t trs_acc;
    /* 0x30 */ unsigned char anime_no;
    /* 0x34 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x38 */ void (*draw)(/* ECOFF does not store param types */);
    /* 0x3C */ int base_timer;
    /* 0x40 */ int start_timer;
    /* 0x44 */ int end_timer;
    /* 0x48 */ unsigned char end_fg;
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ s_xyz neck_angle;
    /* 0x1DE */ s_xyz body_angle;
    /* 0x1E4 */ s_xyz joint1[20];
    /* 0x25C */ s_xyz joint2[20];
    /* 0x2D4 */ unshort old_message_no;
    /* 0x2D6 */ unshort flag;
    /* 0x2D8 */ unshort type;
    /* 0x2DA */ unsigned char anime_no;
    /* 0x2DB */ unsigned char old_dousa;
    /* 0x2DC */ short eventmgr;
    /* 0x2DE */ unsigned char neck_flag;
    /* 0x2E0 */ short anm_count;
    /* 0x2E2 */ short eyesID;
    /* 0x2E4 */ short eyesTM;
    /* 0x2E6 */ short stat;
    /* 0x2E8 */ short body_ang_x;
    /* 0x2EC */ xyz_t fire_pos[2];
    /* 0x304 */ short fire_ang;
    /* 0x306 */ unsigned char hint_fg;
    /* 0x307 */ unsigned char oca_fg;
    /* 0x308 */ unsigned char draw_fg;
    /* 0x309 */ unsigned char tears_fg;
    /* 0x30A */ short fuwa_ang;
    /* 0x30C */ short body_ang_y;
    /* 0x310 */ float fuwa_pos_y;
    /* 0x314 */ xyz_t shadow_size;
    /* 0x320 */ xyz_t tears_pos;
    /* 0x32C */ xyz_t tears_vec;
    /* 0x338 */ xyz_t tears_acc;
    /* 0x344 */ En_Gg_Tears_Light gtl;
}; /* size = 0x0390 */

#endif /* __Z64OVL_Z_EN_GG__ */
