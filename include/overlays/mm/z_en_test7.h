#ifndef __Z64OVL_Z_EN_TEST7__
#define __Z64OVL_Z_EN_TEST7__

#define Z_EN_TEST7_ACTOR_NUMBER     0x01CE
#define Z_EN_TEST7_ACTOR_CATEGORY   ACTORCAT_ITEM
#define Z_EN_TEST7_OBJECT_NUMBER    0x0001
#define Z_EN_TEST7_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_SFX_SYSTEM | ACTORFLAG_SFX_FIXED | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_test7_s z_en_test7_t;
struct z_en_test7_s {
    /* 0x0 */ float anm_counter;
    /* 0x4 */ float scl_counter;
    /* 0x8 */ float xz_scale;
    /* 0xC */ float y_scale;
    /* 0x10 */ short rot_y;
    /* 0x0 */ cKF_SkeletonInfo_c kf_si;
    /* 0x30 */ s_xyz joint[114];
    /* 0x2DC */ s_xyz morph[114];
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ unsigned long status;
    /* 0x148 */ En_Test7_Actor_Ball ball;
    /* 0x15C */ En_Test7_Actor_Fether fether;
    /* 0x18CC */ En_Test7_Actor_Wing wing;
    /* 0x1E54 */ int main_counter;
    /* 0x1E58 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1E5C */ void (*sub_process)(/* ECOFF does not store param types */);
    /* 0x1E60 */ xyz_t old_eye_pos;
    /* 0x1E6C */ xyz_t old_center_pos;
    /* 0x1E78 */ float old_fovy;
    /* 0x1E7C */ Light_list* light_list;
    /* 0x1E80 */ Light_data light_data;
    /* 0x1E8E */ short pldefault_shape_angle_sy;
    /* 0x1E90 */ float pldefault_scale_x;
    /* 0x1E94 */ float pldefault_scale_z;
    /* 0x1E98 */ void (*store_draw_proc)(/* ECOFF does not store param types */);
}; /* size = 0x1E9C */

#endif /* __Z64OVL_Z_EN_TEST7__ */
