#ifndef __Z64OVL_Z_EN_KAKASI3__
#define __Z64OVL_Z_EN_KAKASI3__

#define Z_EN_KAKASI3_ACTOR_NUMBER     0x01CA
#define Z_EN_KAKASI3_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_KAKASI3_OBJECT_NUMBER    0x0154
#define Z_EN_KAKASI3_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_kakasi3_s z_en_kakasi3_t;
struct z_en_kakasi3_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ SKELETON_INFO skeleton;
    /* 0x184 */ u8 adult_frag;
    /* 0x185 */ u8 return_dance_OK;
    /* 0x186 */ short message_end_code;
    /* 0x188 */ short parts_time;
    /* 0x18A */ short dance_cont;
    /* 0x18C */ short dance_timer[4];
    /* 0x194 */ short roll_dance;
    /* 0x196 */ short rundam_dance_cont;
    /* 0x198 */ short next_frag;
    /* 0x19A */ s_xyz dance_angle;
    /* 0x1A0 */ s_xyz angle_BAK;
    /* 0x1A8 */ float anime_speed;
    /* 0x1AC */ ClObjPipe acoc_pipe_info;
    /* 0x1F8 */ short camera_no;
}; /* size = 0x020C */

#endif /* __Z64OVL_Z_EN_KAKASI3__ */
