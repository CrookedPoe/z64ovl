#ifndef __Z64OVL_Z_EN_INVADEPOH__
#define __Z64OVL_Z_EN_INVADEPOH__

#define Z_EN_INVADEPOH_ACTOR_NUMBER     0x0200
#define Z_EN_INVADEPOH_ACTOR_CATEGORY   ACTORCAT_PROP
#define Z_EN_INVADEPOH_OBJECT_NUMBER    0x0001
#define Z_EN_INVADEPOH_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_invadepoh_s z_en_invadepoh_t;
struct z_en_invadepoh_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[23];
    /* 0x212 */ s_xyz joint2[23];
    /* 0x29C */ signed char anime_play_flag;
    /* 0x2A0 */ ClObjPipe pipe;
    /* 0x2EC */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2F0 */ short mode_timer;
    /* 0x2F2 */ short counter;
    /* 0x2F4 */ signed char bankID;
    /* 0x2F8 */ float pos_param;
    /* 0x2FC */ float spd_param;
    /* 0x300 */ float acc_param;
    /* 0x304 */ short ang_pos;
    /* 0x306 */ short ang_spd;
    /* 0x308 */ signed char path_last_idx;
    /* 0x309 */ signed char path_now_idx;
    /* 0x30A */ signed char path_dir;
    /* 0x30C */ s_xyz* path_point;
    /* 0x310 */ float path_dist_total;
    /* 0x314 */ xyz_t path_now_pos;
    /* 0x320 */ float now_t;
    /* 0x324 */ InvadepohEmotion emotion;
    /* 0x370 */ short shape_ang_y_spd;
    /* 0x372 */ short shape_ang_y_acc;
    /* 0x374 */ signed char sub_mode_num;
    /* 0x376 */ unsigned short message_number;
    /* 0x378 */ signed char door_req_flag;
    /* 0x379 */ signed char alien_set_num;
    /* 0x37C */ float path_t[3];
    /* 0x388 */ signed char alien_kidnap_cow_id;
    /* 0x389 */ unsigned char alien_alpha;
    /* 0x38A */ signed char goal_flag;
    /* 0x38B */ signed char alien_body_draw_flag;
    /* 0x38C */ signed char alien_die_effect_draw_flag;
    /* 0x38D */ unsigned char alien_beam_alpha;
    /* 0x390 */ xyz_t alien_die_effect_scale;
    /* 0x39C */ float ufo_scale_ampl;
    /* 0x3A0 */ float ufo_scale_ampl_aim;
    /* 0x3A4 */ float ufo_scale_ampl_spd;
    /* 0x3A8 */ short ufo_scale_ang;
    /* 0x3AA */ short ufo_scale_ang_spd;
    /* 0x3AC */ signed char ufo_aim_num;
    /* 0x3B0 */ xyz_t dog_pos_param;
    /* 0x3BC */ signed char dog_aim_idx;
}; /* size = 0x03C0 */

#endif /* __Z64OVL_Z_EN_INVADEPOH__ */
