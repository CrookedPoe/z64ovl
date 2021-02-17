#ifndef __Z64OVL_Z_EN_RAF__
#define __Z64OVL_Z_EN_RAF__

#define Z_EN_RAF_ACTOR_NUMBER     0x013A
#define Z_EN_RAF_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_RAF_OBJECT_NUMBER    0x0161
#define Z_EN_RAF_FLAGS            (ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_raf_s z_en_raf_t;
struct z_en_raf_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ SKELETON_INFO skeleton;
    /* 0x1A0 */ s_xyz joint1[12];
    /* 0x1E8 */ s_xyz joint2[12];
    /* 0x230 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x234 */ xyz_t scale[12];
    /* 0x2C4 */ xyz_t scale_MAX[12];
    /* 0x354 */ s_xyz mogu_scale[12];
    /* 0x39C */ short eating_frag;
    /* 0x39E */ u8 deep_frag;
    /* 0x3A0 */ float end_frame;
    /* 0x3A4 */ float scale_add;
    /* 0x3A8 */ float purpose_plus;
    /* 0x3AC */ float purpose_deep;
    /* 0x3B0 */ float work_angle;
    /* 0x3B4 */ short timer;
    /* 0x3B6 */ short dead_timer;
    /* 0x3B8 */ short ripple_timer;
    /* 0x3BA */ short return_time;
    /* 0x3BC */ short haku_angle;
    /* 0x3BE */ short index;
    /* 0x3C0 */ short ende_bit;
    /* 0x3C2 */ short scale_stat;
    /* 0x3C4 */ short mogu_count;
    /* 0x3C6 */ short stat_mode;
    /* 0x3C8 */ short mesh_count[2];
    /* 0x3CC */ short mesh_count2[2];
    /* 0x3D0 */ ClObjPipe acoc_pipe_info;
    /* 0x41C */ EN_RAF_EFF en_raf_eff[31];
}; /* size = 0x0AE4 */

#endif /* __Z64OVL_Z_EN_RAF__ */
