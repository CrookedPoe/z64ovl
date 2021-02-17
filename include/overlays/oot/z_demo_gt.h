#ifndef __Z64OVL_Z_DEMO_GT__
#define __Z64OVL_Z_DEMO_GT__

#define Z_DEMO_GT_ACTOR_NUMBER     0x0174
#define Z_DEMO_GT_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_DEMO_GT_OBJECT_NUMBER    0x014C
#define Z_DEMO_GT_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_demo_gt_s z_demo_gt_t;
struct z_demo_gt_s {
    /* 0x0 */ MoveBG_Actor moveBG_actor;
    /* 0x154 */ int main_mode;
    /* 0x158 */ int draw_mode;
    /* 0x15C */ s_xyz offset_angle;
    /* 0x162 */ short lay_angle;
    /* 0x164 */ short lay_roll_speed;
    /* 0x168 */ int color1[4];
    /* 0x178 */ int color2[4];
    /* 0x188 */ int scroll_pointY[4];
}; /* size = 0x01A8 */

#endif /* __Z64OVL_Z_DEMO_GT__ */
