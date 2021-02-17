#ifndef __Z64OVL_Z_EN_GOMA__
#define __Z64OVL_Z_EN_GOMA__

#define Z_EN_GOMA_ACTOR_NUMBER     0x0028
#define Z_EN_GOMA_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_GOMA_OBJECT_NUMBER    0x001E
#define Z_EN_GOMA_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_goma_s z_en_goma_t;
struct z_en_goma_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[24];
    /* 0x210 */ s_xyz joint2[24];
    /* 0x2A0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2A4 */ short ground_angle_X;
    /* 0x2A6 */ short ground_angle_Z;
    /* 0x2A8 */ short work[10];
    /* 0x2BC */ short timer;
    /* 0x2C0 */ float fwork[10];
    /* 0x2E8 */ short mahi_timer;
    /* 0x2EC */ xyz_t shock_spd;
    /* 0x2F8 */ Gfx* shape;
    /* 0x2FC */ ClObjPipe atoc_pipe_info;
    /* 0x348 */ ClObjPipe ac_pipe_info;
}; /* size = 0x03A4 */

#endif /* __Z64OVL_Z_EN_GOMA__ */
