#ifndef __Z64OVL_Z_OBJ_VSPINYROLL__
#define __Z64OVL_Z_OBJ_VSPINYROLL__

#define Z_OBJ_VSPINYROLL_ACTOR_NUMBER     0x0156
#define Z_OBJ_VSPINYROLL_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_VSPINYROLL_OBJECT_NUMBER    0x0166
#define Z_OBJ_VSPINYROLL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_vspinyroll_s z_obj_vspinyroll_t;
struct z_obj_vspinyroll_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjPipe pipe;
    /* 0x1A8 */ VspinyrollChkInfo chk_info;
    /* 0x390 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x394 */ float aim_speed;
    /* 0x398 */ int now_dir;
    /* 0x39C */ xyz_t pos[2];
    /* 0x3B4 */ xyz_t dir_vec;
    /* 0x3C0 */ short rot_speed;
    /* 0x3C2 */ short rot_aim_speed;
    /* 0x3C4 */ short rot_accel;
    /* 0x3C6 */ short rot_angle;
    /* 0x3C8 */ short wait_timer;
}; /* size = 0x03CC */

#endif /* __Z64OVL_Z_OBJ_VSPINYROLL__ */
