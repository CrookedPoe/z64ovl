#ifndef __Z64OVL_Z_OBJ_SPINYROLL__
#define __Z64OVL_Z_OBJ_SPINYROLL__

#define Z_OBJ_SPINYROLL_ACTOR_NUMBER     0x013F
#define Z_OBJ_SPINYROLL_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_OBJ_SPINYROLL_OBJECT_NUMBER    0x0166
#define Z_OBJ_SPINYROLL_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_obj_spinyroll_s z_obj_spinyroll_t;
struct z_obj_spinyroll_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ ClObjTris tris;
    /* 0x17C */ ClObjTrisElem tris_elem[6];
    /* 0x3A4 */ SpinyrollChkInfo chk_info;
    /* 0x4A0 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x4A4 */ float aim_speed;
    /* 0x4A8 */ int now_dir;
    /* 0x4AC */ xyz_t pos[2];
    /* 0x4C4 */ xyz_t dir_vec;
    /* 0x4D0 */ float offset_y;
    /* 0x4D4 */ float bump_power;
    /* 0x4D8 */ short bump_angle;
    /* 0x4DA */ short rot_speed;
    /* 0x4DC */ short rot_aim_speed;
    /* 0x4DE */ short rot_accel;
    /* 0x4E0 */ short rot_angle;
    /* 0x4E2 */ short wait_timer;
}; /* size = 0x04E4 */

#endif /* __Z64OVL_Z_OBJ_SPINYROLL__ */
