#ifndef __Z64OVL_Z_EN_MK__
#define __Z64OVL_Z_EN_MK__

#define Z_EN_MK_ACTOR_NUMBER     0x014A
#define Z_EN_MK_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MK_OBJECT_NUMBER    0x0132
#define Z_EN_MK_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_mk_s z_en_mk_t;
struct z_en_mk_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ ClObjPipe pipe_info;
    /* 0x188 */ SKELETON_INFO skeleton;
    /* 0x1CC */ s_xyz joint1[13];
    /* 0x21A */ s_xyz joint2[13];
    /* 0x268 */ s_xyz neck_angle;
    /* 0x26E */ unshort flag;
    /* 0x270 */ short swim;
    /* 0x272 */ unshort timer;
    /* 0x274 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0288 */

#endif /* __Z64OVL_Z_EN_MK__ */
