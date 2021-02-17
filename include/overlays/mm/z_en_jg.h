#ifndef __Z64OVL_Z_EN_JG__
#define __Z64OVL_Z_EN_JG__

#define Z_EN_JG_ACTOR_NUMBER     0x0213
#define Z_EN_JG_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_JG_OBJECT_NUMBER    0x01F8
#define Z_EN_JG_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_jg_s z_en_jg_t;
struct z_en_jg_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ACTOR* actor_goron;
    /* 0x148 */ ACTOR* ice;
    /* 0x14C */ ClObjPipe pipe_info;
    /* 0x198 */ SKELETON_INFO skeleton;
    /* 0x1DC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1E0 */ Path_Info* path;
    /* 0x1E4 */ int path_idx;
    /* 0x1E8 */ ACTOR* sub_actor;
    /* 0x1EC */ s_xyz neck_angle;
    /* 0x1F2 */ s_xyz body_angle;
    /* 0x1F8 */ s_xyz joint1[35];
    /* 0x2CA */ s_xyz joint2[35];
    /* 0x39C */ short body_ang_y;
    /* 0x39E */ short stat;
    /* 0x3A0 */ short form;
    /* 0x3A2 */ short freeze_timer;
    /* 0x3A4 */ xyz_t lip_pos;
    /* 0x3B0 */ xyz_t breath_vec;
    /* 0x3BC */ xyz_t breath_acc;
    /* 0x3C8 */ short eventmgr;
    /* 0x3CA */ unsigned char anime_no;
    /* 0x3CB */ unsigned char old_dousa;
    /* 0x3CC */ unsigned short statf;
    /* 0x3CE */ unsigned short mes_no;
    /* 0x3D0 */ unsigned char goron_idx;
}; /* size = 0x03D4 */

#endif /* __Z64OVL_Z_EN_JG__ */
