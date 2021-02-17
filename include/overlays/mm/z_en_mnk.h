#ifndef __Z64OVL_Z_EN_MNK__
#define __Z64OVL_Z_EN_MNK__

#define Z_EN_MNK_ACTOR_NUMBER     0x019E
#define Z_EN_MNK_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MNK_OBJECT_NUMBER    0x0195
#define Z_EN_MNK_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_mnk_s z_en_mnk_t;
struct z_en_mnk_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ int (*snap_proc)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ s_xyz joint1[23];
    /* 0x216 */ s_xyz joint2[23];
    /* 0x2A0 */ SKELETON_INFO skeleton2;
    /* 0x2E4 */ s_xyz joint3[5];
    /* 0x302 */ s_xyz joint4[5];
    /* 0x320 */ ClObjPipe pipe_info;
    /* 0x36C */ MtxF saru;
    /* 0x3AC */ Path_Info* path_data;
    /* 0x3B0 */ short event_list[6];
    /* 0x3BC */ short now_event;
    /* 0x3BE */ short anime_no;
    /* 0x3C0 */ int path_now;
    /* 0x3C4 */ int path_no;
    /* 0x3C8 */ int jump_count;
    /* 0x3CC */ short neck_yoko;
    /* 0x3CE */ short neck_tate;
    /* 0x3D0 */ short kassya;
    /* 0x3D4 */ int count;
    /* 0x3D8 */ float guard;
    /* 0x3DC */ Eye_Anime eye_anime;
    /* 0x3E0 */ int eye_mode;
    /* 0x3E4 */ unshort flag;
    /* 0x3E8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x03EC */

#endif /* __Z64OVL_Z_EN_MNK__ */
