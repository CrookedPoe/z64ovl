#ifndef __Z64OVL_Z_EN_MM3__
#define __Z64OVL_Z_EN_MM3__

#define Z_EN_MM3_ACTOR_NUMBER     0x017D
#define Z_EN_MM3_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MM3_OBJECT_NUMBER    0x0107
#define Z_EN_MM3_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_mm3_s z_en_mm3_t;
struct z_en_mm3_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ ClObjPipe all_pipe;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ int amp_no;
    /* 0x1DC */ int mouth_type;
    /* 0x1E0 */ s_xyz joint1[16];
    /* 0x240 */ s_xyz joint2[16];
    /* 0x2A0 */ s_xyz neck_angle;
    /* 0x2A6 */ s_xyz body_angle;
    /* 0x2AC */ short proc_timer;
    /* 0x2AE */ short sound_flag;
    /* 0x2B0 */ unshort status_bit;
    /* 0x2B2 */ unshort talk_bit;
    /* 0x2B4 */ unshort old_message_no;
}; /* size = 0x02B8 */

#endif /* __Z64OVL_Z_EN_MM3__ */
