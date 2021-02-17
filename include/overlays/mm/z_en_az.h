#ifndef __Z64OVL_Z_EN_AZ__
#define __Z64OVL_Z_EN_AZ__

#define Z_EN_AZ_ACTOR_NUMBER     0x018D
#define Z_EN_AZ_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_AZ_OBJECT_NUMBER    0x0198
#define Z_EN_AZ_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_az_s z_en_az_t;
struct z_en_az_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ SKELETON_INFO skeleton;
    /* 0x18C */ ClObjPipe pipe_info;
    /* 0x1D8 */ s_xyz joint1[24];
    /* 0x268 */ s_xyz joint2[24];
    /* 0x2F8 */ short id;
    /* 0x2FA */ short mode;
    /* 0x2FC */ int amp_no;
    /* 0x300 */ Path_Run_Info_t path_run_info;
    /* 0x36C */ float max_spd;
    /* 0x370 */ float check_distance;
    /* 0x374 */ unsigned short stat;
    /* 0x376 */ unsigned short stat_b;
    /* 0x378 */ unsigned char talk_stat;
    /* 0x37A */ short eff_timer;
    /* 0x37C */ short wait_timer;
    /* 0x37E */ short eye_pat;
    /* 0x380 */ short backle_pat;
    /* 0x382 */ short look_stat;
    /* 0x384 */ short stream_tm;
    /* 0x388 */ En_Az_actor* friend_actor;
    /* 0x38C */ xyz_t stream_scale;
    /* 0x398 */ float stream_rot;
    /* 0x39C */ short uzu_b_frame;
    /* 0x39E */ s_xyz center_angle;
    /* 0x3A4 */ float waist_offset;
    /* 0x3A8 */ xyz_t waist_pos;
    /* 0x3B4 */ xyz_t wave_pos;
    /* 0x3C0 */ short step;
    /* 0x3C2 */ short path_area_no;
    /* 0x3C4 */ short path_area_no_pl;
    /* 0x3C8 */ int get_item;
    /* 0x3CC */ int carry_item;
    /* 0x3D0 */ short event_id[1];
    /* 0x3D2 */ unsigned short say_message;
    /* 0x3D4 */ short neck_angle_y_now;
    /* 0x3D6 */ short neck_angle_x_now;
}; /* size = 0x03D8 */

#endif /* __Z64OVL_Z_EN_AZ__ */
