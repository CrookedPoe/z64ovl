#ifndef __Z64OVL_Z_EN_ZO__
#define __Z64OVL_Z_EN_ZO__

#define Z_EN_ZO_ACTOR_NUMBER     0x00F8
#define Z_EN_ZO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ZO_OBJECT_NUMBER    0x00D0
#define Z_EN_ZO_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_zo_s z_en_zo_t;
struct z_en_zo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ ClObjPipe all_pipe;
    /* 0x1D8 */ unsigned short mesno;
    /* 0x1DA */ unsigned char no_request;
    /* 0x1DB */ unsigned char speak_flag;
    /* 0x1DC */ Path_Info* path;
    /* 0x1E0 */ short path_count;
    /* 0x1E4 */ xyz_t foot_pos[2];
    /* 0x1FC */ unsigned char footl_flag;
    /* 0x1FD */ unsigned char footr_flag;
    /* 0x1FE */ s_xyz jnt[20][2];
    /* 0x2EE */ s_xyz anchor_ang;
    /* 0x2F4 */ s_xyz atama;
    /* 0x2FA */ s_xyz koshi;
    /* 0x300 */ s_xyz anchor_ang_bak;
    /* 0x306 */ s_xyz atama_bak;
    /* 0x30C */ s_xyz koshi_bak;
    /* 0x312 */ short pwt_y[20];
    /* 0x33A */ short pwt_z[20];
    /* 0x364 */ xyz_t shadow_pos[15];
    /* 0x418 */ short swork;
    /* 0x41A */ short count;
    /* 0x41C */ short timer;
    /* 0x41E */ short paci_count;
    /* 0x420 */ short paci_timer;
}; /* size = 0x0424 */

#endif /* __Z64OVL_Z_EN_ZO__ */
