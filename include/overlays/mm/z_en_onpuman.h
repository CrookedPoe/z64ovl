#ifndef __Z64OVL_Z_EN_ONPUMAN__
#define __Z64OVL_Z_EN_ONPUMAN__

#define Z_EN_ONPUMAN_ACTOR_NUMBER     0x01DF
#define Z_EN_ONPUMAN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ONPUMAN_OBJECT_NUMBER    0x0001
#define Z_EN_ONPUMAN_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_onpuman_s z_en_onpuman_t;
struct z_en_onpuman_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[17];
    /* 0x1EE */ s_xyz joint2[17];
    /* 0x254 */ ClObjPipe pipe_info;
    /* 0x2A0 */ ACTOR* onpu;
    /* 0x2A4 */ unshort flag;
    /* 0x2A8 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02AC */

#endif /* __Z64OVL_Z_EN_ONPUMAN__ */
