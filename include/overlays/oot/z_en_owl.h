#ifndef __Z64OVL_Z_EN_OWL__
#define __Z64OVL_Z_EN_OWL__

#define Z_EN_OWL_ACTOR_NUMBER     0x014D
#define Z_EN_OWL_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_OWL_OBJECT_NUMBER    0x0131
#define Z_EN_OWL_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_owl_s z_en_owl_t;
struct z_en_owl_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ SKELETON_INFO skeleton;
    /* 0x1CC */ s_xyz joint1[21];
    /* 0x24A */ s_xyz joint2[21];
    /* 0x2C8 */ SKELETON_INFO skeletonB;
    /* 0x30C */ s_xyz joint3[16];
    /* 0x36C */ s_xyz joint4[16];
    /* 0x3CC */ SKELETON_INFO* now_skeleton;
    /* 0x3D0 */ xyz_t eyeold;
    /* 0x3DC */ s_xyz neck_angle;
    /* 0x3E2 */ short tun_angle;
    /* 0x3E4 */ Eye_Anime eye_anime;
    /* 0x3E8 */ float posY;
    /* 0x3EC */ unshort flag;
    /* 0x3EE */ unshort count;
    /* 0x3F0 */ short run_angleY;
    /* 0x3F2 */ short one_point;
    /* 0x3F4 */ unchar kyoro_mode;
    /* 0x3F5 */ unchar kyoro;
    /* 0x3F6 */ unchar kyoro_time;
    /* 0x3F7 */ unchar tun_mode;
    /* 0x3F8 */ unchar tun;
    /* 0x3F9 */ unchar tun_time;
    /* 0x3FA */ unchar demo_dousa;
    /* 0x3FC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x400 */ void (*anime_prc)(/* ECOFF does not store param types */);
}; /* size = 0x0414 */

#endif /* __Z64OVL_Z_EN_OWL__ */
