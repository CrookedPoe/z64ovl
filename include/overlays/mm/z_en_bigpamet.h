#ifndef __Z64OVL_Z_EN_BIGPAMET__
#define __Z64OVL_Z_EN_BIGPAMET__

#define Z_EN_BIGPAMET_ACTOR_NUMBER     0x0144
#define Z_EN_BIGPAMET_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_BIGPAMET_OBJECT_NUMBER    0x01A6
#define Z_EN_BIGPAMET_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_bigpamet_s z_en_bigpamet_t;
struct z_en_bigpamet_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[13];
    /* 0x1D6 */ s_xyz joint2[13];
    /* 0x224 */ SKELETON_INFO attack_skeleton;
    /* 0x268 */ s_xyz attack_joint1[4];
    /* 0x280 */ s_xyz attack_joint2[4];
    /* 0x298 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x29C */ unsigned char eye_tex;
    /* 0x29E */ short timer;
    /* 0x2A0 */ short aim_angle_y;
    /* 0x2A2 */ short eff_timer;
    /* 0x2A4 */ float part_scale_y;
    /* 0x2A8 */ float part_scale_xz;
    /* 0x2AC */ float body_pos_y;
    /* 0x2B0 */ ClObjPipe all_pipe;
    /* 0x2FC */ Bigpamet_Effect rock_eff[20];
}; /* size = 0x05CC */

#endif /* __Z64OVL_Z_EN_BIGPAMET__ */
