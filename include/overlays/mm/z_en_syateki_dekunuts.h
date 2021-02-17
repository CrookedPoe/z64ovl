#ifndef __Z64OVL_Z_EN_SYATEKI_DEKUNUTS__
#define __Z64OVL_Z_EN_SYATEKI_DEKUNUTS__

#define Z_EN_SYATEKI_DEKUNUTS_ACTOR_NUMBER     0x0145
#define Z_EN_SYATEKI_DEKUNUTS_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_SYATEKI_DEKUNUTS_OBJECT_NUMBER    0x0040
#define Z_EN_SYATEKI_DEKUNUTS_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_syateki_dekunuts_s z_en_syateki_dekunuts_t;
struct z_en_syateki_dekunuts_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe acoc_pipe;
    /* 0x1D8 */ short head_up_timer;
    /* 0x1DA */ short wait_timer;
    /* 0x1DC */ short head_up_count;
    /* 0x1DE */ short aim_angle_y;
    /* 0x1E0 */ short attack_cnt;
    /* 0x1E2 */ short alive_flag;
    /* 0x1E4 */ s_xyz* path_ptr;
    /* 0x1E8 */ short path_no;
    /* 0x1EA */ short path_max;
    /* 0x1EC */ short draw_plant_flag;
    /* 0x1EE */ short head_down_time;
    /* 0x1F0 */ short syateki_dnuts_type;
    /* 0x1F2 */ short head_angle_x;
    /* 0x1F4 */ s_xyz joint1[10];
    /* 0x230 */ s_xyz joint2[10];
    /* 0x26C */ unsigned char se_flg;
    /* 0x26D */ unsigned char reverse_timer;
}; /* size = 0x0270 */

#endif /* __Z64OVL_Z_EN_SYATEKI_DEKUNUTS__ */
