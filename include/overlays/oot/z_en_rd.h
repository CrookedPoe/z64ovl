#ifndef __Z64OVL_Z_EN_RD__
#define __Z64OVL_Z_EN_RD__

#define Z_EN_RD_ACTOR_NUMBER     0x0090
#define Z_EN_RD_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_RD_OBJECT_NUMBER    0x0098
#define Z_EN_RD_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT)

typedef struct z_en_rd_s z_en_rd_t;
struct z_en_rd_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ En_mag_s en_mag;
    /* 0x178 */ SKELETON_INFO skeleton;
    /* 0x1BC */ s_xyz joint1[26];
    /* 0x258 */ s_xyz joint2[26];
    /* 0x2F4 */ u8 work0;
    /* 0x2F5 */ u8 work1;
    /* 0x2F6 */ u8 timer0;
    /* 0x2F7 */ u8 timer1;
    /* 0x2F8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2FC */ short mode_timer;
    /* 0x2FE */ short neck_angle;
    /* 0x300 */ short west_angle;
    /* 0x302 */ short arg_data2;
    /* 0x304 */ short alpha_cnt;
    /* 0x306 */ short sun_timer;
    /* 0x308 */ u8 sun_flg;
    /* 0x309 */ u8 dam_time;
    /* 0x30A */ u8 timer;
    /* 0x30B */ unsigned char mode;
    /* 0x30C */ unsigned char reaction_buf;
    /* 0x30D */ unsigned char combo_cnt_old;
    /* 0x30E */ unsigned char combo_cnt_trg;
    /* 0x310 */ ClObjPipe body_pipe;
}; /* size = 0x036C */

#endif /* __Z64OVL_Z_EN_RD__ */
