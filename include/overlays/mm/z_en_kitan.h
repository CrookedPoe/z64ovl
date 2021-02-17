#ifndef __Z64OVL_Z_EN_KITAN__
#define __Z64OVL_Z_EN_KITAN__

#define Z_EN_KITAN_ACTOR_NUMBER     0x028C
#define Z_EN_KITAN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_KITAN_OBJECT_NUMBER    0x0264
#define Z_EN_KITAN_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_kitan_s z_en_kitan_t;
struct z_en_kitan_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[21];
    /* 0x206 */ s_xyz joint2[21];
    /* 0x284 */ ClObjPipe pipe_info;
    /* 0x2D0 */ u32 use_message;
    /* 0x2D4 */ unshort flag;
    /* 0x2D6 */ short seikai;
    /* 0x2D8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02DC */

#endif /* __Z64OVL_Z_EN_KITAN__ */
