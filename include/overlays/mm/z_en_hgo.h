#ifndef __Z64OVL_Z_EN_HGO__
#define __Z64OVL_Z_EN_HGO__

#define Z_EN_HGO_ACTOR_NUMBER     0x0251
#define Z_EN_HGO_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_HGO_OBJECT_NUMBER    0x022A
#define Z_EN_HGO_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_hgo_s z_en_hgo_t;
struct z_en_hgo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ MtxF mayuge_mtx;
    /* 0x218 */ int demo_anime_no;
    /* 0x21C */ s_xyz joint1[19];
    /* 0x28E */ s_xyz joint2[19];
    /* 0x300 */ s_xyz neck_angle;
    /* 0x306 */ s_xyz body_angle;
    /* 0x30C */ short eye_indx;
    /* 0x30E */ short eye_timer;
    /* 0x310 */ short talk_flag;
    /* 0x312 */ short sound_count;
    /* 0x314 */ unshort old_message_no;
    /* 0x316 */ unshort old_dousa;
}; /* size = 0x0318 */

#endif /* __Z64OVL_Z_EN_HGO__ */
