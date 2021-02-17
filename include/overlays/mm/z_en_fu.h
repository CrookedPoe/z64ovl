#ifndef __Z64OVL_Z_EN_FU__
#define __Z64OVL_Z_EN_FU__

#define Z_EN_FU_ACTOR_NUMBER     0x00B5
#define Z_EN_FU_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_FU_OBJECT_NUMBER    0x0140
#define Z_EN_FU_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP | ACTORFLAG_NO_TARGET_LOCK)

typedef struct z_en_fu_s z_en_fu_t;
struct z_en_fu_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ s_xyz joint1[21];
    /* 0x256 */ s_xyz joint2[21];
    /* 0x2D4 */ ACTOR* water;
    /* 0x2D8 */ Eff_s eff[10];
    /* 0x508 */ xyz_t man_eye_pos;
    /* 0x514 */ xyz_t woman_eye_pos;
    /* 0x520 */ int path_max;
    /* 0x524 */ s_xyz man_neck_angle;
    /* 0x52A */ s_xyz woman_neck_angle;
    /* 0x530 */ s_xyz body_angle;
    /* 0x538 */ s_xyz* path_pos;
    /* 0x53C */ short eye_status;
    /* 0x53E */ short talk_flag;
    /* 0x540 */ short nuts_talk_flag;
    /* 0x542 */ short game_type;
    /* 0x544 */ short mato_profile;
    /* 0x546 */ short played_flag;
    /* 0x548 */ short hit_count;
    /* 0x54A */ short game_step;
    /* 0x54C */ short mato_max;
    /* 0x54E */ short heart_timer;
    /* 0x550 */ short neck_timer;
    /* 0x552 */ unshort old_message_no;
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ ClObjSph all_sph;
    /* 0x1B8 */ Fu_Mato_Parts parts[6];
    /* 0x2F0 */ int path_no;
    /* 0x2F4 */ int path_max;
    /* 0x2F8 */ s_xyz* path_pos;
    /* 0x2FC */ s_xyz angle_speed;
    /* 0x302 */ short alive_flag;
    /* 0x304 */ short break_timer;
    /* 0x306 */ short stop_timer;
    /* 0x308 */ short break_parts;
    /* 0x30A */ short vanish_flag;
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x160 */ ClObjSph all_sph;
    /* 0x1B8 */ Fu_Kago_Parts parts[6];
    /* 0x338 */ short break_timer;
    /* 0x33A */ short alive_flag;
    /* 0x33C */ short vanish_flag;
}; /* size = 0x0554 */

#endif /* __Z64OVL_Z_EN_FU__ */
