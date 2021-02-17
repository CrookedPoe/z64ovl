#ifndef __Z64OVL_Z_EN_PAMERA__
#define __Z64OVL_Z_EN_PAMERA__

#define Z_EN_PAMERA_ACTOR_NUMBER     0x025D
#define Z_EN_PAMERA_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_PAMERA_OBJECT_NUMBER    0x0238
#define Z_EN_PAMERA_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_pamera_s z_en_pamera_t;
struct z_en_pamera_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ void (*demo_proc)(/* ECOFF does not store param types */);
    /* 0x1DC */ s_xyz* path_ptr;
    /* 0x1E0 */ int path_no;
    /* 0x1E4 */ int path_max;
    /* 0x1E8 */ int path_next_id;
    /* 0x1EC */ int demo_anime_no;
    /* 0x1F0 */ s_xyz joint1[23];
    /* 0x27A */ s_xyz joint2[23];
    /* 0x304 */ s_xyz neck_angle;
    /* 0x30A */ s_xyz body_angle;
    /* 0x310 */ short mayu_indx;
    /* 0x312 */ short eye_indx;
    /* 0x314 */ short mouth_indx;
    /* 0x316 */ short eye_timer;
    /* 0x318 */ short eventmgr[2];
    /* 0x31C */ short proc_timer;
    /* 0x31E */ short demo_anime_step;
    /* 0x320 */ short proc_step;
    /* 0x322 */ short talk_flag;
    /* 0x324 */ unshort old_message_no;
    /* 0x326 */ unshort old_dousa;
}; /* size = 0x0328 */

#endif /* __Z64OVL_Z_EN_PAMERA__ */
