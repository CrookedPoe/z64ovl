#ifndef __Z64OVL_Z_EN_AKINDONUTS__
#define __Z64OVL_Z_EN_AKINDONUTS__

#define Z_EN_AKINDONUTS_ACTOR_NUMBER     0x0274
#define Z_EN_AKINDONUTS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_AKINDONUTS_OBJECT_NUMBER    0x01E5
#define Z_EN_AKINDONUTS_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_akindonuts_s z_en_akindonuts_t;
struct z_en_akindonuts_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[28];
    /* 0x230 */ s_xyz joint2[28];
    /* 0x2D8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2DC */ void (*msgproc)(/* ECOFF does not store param types */);
    /* 0x2E0 */ ClObjPipe pipe_info;
    /* 0x32C */ unsigned short statf;
    /* 0x330 */ Path_Info* path;
    /* 0x334 */ int path_count;
    /* 0x338 */ short stat;
    /* 0x33A */ short timer;
    /* 0x33C */ unshort mes_no;
    /* 0x33E */ short pattern;
    /* 0x340 */ xyz_t parts_scl;
    /* 0x34C */ float parts_scl_size;
    /* 0x350 */ s_xyz revolve_ang;
    /* 0x356 */ short counter;
    /* 0x358 */ float yuka_pos;
    /* 0x35C */ short count;
    /* 0x35E */ short cam_fg;
    /* 0x360 */ short eventmgr;
    /* 0x362 */ short set_ang;
    /* 0x364 */ short price;
    /* 0x366 */ unchar item_idx;
    /* 0x368 */ short fly_angle;
}; /* size = 0x036C */

#endif /* __Z64OVL_Z_EN_AKINDONUTS__ */
