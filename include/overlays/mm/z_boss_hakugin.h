#ifndef __Z64OVL_Z_BOSS_HAKUGIN__
#define __Z64OVL_Z_BOSS_HAKUGIN__

#define Z_BOSS_HAKUGIN_ACTOR_NUMBER     0x01DD
#define Z_BOSS_HAKUGIN_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_HAKUGIN_OBJECT_NUMBER    0x01BB
#define Z_BOSS_HAKUGIN_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_hakugin_s z_boss_hakugin_t;
struct z_boss_hakugin_s {
    /* 0x0 */ xyz_t pos;
    /* 0xC */ xyz_t vec;
    /* 0x18 */ short timer;
    /* 0x1A */ short type;
    /* 0x1C */ s_xyz angle;
    /* 0x24 */ float scale;
    /* 0x0 */ xyz_t pos;
    /* 0xC */ short alpha;
    /* 0xE */ s_xyz angle;
    /* 0x14 */ ClObjTris at_tris;
    /* 0x34 */ ClObjTrisElem tris_elem;
    /* 0x0 */ xyz_t pos;
    /* 0xC */ float scale;
    /* 0x10 */ short alpha;
    /* 0x12 */ short counter;
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char thunder_hit_flg;
    /* 0x18D */ unsigned char rock_set_cnt;
    /* 0x18E */ unsigned char icicle_set_cnt;
    /* 0x18F */ unsigned char bomb_set_cnt;
    /* 0x190 */ unsigned char smoke_set_flg;
    /* 0x191 */ unsigned char smoke_start_num;
    /* 0x192 */ unsigned char spark_mode;
    /* 0x193 */ unsigned char ice_alpha;
    /* 0x194 */ unsigned char player_jump_flg;
    /* 0x195 */ unsigned char land_flg;
    /* 0x196 */ unsigned char damage_eff_kind;
    /* 0x198 */ short thunder_ball_angle_z;
    /* 0x19A */ short speed_up_cnt;
    /* 0x19C */ short timer;
    /* 0x19E */ short aim_angle_y;
    /* 0x1A0 */ short base_angle_y;
    /* 0x1A2 */ short run_angle_y_offset;
    /* 0x1A4 */ short ac_wait_timer;
    /* 0x1A6 */ short charge_angle;
    /* 0x1A8 */ short head_up_wait_timer;
    /* 0x1AA */ short spark_cnt;
    /* 0x1AC */ short demo_camera;
    /* 0x1AE */ short dead_head_direction;
    /* 0x1B0 */ unsigned int part_bit;
    /* 0x1B4 */ int direction;
    /* 0x1B8 */ float spark_speed;
    /* 0x1BC */ float r_wall_dis;
    /* 0x1C0 */ float l_wall_dis;
    /* 0x1C4 */ float aim_speedF;
    /* 0x1C8 */ float thunder_ball_scale;
    /* 0x1CC */ float horn_thunder_offset;
    /* 0x1D0 */ float horn_thunder_scale;
    /* 0x1D4 */ float ice_scale_y;
    /* 0x1D8 */ float cam_speed;
    /* 0x1DC */ float damage_eff_scale;
    /* 0x1E0 */ float damage_eff_scale2;
    /* 0x1E4 */ float damage_eff_alpha;
    /* 0x1E8 */ s_xyz joint1[33];
    /* 0x2AE */ s_xyz joint2[33];
    /* 0x374 */ s_xyz head_angle;
    /* 0x37A */ s_xyz cam_angle;
    /* 0x380 */ xyz_t thunder_ball_pos;
    /* 0x38C */ xyz_t cam_eye_pos;
    /* 0x398 */ xyz_t shape_pos[15];
    /* 0x44C */ xyz_t player_project_dis;
    /* 0x458 */ xyz_t sound_pos;
    /* 0x464 */ xyz_t effect_sound_pos;
    /* 0x470 */ Light_list* light_list;
    /* 0x474 */ Light_data light_data;
    /* 0x484 */ ClObjJntSph all_jntsph;
    /* 0x4A4 */ ClObjJntSphElem sph_elem[19];
    /* 0x964 */ ClObjPipe ice_pipe;
    /* 0x9B0 */ ACTOR* rock[8];
    /* 0x9D0 */ ACTOR* icicle[10];
    /* 0x9F8 */ Boss_Hakugin_Rock_Piece rock_piece[180];
    /* 0x2618 */ Boss_Hakugin_Thunder thunder[20];
    /* 0x3158 */ Boss_Hakugin_Smoke smoke[15][5];
    /* 0x3734 */ xyz_t spark_pos[10];
    /* 0x37AC */ xyz_t spark_vec;
    /* 0x37B8 */ ClObjSph spark_at_sph;
}; /* size = 0x3810 */

#endif /* __Z64OVL_Z_BOSS_HAKUGIN__ */
