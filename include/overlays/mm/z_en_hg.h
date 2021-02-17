#ifndef __Z64OVL_Z_EN_HG__
#define __Z64OVL_Z_EN_HG__

#define Z_EN_HG_ACTOR_NUMBER     0x0250
#define Z_EN_HG_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_HG_OBJECT_NUMBER    0x022A
#define Z_EN_HG_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_SFX_SYSTEM | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_hg_s z_en_hg_t;
struct z_en_hg_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ MtxF mayuge_mtx;
    /* 0x218 */ int event_no;
    /* 0x21C */ int demo_anime_no;
    /* 0x220 */ s_xyz joint1[19];
    /* 0x292 */ s_xyz joint2[19];
    /* 0x304 */ s_xyz neck_angle;
    /* 0x30A */ s_xyz body_angle;
    /* 0x310 */ short eventmgr[2];
    /* 0x314 */ short sound_count;
    /* 0x316 */ unshort old_dousa;
}; /* size = 0x0318 */

#endif /* __Z64OVL_Z_EN_HG__ */
