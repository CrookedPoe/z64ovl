#ifndef __Z64OVL_Z_EN_KAME__
#define __Z64OVL_Z_EN_KAME__

#define Z_EN_KAME_ACTOR_NUMBER     0x01BA
#define Z_EN_KAME_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_KAME_OBJECT_NUMBER    0x01A6
#define Z_EN_KAME_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_kame_s z_en_kame_t;
struct z_en_kame_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[13];
    /* 0x1D6 */ s_xyz joint2[13];
    /* 0x224 */ SKELETON_INFO attack_skeleton;
    /* 0x268 */ s_xyz attack_joint1[4];
    /* 0x280 */ s_xyz attack_joint2[4];
    /* 0x298 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x29C */ unsigned char eye_tex;
    /* 0x29D */ unsigned char damage_eff_kind;
    /* 0x29E */ short timer;
    /* 0x2A0 */ short se_timer;
    /* 0x2A2 */ short damage_timer;
    /* 0x2A4 */ short aim_angle_y;
    /* 0x2A6 */ short rot_angle_speed;
    /* 0x2A8 */ float part_scale_y;
    /* 0x2AC */ float part_scale_xz;
    /* 0x2B0 */ float damage_eff_alpha;
    /* 0x2B4 */ float damage_eff_scale;
    /* 0x2B8 */ float damage_eff_scale2;
    /* 0x2BC */ xyz_t aim_pos;
    /* 0x2C8 */ xyz_t shape_pos[10];
    /* 0x340 */ ClObjPipe all_pipe;
}; /* size = 0x038C */

#endif /* __Z64OVL_Z_EN_KAME__ */
