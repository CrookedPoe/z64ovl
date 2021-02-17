#ifndef __Z64OVL_Z_EN_MK__
#define __Z64OVL_Z_EN_MK__

#define Z_EN_MK_ACTOR_NUMBER     0x00AE
#define Z_EN_MK_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MK_OBJECT_NUMBER    0x00FE
#define Z_EN_MK_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_mk_s z_en_mk_t;
struct z_en_mk_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ s_xyz joint1[13];
    /* 0x222 */ s_xyz joint2[13];
    /* 0x270 */ s_xyz neck_angle;
    /* 0x276 */ short event_list[2];
    /* 0x27A */ unshort flag;
    /* 0x27C */ short anime;
    /* 0x280 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0284 */

#endif /* __Z64OVL_Z_EN_MK__ */
