#ifndef __Z64OVL_Z_BG_DY_YOSEIZO__
#define __Z64OVL_Z_BG_DY_YOSEIZO__

#define Z_BG_DY_YOSEIZO_ACTOR_NUMBER     0x0130
#define Z_BG_DY_YOSEIZO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_DY_YOSEIZO_OBJECT_NUMBER    0x0008
#define Z_BG_DY_YOSEIZO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_bg_dy_yoseizo_s z_bg_dy_yoseizo_t;
struct z_bg_dy_yoseizo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ s_xyz joint1[28];
    /* 0x234 */ s_xyz joint2[28];
    /* 0x2DC */ s_xyz neck_angle;
    /* 0x2E2 */ s_xyz body_angle;
    /* 0x2E8 */ ACTOR* Actor_eff;
    /* 0x2EC */ float max_Ypos;
    /* 0x2F0 */ float wrk_speed;
    /* 0x2F4 */ float wrk_scale_speed;
    /* 0x2F8 */ short work_angle;
    /* 0x2FA */ short eye_cont;
    /* 0x2FC */ short mouth_cont;
    /* 0x2FE */ short eye_timer;
    /* 0x300 */ short wait_timer;
    /* 0x302 */ unshort flag;
    /* 0x304 */ YOSEIZO_EFF yoseizo_eff[200];
}; /* size = 0x3504 */

#endif /* __Z64OVL_Z_BG_DY_YOSEIZO__ */
