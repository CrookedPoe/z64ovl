#ifndef __Z64OVL_Z_OBJ_ARMOS__
#define __Z64OVL_Z_OBJ_ARMOS__

#define Z_OBJ_ARMOS_ACTOR_NUMBER     0x0105
#define Z_OBJ_ARMOS_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_ARMOS_OBJECT_NUMBER    0x0030
#define Z_OBJ_ARMOS_FLAGS            (ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_PRESS_SWITCH)

typedef struct z_obj_armos_s z_obj_armos_t;
struct z_obj_armos_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ SKELETON_INFO skeleton;
    /* 0x1A0 */ s_xyz joint1[14];
    /* 0x1F4 */ s_xyz joint2[14];
    /* 0x248 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x24C */ int bgcheck_flag;
    /* 0x250 */ xyz_t shadow_pos;
    /* 0x25C */ float* slip_pos_ptr;
    /* 0x260 */ float slip_aim_pos;
    /* 0x264 */ short slip_power_dir;
    /* 0x266 */ short dir_power[4];
    /* 0x26E */ short now_x;
    /* 0x270 */ short now_z;
}; /* size = 0x0274 */

#endif /* __Z64OVL_Z_OBJ_ARMOS__ */
