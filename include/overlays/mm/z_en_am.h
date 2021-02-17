#ifndef __Z64OVL_Z_EN_AM__
#define __Z64OVL_Z_EN_AM__

#define Z_EN_AM_ACTOR_NUMBER     0x0032
#define Z_EN_AM_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_AM_OBJECT_NUMBER    0x0030
#define Z_EN_AM_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_am_s z_en_am_t;
struct z_en_am_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[14];
    /* 0x1DC */ s_xyz joint2[14];
    /* 0x230 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x234 */ unsigned char env_a;
    /* 0x236 */ short timer;
    /* 0x238 */ short move_timer;
    /* 0x23A */ short attack_flg;
    /* 0x23C */ short aim_angle_y;
    /* 0x240 */ float aim_speedF;
    /* 0x244 */ float damage_eff_alpha;
    /* 0x248 */ float damage_eff_scale;
    /* 0x24C */ xyz_t shape_pos[13];
    /* 0x2E8 */ ClObjPipe all_pipe;
    /* 0x334 */ ClObjPipe shield_pipe;
}; /* size = 0x0380 */

#endif /* __Z64OVL_Z_EN_AM__ */
