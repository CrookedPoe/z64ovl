#ifndef __Z64OVL_Z_EN_MS__
#define __Z64OVL_Z_EN_MS__

#define Z_EN_MS_ACTOR_NUMBER     0x013E
#define Z_EN_MS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MS_OBJECT_NUMBER    0x0127
#define Z_EN_MS_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ms_s z_en_ms_t;
struct z_en_ms_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[9];
    /* 0x1B6 */ s_xyz joint2[9];
    /* 0x1EC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1F0 */ ClObjPipe pipe_info;
    /* 0x23C */ short count;
}; /* size = 0x0250 */

#endif /* __Z64OVL_Z_EN_MS__ */
