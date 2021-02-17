#ifndef __Z64OVL_Z_EN_FHG__
#define __Z64OVL_Z_EN_FHG__

#define Z_EN_FHG_ACTOR_NUMBER     0x0067
#define Z_EN_FHG_ACTOR_CATEGORY   ACTORCAT_BG
#define Z_EN_FHG_OBJECT_NUMBER    0x005A
#define Z_EN_FHG_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_fhg_s z_en_fhg_t;
struct z_en_fhg_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ u8 anm_switch;
    /* 0x13D */ u8 not_hit;
    /* 0x13E */ u8 delete_flag;
    /* 0x13F */ u8 revise_flag;
    /* 0x140 */ xyz_t eye;
    /* 0x14C */ xyz_t way;
    /* 0x158 */ xyz_t eye_spd;
    /* 0x164 */ xyz_t way_spd;
    /* 0x170 */ xyz_t camera_position2;
    /* 0x17C */ xyz_t kabe_target_p;
    /* 0x188 */ float fwork[10];
    /* 0x1B0 */ short work[10];
    /* 0x1C4 */ short timer[5];
    /* 0x1CE */ short damage_timer;
    /* 0x1D0 */ short disp_angle_y;
    /* 0x1D4 */ float ya2;
    /* 0x1D8 */ float fog_cl_R;
    /* 0x1DC */ float fog_cl_G;
    /* 0x1E0 */ float fog_cl_B;
    /* 0x1E4 */ float fog_cl_N;
    /* 0x1E8 */ float fog_cl_F;
    /* 0x1EC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1F0 */ EN_ANIM_FHG_TYPE anim_type;
    /* 0x1F4 */ Skin_AnimationWorkBuffer2 skin_awb2;
}; /* size = 0x0294 */

#endif /* __Z64OVL_Z_EN_FHG__ */
