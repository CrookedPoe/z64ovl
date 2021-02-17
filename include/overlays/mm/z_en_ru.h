#ifndef __Z64OVL_Z_EN_RU__
#define __Z64OVL_Z_EN_RU__

#define Z_EN_RU_ACTOR_NUMBER     0x0069
#define Z_EN_RU_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_RU_OBJECT_NUMBER    0x00A2
#define Z_EN_RU_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_ru_s z_en_ru_t;
struct z_en_ru_s {
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
    /* 0x1FE */ s_xyz jnt[23][2];
    /* 0x312 */ s_xyz anchor_ang;
    /* 0x318 */ s_xyz atama;
    /* 0x31E */ s_xyz koshi;
    /* 0x324 */ s_xyz anchor_ang_bak;
    /* 0x32A */ s_xyz atama_bak;
    /* 0x330 */ s_xyz koshi_bak;
    /* 0x336 */ short pwt_y[23];
    /* 0x364 */ short pwt_z[23];
    /* 0x394 */ xyz_t shadow_pos[15];
    /* 0x448 */ short swork;
    /* 0x44A */ short count;
    /* 0x44C */ short timer;
    /* 0x44E */ short paci_count;
    /* 0x450 */ short paci_timer;
}; /* size = 0x0454 */

#endif /* __Z64OVL_Z_EN_RU__ */
