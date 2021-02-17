#ifndef __Z64OVL_Z_EN_HORSE_NORMAL__
#define __Z64OVL_Z_EN_HORSE_NORMAL__

#define Z_EN_HORSE_NORMAL_ACTOR_NUMBER     0x003C
#define Z_EN_HORSE_NORMAL_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_HORSE_NORMAL_OBJECT_NUMBER    0x0027
#define Z_EN_HORSE_NORMAL_FLAGS            (ACTORFLAG_NOP)

typedef struct z_en_horse_normal_s z_en_horse_normal_t;
struct z_en_horse_normal_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ EN_HN_MODE mode;
    /* 0x140 */ EN_HN_ANIM_TYPE anim_type;
    /* 0x144 */ Skin_AnimationWorkBuffer2 skin_awb2;
    /* 0x1D4 */ unsigned short status;
    /* 0x1D8 */ xyz_t doppel_camera_pos;
    /* 0x1E4 */ xyz_t doppel_sound_head_pos;
    /* 0x1F0 */ int sound_cnt;
    /* 0x1F4 */ xyz_t sound_head_pos;
    /* 0x200 */ int rail_wrk;
    /* 0x204 */ float demo_start_y;
    /* 0x208 */ float acc;
    /* 0x20C */ short rot_speed;
    /* 0x20E */ short rot_acc;
    /* 0x210 */ float front_y;
    /* 0x214 */ float back_y;
    /* 0x218 */ ClObjPipe oc_pipe_info;
    /* 0x264 */ ClObjJntSph oc_jntsph_info;
    /* 0x284 */ ClObjJntSphElem sph[1];
    /* 0x2C4 */ ClObjPipe doppel_oc_pipe_info;
    /* 0x310 */ FreeMode free_mode;
    /* 0x314 */ int path_counter;
}; /* size = 0x0328 */

#endif /* __Z64OVL_Z_EN_HORSE_NORMAL__ */
