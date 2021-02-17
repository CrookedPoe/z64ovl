#ifndef __Z64OVL_Z_EN_SYATEKI_MAN__
#define __Z64OVL_Z_EN_SYATEKI_MAN__

#define Z_EN_SYATEKI_MAN_ACTOR_NUMBER     0x00C1
#define Z_EN_SYATEKI_MAN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SYATEKI_MAN_OBJECT_NUMBER    0x005B
#define Z_EN_SYATEKI_MAN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_syateki_man_s z_en_syateki_man_t;
struct z_en_syateki_man_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[9];
    /* 0x1B6 */ s_xyz joint2[9];
    /* 0x1EC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1F0 */ s_xyz neck_angle;
    /* 0x1F6 */ s_xyz body_angle;
    /* 0x1FC */ short eyesID;
    /* 0x1FE */ short eyesTM;
    /* 0x200 */ short talk_cont;
    /* 0x202 */ short message_end_code;
    /* 0x204 */ short next_frag;
    /* 0x206 */ short timer;
    /* 0x208 */ int item_frag;
    /* 0x20C */ u8 retry_frag;
    /* 0x210 */ ACTOR* Mother_Ac;
    /* 0x214 */ void* eyesProc;
    /* 0x218 */ short camera_no;
}; /* size = 0x022C */

#endif /* __Z64OVL_Z_EN_SYATEKI_MAN__ */
