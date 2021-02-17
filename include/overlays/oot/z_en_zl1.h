#ifndef __Z64OVL_Z_EN_ZL1__
#define __Z64OVL_Z_EN_ZL1__

#define Z_EN_ZL1_ACTOR_NUMBER     0x0029
#define Z_EN_ZL1_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ZL1_OBJECT_NUMBER    0x001D
#define Z_EN_ZL1_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_zl1_s z_en_zl1_t;
struct z_en_zl1_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe pipe_info;
    /* 0x1D0 */ short demo_seq;
    /* 0x1D2 */ short talk_seq;
    /* 0x1D4 */ short timer;
    /* 0x1D6 */ short count;
    /* 0x1D8 */ short camera_no;
    /* 0x1DC */ unsigned char* mouth_txt;
    /* 0x1E0 */ short mouth_timer;
    /* 0x1E2 */ short mouth_pattern;
    /* 0x1E4 */ unsigned char* eyeR_txt;
    /* 0x1E8 */ unsigned char* eyeL_txt;
    /* 0x1EC */ short eye_timer;
    /* 0x1EE */ short eye_pattern;
    /* 0x1F0 */ s_xyz neck_angle;
    /* 0x1F6 */ s_xyz body_angle;
}; /* size = 0x020C */

#endif /* __Z64OVL_Z_EN_ZL1__ */
