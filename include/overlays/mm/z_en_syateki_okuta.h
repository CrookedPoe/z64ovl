#ifndef __Z64OVL_Z_EN_SYATEKI_OKUTA__
#define __Z64OVL_Z_EN_SYATEKI_OKUTA__

#define Z_EN_SYATEKI_OKUTA_ACTOR_NUMBER     0x014F
#define Z_EN_SYATEKI_OKUTA_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_SYATEKI_OKUTA_OBJECT_NUMBER    0x0005
#define Z_EN_SYATEKI_OKUTA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_syateki_okuta_s z_en_syateki_okuta_t;
struct z_en_syateki_okuta_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe all_pipe;
    /* 0x1D8 */ xyz_t head_scale;
    /* 0x1E4 */ s_xyz joint1[16];
    /* 0x244 */ s_xyz joint2[16];
    /* 0x2A4 */ short dead_timer;
    /* 0x2A6 */ short okuta_type;
    /* 0x2A8 */ short alive_flag;
    /* 0x2AA */ short maru_peke_alpha;
}; /* size = 0x02AC */

#endif /* __Z64OVL_Z_EN_SYATEKI_OKUTA__ */
