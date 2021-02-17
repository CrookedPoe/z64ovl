#ifndef __Z64OVL_Z_EN_ZOT__
#define __Z64OVL_Z_EN_ZOT__

#define Z_EN_ZOT_ACTOR_NUMBER     0x0228
#define Z_EN_ZOT_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ZOT_OBJECT_NUMBER    0x00D0
#define Z_EN_ZOT_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_zot_s z_en_zot_t;
struct z_en_zot_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ ClObjPipe pipe_info;
    /* 0x1D4 */ s_xyz joint1[20];
    /* 0x24C */ s_xyz joint2[20];
    /* 0x2C4 */ s_xyz neck_angle;
    /* 0x2CA */ s_xyz body_angle;
    /* 0x2D0 */ Path_Info* path_data;
    /* 0x2D4 */ int path_now;
    /* 0x2D8 */ ACTOR* tubo[5];
    /* 0x2EC */ Eye_Anime eye_anime;
    /* 0x2F0 */ short anime;
    /* 0x2F2 */ unshort flag;
    /* 0x2F4 */ short timer;
    /* 0x2F8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02FC */

#endif /* __Z64OVL_Z_EN_ZOT__ */
