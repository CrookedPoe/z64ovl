#ifndef __Z64OVL_Z_EN_ZL1__
#define __Z64OVL_Z_EN_ZL1__

#define Z_EN_ZL1_ACTOR_NUMBER     0x001B
#define Z_EN_ZL1_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ZL1_OBJECT_NUMBER    0x0019
#define Z_EN_ZL1_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_zl1_s z_en_zl1_t;
struct z_en_zl1_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe pipe_info;
    /* 0x1D8 */ short demo_seq;
    /* 0x1DA */ short talk_seq;
    /* 0x1DC */ short timer;
    /* 0x1DE */ short count;
    /* 0x1E0 */ short camera_no;
    /* 0x1E4 */ unsigned char* mouth_txt;
    /* 0x1E8 */ short mouth_timer;
    /* 0x1EA */ short mouth_pattern;
    /* 0x1EC */ unsigned char* eyeR_txt;
    /* 0x1F0 */ unsigned char* eyeL_txt;
    /* 0x1F4 */ short eye_timer;
    /* 0x1F6 */ short eye_pattern;
    /* 0x1F8 */ s_xyz neck_angle;
    /* 0x1FE */ s_xyz body_angle;
}; /* size = 0x0204 */

#endif /* __Z64OVL_Z_EN_ZL1__ */
