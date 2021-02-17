#ifndef __Z64OVL_Z_EN_ZL4__
#define __Z64OVL_Z_EN_ZL4__

#define Z_EN_ZL4_ACTOR_NUMBER     0x00FD
#define Z_EN_ZL4_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_ZL4_OBJECT_NUMBER    0x0192
#define Z_EN_ZL4_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_zl4_s z_en_zl4_t;
struct z_en_zl4_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[22];
    /* 0x20C */ s_xyz joint2[22];
    /* 0x290 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x294 */ ClObjPipe pipe_info;
    /* 0x2E0 */ short anime_no;
    /* 0x2E4 */ xyz_t statue_pos[1];
    /* 0x2F0 */ unsigned int alpha;
}; /* size = 0x02F4 */

#endif /* __Z64OVL_Z_EN_ZL4__ */
