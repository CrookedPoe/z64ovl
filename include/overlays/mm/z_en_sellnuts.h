#ifndef __Z64OVL_Z_EN_SELLNUTS__
#define __Z64OVL_Z_EN_SELLNUTS__

#define Z_EN_SELLNUTS_ACTOR_NUMBER     0x01BD
#define Z_EN_SELLNUTS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SELLNUTS_OBJECT_NUMBER    0x01E5
#define Z_EN_SELLNUTS_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_sellnuts_s z_en_sellnuts_t;
struct z_en_sellnuts_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[28];
    /* 0x230 */ s_xyz joint2[28];
    /* 0x2D8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2DC */ ClObjPipe pipe_info;
    /* 0x328 */ short count;
    /* 0x32C */ float yuka_pos;
    /* 0x330 */ Path_Info* path;
    /* 0x334 */ int path_count;
    /* 0x338 */ unsigned short statf;
    /* 0x33A */ unshort pl_stat;
    /* 0x33C */ short eventmgr;
    /* 0x33E */ short koshi_ang_z;
    /* 0x340 */ unshort mes_no;
    /* 0x342 */ s_xyz revolve_ang;
    /* 0x348 */ short shake_ang_y;
    /* 0x34A */ short timer;
    /* 0x34C */ short stat;
    /* 0x34E */ short dig_timer;
    /* 0x350 */ short pattern;
    /* 0x354 */ xyz_t parts_scl;
    /* 0x360 */ float parts_scl_size;
    /* 0x364 */ short set_ang;
    /* 0x366 */ short cam_fg;
    /* 0x368 */ short counter;
    /* 0x36C */ xyz_t scl;
}; /* size = 0x0378 */

#endif /* __Z64OVL_Z_EN_SELLNUTS__ */
