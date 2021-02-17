#ifndef __Z64OVL_Z_EN_BJI_01__
#define __Z64OVL_Z_EN_BJI_01__

#define Z_EN_BJI_01_ACTOR_NUMBER     0x0124
#define Z_EN_BJI_01_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_BJI_01_OBJECT_NUMBER    0x00DE
#define Z_EN_BJI_01_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_bji_01_s z_en_bji_01_t;
struct z_en_bji_01_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ ClObjPipe pipe_info;
    /* 0x1D8 */ s_xyz jnt[16][2];
    /* 0x298 */ int amp_no;
    /* 0x29C */ short eye_type;
    /* 0x29E */ short wink_count;
    /* 0x2A0 */ short wink_timer;
    /* 0x2A2 */ short waist_angle_x_now;
    /* 0x2A4 */ short waist_angle_y_now;
    /* 0x2A6 */ short face_angle_x_now;
    /* 0x2A8 */ short face_angle_y_now;
    /* 0x2AA */ unsigned short say_message;
    /* 0x2AC */ short event_id[1];
    /* 0x2B0 */ ACTOR* moon_stone_actor;
}; /* size = 0x02B4 */

#endif /* __Z64OVL_Z_EN_BJI_01__ */
