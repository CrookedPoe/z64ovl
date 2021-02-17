#ifndef __Z64OVL_Z_EN_PR2__
#define __Z64OVL_Z_EN_PR2__

#define Z_EN_PR2_ACTOR_NUMBER     0x0180
#define Z_EN_PR2_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_PR2_OBJECT_NUMBER    0x016B
#define Z_EN_PR2_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_pr2_s z_en_pr2_t;
struct z_en_pr2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[5];
    /* 0x1A6 */ s_xyz joint2[5];
    /* 0x1C4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1C8 */ short rail_index;
    /* 0x1CC */ Path_Info* path;
    /* 0x1D0 */ int path_count;
    /* 0x1D4 */ short stat_mode;
    /* 0x1D6 */ short bubble_frag;
    /* 0x1D8 */ short move_timer;
    /* 0x1DA */ short wait_timer;
    /* 0x1DC */ short dush_timer;
    /* 0x1DE */ short return_timer;
    /* 0x1E0 */ short index;
    /* 0x1E2 */ u8 check_ok_flag;
    /* 0x1E4 */ s_xyz bitobito_angle;
    /* 0x1EA */ short dead_count;
    /* 0x1EC */ short eye_color;
    /* 0x1EE */ short srch_angle;
    /* 0x1F0 */ short bg_hosei_angle;
    /* 0x1F2 */ short bg_hosei_count;
    /* 0x1F4 */ short alpha;
    /* 0x1F8 */ float end_frame;
    /* 0x1FC */ float head_angle;
    /* 0x200 */ float water_surface_pos_y;
    /* 0x204 */ float scale;
    /* 0x208 */ float move_hani;
    /* 0x20C */ float Ypos_hosei;
    /* 0x210 */ int c_change_flag;
    /* 0x214 */ int bg_check_flag;
    /* 0x218 */ int item_no;
    /* 0x21C */ xyz_t search_pos;
    /* 0x228 */ xyz_t kihon_move_pos;
    /* 0x234 */ xyz_t shape_pos[5];
    /* 0x270 */ xyz_t head_pos;
    /* 0x27C */ ClObjPipe acoc_pipe_info;
}; /* size = 0x02C8 */

#endif /* __Z64OVL_Z_EN_PR2__ */
