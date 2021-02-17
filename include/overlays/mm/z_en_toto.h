#ifndef __Z64OVL_Z_EN_TOTO__
#define __Z64OVL_Z_EN_TOTO__

#define Z_EN_TOTO_ACTOR_NUMBER     0x0234
#define Z_EN_TOTO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TOTO_OBJECT_NUMBER    0x023A
#define Z_EN_TOTO_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_toto_s z_en_toto_t;
struct z_en_toto_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz now_joint[18];
    /* 0x1F4 */ s_xyz morf_joint[18];
    /* 0x260 */ Eye_Anime eye_anime;
    /* 0x264 */ ClObjPipe acoc_info;
    /* 0x2B0 */ unsigned char mode;
    /* 0x2B1 */ unsigned char timer;
    /* 0x2B2 */ signed char event_no;
    /* 0x2B3 */ unsigned char session_player;
    /* 0x2B4 */ unsigned char talk_anime;
    /* 0x2B5 */ unsigned char demo_mode;
    /* 0x2B6 */ unsigned char stage_cancel;
    /* 0x2B7 */ unsigned char flag;
    /* 0x2B8 */ Action_Status* action_status;
    /* 0x2BC */ Demo_Walk_Status demo_walk_status;
    /* 0x2C4 */ ACTOR* spot_light;
    /* 0x2C8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02CC */

#endif /* __Z64OVL_Z_EN_TOTO__ */
