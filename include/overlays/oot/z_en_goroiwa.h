#ifndef __Z64OVL_Z_EN_GOROIWA__
#define __Z64OVL_Z_EN_GOROIWA__

#define Z_EN_GOROIWA_ACTOR_NUMBER     0x0130
#define Z_EN_GOROIWA_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_GOROIWA_OBJECT_NUMBER    0x011F
#define Z_EN_GOROIWA_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_goroiwa_s z_en_goroiwa_t;
struct z_en_goroiwa_s {
    /* 0x0 */ ACTOR a;
    /* 0x13C */ void (*moveProc)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjJntSph sph;
    /* 0x160 */ ClObjJntSphElem elem;
    /* 0x1A0 */ xyz_t old_rot_axis;
    /* 0x1AC */ float old_omg;
    /* 0x1B0 */ float omg_k;
    /* 0x1B4 */ short timer;
    /* 0x1B6 */ short bound_cnt;
    /* 0x1B8 */ short cl_cancel_timer;
    /* 0x1BA */ short path_last_idx;
    /* 0x1BC */ short path_now_idx;
    /* 0x1BE */ short path_next_idx;
    /* 0x1C0 */ short path_dir;
    /* 0x1C2 */ unsigned char speed_type;
    /* 0x1C3 */ unsigned char flag;
}; /* size = 0x01D4 */

#endif /* __Z64OVL_Z_EN_GOROIWA__ */
