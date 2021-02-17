#ifndef __Z64OVL_Z_OBJ_TOGE__
#define __Z64OVL_Z_OBJ_TOGE__

#define Z_OBJ_TOGE_ACTOR_NUMBER     0x0103
#define Z_OBJ_TOGE_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_TOGE_OBJECT_NUMBER    0x0064
#define Z_OBJ_TOGE_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_toge_s z_obj_toge_t;
struct z_obj_toge_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe;
    /* 0x190 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x194 */ int now_dir;
    /* 0x198 */ xyz_t pos[2];
    /* 0x1B0 */ short rot_power;
    /* 0x1B2 */ short stop_timer;
    /* 0x1B4 */ unsigned char check_do_flag;
    /* 0x1B8 */ float check_center_x;
    /* 0x1BC */ float check_center_z;
    /* 0x1C0 */ float check_dist_x;
    /* 0x1C4 */ float check_dist_z;
    /* 0x1C8 */ float check_cos;
    /* 0x1CC */ float check_sin;
}; /* size = 0x01D0 */

#endif /* __Z64OVL_Z_OBJ_TOGE__ */
