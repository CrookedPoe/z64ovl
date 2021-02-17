#ifndef __Z64OVL_Z_EN_LIFT_NUTS__
#define __Z64OVL_Z_EN_LIFT_NUTS__

#define Z_EN_LIFT_NUTS_ACTOR_NUMBER     0x01C9
#define Z_EN_LIFT_NUTS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_LIFT_NUTS_OBJECT_NUMBER    0x01E5
#define Z_EN_LIFT_NUTS_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_lift_nuts_s z_en_lift_nuts_t;
struct z_en_lift_nuts_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ xyz_t avoid_pos;
    /* 0x1E4 */ int eye_indx;
    /* 0x1E8 */ int anime_no;
    /* 0x1EC */ short* common_value_s;
    /* 0x1F0 */ s_xyz joint1[28];
    /* 0x298 */ s_xyz joint2[28];
    /* 0x340 */ s_xyz neck_angle;
    /* 0x346 */ s_xyz body_angle;
    /* 0x34C */ short old_message_no;
    /* 0x34E */ short game_owner_flag;
    /* 0x350 */ short lupy_count;
    /* 0x352 */ short old_lupy_count;
    /* 0x354 */ short mode_timer;
    /* 0x356 */ short shut_out_message;
}; /* size = 0x0358 */

#endif /* __Z64OVL_Z_EN_LIFT_NUTS__ */
