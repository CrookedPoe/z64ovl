#ifndef __Z64OVL_Z_EN_ZF__
#define __Z64OVL_Z_EN_ZF__

#define Z_EN_ZF_ACTOR_NUMBER     0x0025
#define Z_EN_ZF_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_ZF_OBJECT_NUMBER    0x001B
#define Z_EN_ZF_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_zf_s z_en_zf_t;
struct z_en_zf_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[49];
    /* 0x2A6 */ s_xyz joint2[49];
    /* 0x3CC */ int mode;
    /* 0x3D0 */ int action;
    /* 0x3D4 */ int work0;
    /* 0x3D8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x3DC */ short neck_angle;
    /* 0x3DE */ short neck_angle_speed;
    /* 0x3E0 */ int mode_timer;
    /* 0x3E4 */ short timer0;
    /* 0x3E6 */ short timer1;
    /* 0x3E8 */ short hasi_flg;
    /* 0x3EA */ short sword_flg;
    /* 0x3EC */ short arg_data2;
    /* 0x3EE */ short nowtbl_p;
    /* 0x3F0 */ short oldtbl_p;
    /* 0x3F2 */ short tbl_p;
    /* 0x3F4 */ u8 alpha_cnt;
    /* 0x3F8 */ float spd_wk;
    /* 0x3FC */ float spd_wk2;
    /* 0x400 */ unsigned char hit_reaction_buf;
    /* 0x404 */ int blure_effect_index;
    /* 0x408 */ ClObjPipe body_pipe;
    /* 0x454 */ ClObjSwrd sword_pos;
    /* 0x4D4 */ xyz_t r_foot;
    /* 0x4E0 */ xyz_t l_foot;
    /* 0x4EC */ xyz_t ice_pos[9];
}; /* size = 0x0568 */

#endif /* __Z64OVL_Z_EN_ZF__ */
