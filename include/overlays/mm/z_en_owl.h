#ifndef __Z64OVL_Z_EN_OWL__
#define __Z64OVL_Z_EN_OWL__

#define Z_EN_OWL_ACTOR_NUMBER     0x00AF
#define Z_EN_OWL_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_OWL_OBJECT_NUMBER    0x00FD
#define Z_EN_OWL_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_owl_s z_en_owl_t;
struct z_en_owl_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ s_xyz joint1[21];
    /* 0x252 */ s_xyz joint2[21];
    /* 0x2D0 */ SKELETON_INFO skeletonB;
    /* 0x314 */ s_xyz joint3[16];
    /* 0x374 */ s_xyz joint4[16];
    /* 0x3D4 */ SKELETON_INFO* now_skeleton;
    /* 0x3D8 */ s_xyz neck_angle;
    /* 0x3DE */ short tun_angle;
    /* 0x3E0 */ Eye_Anime eye_anime;
    /* 0x3E4 */ float posY;
    /* 0x3E8 */ unshort flag;
    /* 0x3EA */ short count;
    /* 0x3EC */ short fly_angle;
    /* 0x3F0 */ float fly_hei;
    /* 0x3F4 */ Path_Info* path_data;
    /* 0x3F8 */ int path_now;
    /* 0x3FC */ int path_no;
    /* 0x400 */ short event_list[3];
    /* 0x406 */ short call;
    /* 0x408 */ unchar kyoro_mode;
    /* 0x409 */ unchar kyoro;
    /* 0x40A */ unchar kyoro_time;
    /* 0x40B */ unchar tun_mode;
    /* 0x40C */ unchar tun;
    /* 0x40D */ unchar tun_time;
    /* 0x410 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x414 */ void (*anime_prc)(/* ECOFF does not store param types */);
}; /* size = 0x0418 */

#endif /* __Z64OVL_Z_EN_OWL__ */
