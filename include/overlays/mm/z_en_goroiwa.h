#ifndef __Z64OVL_Z_EN_GOROIWA__
#define __Z64OVL_Z_EN_GOROIWA__

#define Z_EN_GOROIWA_ACTOR_NUMBER     0x0099
#define Z_EN_GOROIWA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_GOROIWA_OBJECT_NUMBER    0x00EF
#define Z_EN_GOROIWA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_goroiwa_s z_en_goroiwa_t;
struct z_en_goroiwa_s {
    /* 0x0 */ ACTOR a;
    /* 0x144 */ ClObjJntSph sph;
    /* 0x164 */ ClObjJntSphElem elem;
    /* 0x1A4 */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x1A8 */ xyz_t speed_wk_vec;
    /* 0x1B4 */ xyz_t old_rot_axis;
    /* 0x1C0 */ float old_omg;
    /* 0x1C4 */ float omg_k;
    /* 0x1C8 */ short timer;
    /* 0x1CA */ short bound_cnt;
    /* 0x1CC */ short cl_cancel_timer;
    /* 0x1CE */ short snow_eff_angle;
    /* 0x1D0 */ s_xyz* path_pos_0;
    /* 0x1D4 */ short path_last_idx;
    /* 0x1D6 */ short path_now_idx;
    /* 0x1D8 */ short path_next_idx;
    /* 0x1DA */ short path_dir;
    /* 0x1DC */ float world_r;
    /* 0x1E0 */ float scale_add;
    /* 0x1E4 */ signed char speed_type;
    /* 0x1E5 */ unsigned char flag;
    /* 0x1E6 */ signed char melt_flag;
    /* 0x1E7 */ signed char no_snow_hm_timer;
    /* 0x1E8 */ GrBreak brk[2];
    /* 0x248 */ int tire_index;
}; /* size = 0x024C */

#endif /* __Z64OVL_Z_EN_GOROIWA__ */
