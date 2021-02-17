#ifndef __Z64OVL_Z_EN_TRT2__
#define __Z64OVL_Z_EN_TRT2__

#define Z_EN_TRT2_ACTOR_NUMBER     0x01B7
#define Z_EN_TRT2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TRT2_OBJECT_NUMBER    0x018F
#define Z_EN_TRT2_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_trt2_s z_en_trt2_t;
struct z_en_trt2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ void (*nxtproc)(/* ECOFF does not store param types */);
    /* 0x14C */ void (*subProc)(/* ECOFF does not store param types */);
    /* 0x150 */ SKELETON_INFO skeleton;
    /* 0x194 */ ClObjPipe all_pipe;
    /* 0x1E0 */ Path_Info* path;
    /* 0x1E4 */ int path_count;
    /* 0x1E8 */ s_xyz jnt[27][2];
    /* 0x32C */ unsigned short statf;
    /* 0x330 */ xyz_t eye_position;
    /* 0x33C */ short pwt_y[27];
    /* 0x372 */ short pwt_z[27];
    /* 0x3A8 */ unsigned short mes_no;
    /* 0x3AA */ unsigned short old_mes_no;
    /* 0x3AC */ short count;
    /* 0x3AE */ short timer;
    /* 0x3B0 */ short timer2;
    /* 0x3B2 */ short talk_mode;
    /* 0x3B4 */ short old_talk_mode;
    /* 0x3B6 */ short eyesTM;
    /* 0x3B8 */ short eyesID;
    /* 0x3BC */ void* eyesProc;
    /* 0x3C0 */ short aim_angle_y;
    /* 0x3C2 */ s_xyz atama_ro_ang;
    /* 0x3C8 */ xyz_t atama_offset;
    /* 0x3D4 */ short atama_ang_sx;
    /* 0x3D6 */ short atama_ang_sy;
    /* 0x3D8 */ unsigned char talk_flag;
    /* 0x3D9 */ unsigned char path_flag;
    /* 0x3DA */ short eventmgr;
}; /* size = 0x03DC */

#endif /* __Z64OVL_Z_EN_TRT2__ */
