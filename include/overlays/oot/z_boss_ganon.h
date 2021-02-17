#ifndef __Z64OVL_Z_BOSS_GANON__
#define __Z64OVL_Z_BOSS_GANON__

#define Z_BOSS_GANON_ACTOR_NUMBER     0x00E8
#define Z_BOSS_GANON_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_GANON_OBJECT_NUMBER    0x00E1
#define Z_BOSS_GANON_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_ganon_s z_boss_ganon_t;
struct z_boss_ganon_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ int anime_bank_ID;
    /* 0x140 */ SKELETON_INFO skeleton;
    /* 0x184 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x188 */ u8 demo_anime;
    /* 0x189 */ u8 flying;
    /* 0x18A */ u8 first_jisin;
    /* 0x18C */ short jisin_time;
    /* 0x18E */ u8 yuka_down_count;
    /* 0x18F */ u8 smoke_set_flag;
    /* 0x190 */ s8 kankyo_flag;
    /* 0x192 */ short work[10];
    /* 0x1A6 */ short timer[5];
    /* 0x1B0 */ u8 ball_revise_flag;
    /* 0x1B2 */ short move_mode;
    /* 0x1B4 */ short gamen_flash;
    /* 0x1B8 */ float fwork[10];
    /* 0x1E0 */ xyz_t fly_target;
    /* 0x1EC */ xyz_t center_pos;
    /* 0x1F8 */ xyz_t head_pos;
    /* 0x204 */ xyz_t kata_posR;
    /* 0x210 */ xyz_t kata_posL;
    /* 0x21C */ xyz_t hand_posR;
    /* 0x228 */ xyz_t hand_posL;
    /* 0x234 */ float mant_G;
    /* 0x238 */ short mant_hand_L;
    /* 0x23A */ short mant_hand_R;
    /* 0x23C */ short mant_hand_LR;
    /* 0x240 */ float mant_base_ya;
    /* 0x244 */ float hand_beam_scale;
    /* 0x248 */ float hand_beam_angle;
    /* 0x24C */ u8 hand_beam_pos_clac_off;
    /* 0x250 */ xyz_t hand_beam_pos;
    /* 0x25C */ short hand_beam_time;
    /* 0x260 */ float hand_beam_rnd_ya;
    /* 0x264 */ u8 obi_set;
    /* 0x268 */ xyz_t big_magic_pos;
    /* 0x274 */ float big_magic_scale;
    /* 0x278 */ float big_magic_a;
    /* 0x27C */ float big_magic_scale2;
    /* 0x280 */ float big_magic_a2;
    /* 0x284 */ float big_magic_hikari_a[15];
    /* 0x2C0 */ float big_magic_scale3;
    /* 0x2C4 */ short hit_off;
    /* 0x2C8 */ xyz_t tri_pos;
    /* 0x2D4 */ u8 shape_flash_mode;
    /* 0x2D6 */ short shape_flash;
    /* 0x2D8 */ short pl_flash;
    /* 0x2DC */ xyz_t shape_pos[18];
    /* 0x3B4 */ xyz_t shape_ang[18];
    /* 0x48C */ float shape_flash_size[18];
    /* 0x4D4 */ short shape_flash_time[18];
    /* 0x4F8 */ float shape_flash_size_max;
    /* 0x4FC */ float foot_za;
    /* 0x500 */ float foot_xa;
    /* 0x504 */ float foot_za2;
    /* 0x508 */ float hand_za;
    /* 0x50C */ float hand_xa;
    /* 0x510 */ float parts_xa[30];
    /* 0x588 */ float parts_za[30];
    /* 0x600 */ ClObjPipe acoc_pipe_info;
    /* 0x64C */ float mant_back;
    /* 0x650 */ float mant_nami;
    /* 0x654 */ float mant_wide;
    /* 0x658 */ float body_scale;
    /* 0x65C */ u8 fee_flag;
    /* 0x65E */ short fee_time;
    /* 0x660 */ float fee_scale;
    /* 0x664 */ u32 demo_time;
    /* 0x668 */ short demo_mode;
    /* 0x66A */ short camera_no;
    /* 0x66C */ short demo_ct;
    /* 0x66E */ short camera_sw;
    /* 0x670 */ xyz_t eye;
    /* 0x67C */ xyz_t way;
    /* 0x688 */ xyz_t up;
    /* 0x694 */ xyz_t eye_spd;
    /* 0x6A0 */ xyz_t way_spd;
    /* 0x6AC */ xyz_t eye_target;
    /* 0x6B8 */ xyz_t eye_target_ad;
    /* 0x6C4 */ xyz_t way_target;
    /* 0x6D0 */ xyz_t way_target_ad;
    /* 0x6DC */ float camera_morf;
    /* 0x6E0 */ float camera_morf_spd;
    /* 0x6E4 */ float fovy;
    /* 0x6E8 */ float eye_range;
    /* 0x6EC */ float eye_range_spd;
    /* 0x6F0 */ float eye_angle_Y;
    /* 0x6F4 */ float eye_angle_X;
    /* 0x6F8 */ float eye_angle_spd;
    /* 0x6FC */ float demo_jisin_Y;
    /* 0x700 */ float demo_jisin_Y_ad;
    /* 0x704 */ float fade;
    /* 0x708 */ short organ_a;
    /* 0x70A */ u8 organ_hand;
    /* 0x70B */ u8 kabe_break;
}; /* size = 0x071C */

#endif /* __Z64OVL_Z_BOSS_GANON__ */
