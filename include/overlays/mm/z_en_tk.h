#ifndef __Z64OVL_Z_EN_TK__
#define __Z64OVL_Z_EN_TK__

#define Z_EN_TK_ACTOR_NUMBER     0x01CA
#define Z_EN_TK_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_TK_OBJECT_NUMBER    0x01AF
#define Z_EN_TK_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_tk_s z_en_tk_t;
struct z_en_tk_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ ClObjPipe all_pipe;
    /* 0x1D8 */ s_xyz joint[18][2];
    /* 0x2B0 */ signed char type;
    /* 0x2B1 */ signed char arg1;
    /* 0x2B4 */ xyz_t eff_pos;
    /* 0x2C0 */ short count;
    /* 0x2C2 */ short eye_count;
    /* 0x2C4 */ short eye_timer;
    /* 0x2C6 */ short wait_timer;
    /* 0x2C8 */ short fall_timer;
    /* 0x2CA */ unsigned short stat;
    /* 0x2CC */ short tgt_angle_y;
    /* 0x2D0 */ int search_mode;
    /* 0x2D4 */ int amp_no;
    /* 0x2D8 */ float spdeff;
    /* 0x2DC */ float pass_time2;
    /* 0x2E0 */ int pass_timex;
    /* 0x2E4 */ short bigpo_cnt;
    /* 0x2E6 */ unsigned short say_message;
    /* 0x2E8 */ short timer;
    /* 0x2EC */ xyz_t tag_position;
    /* 0x2F8 */ s_xyz tag_angle;
    /* 0x300 */ xyz_t dig_pos;
    /* 0x30C */ void (*search_proc)(/* ECOFF does not store param types */);
    /* 0x310 */ short mode;
    /* 0x312 */ short event_id[2];
    /* 0x316 */ short swing_ang_y;
    /* 0x318 */ short swing_ang_y_r;
    /* 0x31A */ short neck_angle_x_now;
    /* 0x31C */ short neck_angle_y_now;
    /* 0x320 */ float old_anime_frame;
    /* 0x324 */ xyz_t digpos_mem[6];
    /* 0x36C */ int digpos_mem_cnt;
    /* 0x370 */ xyz_t tag_pos;
    /* 0x37C */ ClObjPipe pipe_info;
    /* 0x3C8 */ Path_Info* path;
    /* 0x3CC */ unsigned char schedule;
    /* 0x3CE */ unsigned short statf;
    /* 0x3D0 */ int pass_time;
    /* 0x3D4 */ xyz_t nurbs_direction;
    /* 0x3E0 */ float nurbs_t;
    /* 0x3E4 */ int nurbs_move_frame;
    /* 0x3E8 */ int nurbs_section_frame;
    /* 0x3EC */ int nurbs_section;
    /* 0x3F0 */ int nurbs_f;
}; /* size = 0x03F4 */

#endif /* __Z64OVL_Z_EN_TK__ */
