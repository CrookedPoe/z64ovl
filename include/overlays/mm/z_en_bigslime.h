#ifndef __Z64OVL_Z_EN_BIGSLIME__
#define __Z64OVL_Z_EN_BIGSLIME__

#define Z_EN_BIGSLIME_ACTOR_NUMBER     0x0065
#define Z_EN_BIGSLIME_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_BIGSLIME_OBJECT_NUMBER    0x0128
#define Z_EN_BIGSLIME_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_CAN_HOOKSHOT_GRAB)

typedef struct z_en_bigslime_s z_en_bigslime_t;
struct z_en_bigslime_s {
    /* 0x0 */ xyz_t pos;
    /* 0xC */ xyz_t vec;
    /* 0x18 */ short timer;
    /* 0x1A */ s_xyz angle;
    /* 0x20 */ float scale;
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ void (*old_process)(/* ECOFF does not store param types */);
    /* 0x190 */ s_xyz joint1[24];
    /* 0x220 */ s_xyz joint2[24];
    /* 0x2B0 */ unsigned char mini_draw_flg;
    /* 0x2B1 */ unsigned char vtx_num;
    /* 0x2B2 */ unsigned char anm_end_flg;
    /* 0x2B3 */ unsigned char work_cnt;
    /* 0x2B4 */ unsigned char wave_alpha;
    /* 0x2B5 */ unsigned char damage_eff_kind;
    /* 0x2B6 */ short aim_angle_y;
    /* 0x2B8 */ short now_event_num;
    /* 0x2BA */ short timer;
    /* 0x2BC */ short vtx_timer;
    /* 0x2BE */ short damage_stop_timer;
    /* 0x2C0 */ short ice_timer;
    /* 0x2C2 */ short drop_wait_timer;
    /* 0x2C4 */ short attack_timer;
    /* 0x2C6 */ short demo_camera;
    /* 0x2C8 */ short camera_angle_y;
    /* 0x2CA */ short shadow_angle;
    /* 0x2CC */ short item_timer;
    /* 0x2CE */ s_xyz truebody_angle;
    /* 0x2D4 */ xyz_t truebody_offset;
    /* 0x2E0 */ xyz_t truebody_sound_pos;
    /* 0x2EC */ xyz_t wave_pos;
    /* 0x2F8 */ xyz_t shape_pos[12];
    /* 0x388 */ float damage_eff_alpha;
    /* 0x38C */ float damage_eff_scale;
    /* 0x390 */ float damage_eff_scale2;
    /* 0x394 */ float truebody_scale;
    /* 0x398 */ float vtx_offset[162];
    /* 0x620 */ float shadow_scale_x;
    /* 0x624 */ float shadow_scale_z;
    /* 0x628 */ float wave_scale;
    /* 0x62C */ ClObjPipe truebody_pipe;
    /* 0x678 */ ClObjPipe all_pipe[12];
    /* 0xA08 */ ACTOR* mslime[15];
    /* 0xA44 */ ACTOR* throw_mslime;
    /* 0xA48 */ EvwAnimeInfo* ice_evw_anime;
    /* 0xA4C */ EvwAnimeInfo* mini_ice_evw_anime;
    /* 0xA50 */ EvwAnimeInfo* ice_piece_evw_anime;
    /* 0xA54 */ En_Bigslime_Effect effect[312];
}; /* size = 0x3634 */

#endif /* __Z64OVL_Z_EN_BIGSLIME__ */
