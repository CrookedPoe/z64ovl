#ifndef __Z64OVL_Z_EN_MS__
#define __Z64OVL_Z_EN_MS__

#define Z_EN_MS_ACTOR_NUMBER     0x00A5
#define Z_EN_MS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_MS_OBJECT_NUMBER    0x00F4
#define Z_EN_MS_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ms_s z_en_ms_t;
struct z_en_ms_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[9];
    /* 0x1BE */ s_xyz joint2[9];
    /* 0x1F4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1F8 */ ClObjPipe pipe_info;
}; /* size = 0x0244 */

#endif /* __Z64OVL_Z_EN_MS__ */
