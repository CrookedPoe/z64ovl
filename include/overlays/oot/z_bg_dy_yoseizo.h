#ifndef __Z64OVL_Z_BG_DY_YOSEIZO__
#define __Z64OVL_Z_BG_DY_YOSEIZO__

#define Z_BG_DY_YOSEIZO_ACTOR_NUMBER     0x000B
#define Z_BG_DY_YOSEIZO_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_BG_DY_YOSEIZO_OBJECT_NUMBER    0x000A
#define Z_BG_DY_YOSEIZO_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_bg_dy_yoseizo_s z_bg_dy_yoseizo_t;
struct z_bg_dy_yoseizo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ SKELETON_INFO skeleton;
    /* 0x184 */ s_xyz joint1[28];
    /* 0x22C */ s_xyz joint2[28];
    /* 0x2D4 */ u8 light_frag;
    /* 0x2D5 */ u8 Heart_Armor_ON;
    /* 0x2D6 */ u8 kaihuku_frag;
    /* 0x2D8 */ short wait_timer;
    /* 0x2DA */ short choice_frag;
    /* 0x2DC */ short type_index;
    /* 0x2DE */ short message_end_code;
    /* 0x2E0 */ short parts_time;
    /* 0x2E2 */ short eye_1_cont;
    /* 0x2E4 */ short eye_2_cont;
    /* 0x2E6 */ short mouth_cont;
    /* 0x2E8 */ short eye_timer;
    /* 0x2EA */ short mouth_timer;
    /* 0x2EC */ short anime_frag;
    /* 0x2EE */ short demo_frag;
    /* 0x2F0 */ short mode;
    /* 0x2F2 */ short demo_timer;
    /* 0x2F4 */ short warp_in;
    /* 0x2F6 */ short life_magic_wait_timer;
    /* 0x2F8 */ float scale;
    /* 0x2FC */ float max_Ypos;
    /* 0x300 */ float min_Ypos;
    /* 0x304 */ float wrk_speed;
    /* 0x308 */ float wrk_scale_speed;
    /* 0x30C */ float purpose_pos;
    /* 0x310 */ float purpose_plus;
    /* 0x314 */ float work_angle;
    /* 0x318 */ float eye_pos;
    /* 0x31C */ float ende_frame;
    /* 0x320 */ float hani_hosei;
    /* 0x324 */ s_xyz neck_angle;
    /* 0x32A */ s_xyz body_angle;
    /* 0x330 */ ACTOR* Actor_eff;
    /* 0x334 */ ACTOR* Actor_item;
    /* 0x338 */ ClObjPipe pipe;
    /* 0x384 */ YOSEIZO_EFF yoseizo_eff[200];
}; /* size = 0x38B4 */

#endif /* __Z64OVL_Z_BG_DY_YOSEIZO__ */
