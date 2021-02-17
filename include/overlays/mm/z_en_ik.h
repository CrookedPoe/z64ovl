#ifndef __Z64OVL_Z_EN_IK__
#define __Z64OVL_Z_EN_IK__

#define Z_EN_IK_ACTOR_NUMBER     0x0084
#define Z_EN_IK_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_IK_OBJECT_NUMBER    0x00D8
#define Z_EN_IK_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_ik_s z_en_ik_t;
struct z_en_ik_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[30];
    /* 0x23C */ s_xyz joint2[30];
    /* 0x2F0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2F4 */ u8 stat_flg;
    /* 0x2F5 */ unsigned char damage_eff_kind;
    /* 0x2F6 */ short timer;
    /* 0x2F8 */ short blure_timer;
    /* 0x2FA */ short demo_camera;
    /* 0x2FC */ short ac_wait_timer;
    /* 0x300 */ int blure_effect_index;
    /* 0x304 */ float damage_eff_alpha;
    /* 0x308 */ float damage_eff_scale;
    /* 0x30C */ float damage_eff_scale2;
    /* 0x310 */ xyz_t shape_pos[13];
    /* 0x3AC */ ClObjPipe all_pipe;
    /* 0x3F8 */ ClObjSwrd at_sword;
    /* 0x478 */ ClObjTris shield_ac_tris;
    /* 0x498 */ ClObjTrisElem tris_elem[2];
    /* 0x550 */ Ik_Break_Shape break_shape[7];
}; /* size = 0x0668 */

#endif /* __Z64OVL_Z_EN_IK__ */
