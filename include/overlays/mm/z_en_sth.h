#ifndef __Z64OVL_Z_EN_STH__
#define __Z64OVL_Z_EN_STH__

#define Z_EN_STH_ACTOR_NUMBER     0x020B
#define Z_EN_STH_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_STH_OBJECT_NUMBER    0x0001
#define Z_EN_STH_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_sth_s z_en_sth_t;
struct z_en_sth_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ s_xyz joint1[16];
    /* 0x234 */ s_xyz joint2[16];
    /* 0x294 */ s_xyz neck_angle;
    /* 0x29A */ short anime;
    /* 0x29C */ unshort flag;
    /* 0x29E */ unsigned char bank;
    /* 0x29F */ unsigned char kamen;
    /* 0x2A0 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x02A4 */

#endif /* __Z64OVL_Z_EN_STH__ */
