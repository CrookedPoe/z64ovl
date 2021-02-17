#ifndef __Z64OVL_Z_EN_ST__
#define __Z64OVL_Z_EN_ST__

#define Z_EN_ST_ACTOR_NUMBER     0x0024
#define Z_EN_ST_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_ST_OBJECT_NUMBER    0x0020
#define Z_EN_ST_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_ARROW_CARRY | ACTORFLAG_BODY_HIT)

typedef struct z_en_st_s z_en_st_t;
struct z_en_st_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned short statf;
    /* 0x18E */ unsigned char effc_col;
    /* 0x190 */ ClObjPipe pipeinf1;
    /* 0x1DC */ ClObjPipe pipeinf2;
    /* 0x228 */ ClObjPipe pipeinf3;
    /* 0x274 */ ClObjPipe pipeinf4;
    /* 0x2C0 */ signed char bnkID;
    /* 0x2C1 */ signed char color;
    /* 0x2C4 */ float yuragi_f;
    /* 0x2C8 */ float signf;
    /* 0x2CC */ float y_spdSub;
    /* 0x2D0 */ float yspd_max;
    /* 0x2D4 */ float y_spd;
    /* 0x2D8 */ float eyes_cnt;
    /* 0x2DC */ float effc_smk[12];
    /* 0x30C */ short count;
    /* 0x30E */ short timer;
    /* 0x310 */ short roll_tmr;
    /* 0x312 */ short stop_tmr;
    /* 0x314 */ short damg_tmr;
    /* 0x316 */ short attk_tmr;
    /* 0x318 */ short dead_tmr;
    /* 0x31A */ short effc_cnt;
    /* 0x31C */ short effc_tmr[12];
    /* 0x334 */ short effc_max[12];
    /* 0x34C */ xyz_t eyes_col;
    /* 0x358 */ xyz_t effc_pos[12];
    /* 0x3E8 */ s_xyz joint[30][2];
}; /* size = 0x0550 */

#endif /* __Z64OVL_Z_EN_ST__ */
