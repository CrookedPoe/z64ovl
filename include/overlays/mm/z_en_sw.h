#ifndef __Z64OVL_Z_EN_SW__
#define __Z64OVL_Z_EN_SW__

#define Z_EN_SW_ACTOR_NUMBER     0x0050
#define Z_EN_SW_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_SW_OBJECT_NUMBER    0x0020
#define Z_EN_SW_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_sw_s z_en_sw_t;
struct z_en_sw_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjSph sph_info;
    /* 0x1E4 */ Path_Info* rails;
    /* 0x1E8 */ s_xyz joint[30][2];
    /* 0x350 */ xyz_t direction;
    /* 0x35C */ xyz_t side;
    /* 0x368 */ xyz_t head_up;
    /* 0x374 */ xyz_t srch_pos;
    /* 0x380 */ xyz_t effc_pos[12];
    /* 0x410 */ unsigned short statf;
    /* 0x412 */ unsigned char effc_col;
    /* 0x414 */ float distance;
    /* 0x418 */ float effc_smk[12];
    /* 0x448 */ float yspd_max;
    /* 0x44C */ float oldSpeed;
    /* 0x450 */ float signf;
    /* 0x454 */ short timer;
    /* 0x456 */ short count;
    /* 0x458 */ short damg_tmr;
    /* 0x45A */ short stop_tmr;
    /* 0x45C */ short dead_tmr;
    /* 0x45E */ short wait_tmr;
    /* 0x460 */ short wait_max;
    /* 0x462 */ short effc_cnt;
    /* 0x464 */ short effc_tmr[12];
    /* 0x47C */ short effc_max[12];
    /* 0x494 */ short actAngle;
    /* 0x496 */ short aimAngle;
    /* 0x498 */ short mth_name;
    /* 0x49C */ int plus_idx;
    /* 0x4A0 */ int path_idx;
}; /* size = 0x04A4 */

#endif /* __Z64OVL_Z_EN_SW__ */
