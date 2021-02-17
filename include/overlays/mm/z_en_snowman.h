#ifndef __Z64OVL_Z_EN_SNOWMAN__
#define __Z64OVL_Z_EN_SNOWMAN__

#define Z_EN_SNOWMAN_ACTOR_NUMBER     0x01E6
#define Z_EN_SNOWMAN_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_SNOWMAN_OBJECT_NUMBER    0x01C4
#define Z_EN_SNOWMAN_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_snowman_s z_en_snowman_t;
struct z_en_snowman_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ SKELETON_INFO hide_skeleton;
    /* 0x1CC */ s_xyz joint1[12];
    /* 0x214 */ s_xyz joint2[12];
    /* 0x25C */ s_xyz hide_joint1[3];
    /* 0x26E */ s_xyz hide_joint2[3];
    /* 0x280 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x284 */ void (*old_process)(/* ECOFF does not store param types */);
    /* 0x288 */ unsigned char ball_flg;
    /* 0x289 */ unsigned char return_num;
    /* 0x28A */ unsigned char wall_flg;
    /* 0x28B */ unsigned char damage_eff_kind;
    /* 0x28C */ short timer;
    /* 0x28E */ short aim_angle_y;
    /* 0x290 */ short break_timer;
    /* 0x294 */ float base_scale;
    /* 0x298 */ float work;
    /* 0x29C */ float attack_area;
    /* 0x2A0 */ float damage_eff_alpha;
    /* 0x2A4 */ float damage_eff_scale;
    /* 0x2A8 */ xyz_t aim_pos;
    /* 0x2B4 */ xyz_t ball_pos;
    /* 0x2C0 */ xyz_t shape_pos[9];
    /* 0x32C */ ClObjPipe all_pipe;
}; /* size = 0x0378 */

#endif /* __Z64OVL_Z_EN_SNOWMAN__ */
