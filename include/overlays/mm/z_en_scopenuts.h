#ifndef __Z64OVL_Z_EN_SCOPENUTS__
#define __Z64OVL_Z_EN_SCOPENUTS__

#define Z_EN_SCOPENUTS_ACTOR_NUMBER     0x024C
#define Z_EN_SCOPENUTS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SCOPENUTS_OBJECT_NUMBER    0x01E5
#define Z_EN_SCOPENUTS_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_scopenuts_s z_en_scopenuts_t;
struct z_en_scopenuts_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[28];
    /* 0x230 */ s_xyz joint2[28];
    /* 0x2D8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2DC */ ClObjPipe pipe_info;
    /* 0x328 */ unsigned short statf;
    /* 0x32C */ float yuka_pos;
    /* 0x330 */ Path_Info* path;
    /* 0x334 */ int path_count;
    /* 0x338 */ short eventmgr;
    /* 0x33A */ short koshi_ang_z;
    /* 0x33C */ unshort mes_no;
    /* 0x33E */ s_xyz revolve_ang;
    /* 0x344 */ short shake_ang_y;
    /* 0x348 */ int stat;
    /* 0x34C */ short set_ang;
    /* 0x34E */ short timer;
    /* 0x350 */ float scale;
    /* 0x354 */ float step;
    /* 0x358 */ short price;
    /* 0x35A */ short pattern;
    /* 0x35C */ xyz_t parts_scl;
    /* 0x368 */ float parts_scl_size;
    /* 0x36C */ short cam_fg;
    /* 0x36E */ short counter;
    /* 0x370 */ short count;
    /* 0x372 */ short fly_angle;
}; /* size = 0x0374 */

#endif /* __Z64OVL_Z_EN_SCOPENUTS__ */
