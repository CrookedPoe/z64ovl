#ifndef __Z64OVL_Z_EN_ST__
#define __Z64OVL_Z_EN_ST__

#define Z_EN_ST_ACTOR_NUMBER     0x0037
#define Z_EN_ST_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_ST_OBJECT_NUMBER    0x0024
#define Z_EN_ST_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_st_s z_en_st_t;
struct z_en_st_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ ClObjPipe all_pipe[6];
    /* 0x34C */ ClObjJntSph all_jntsph;
    /* 0x36C */ ClObjJntSphElem sph_elem[1];
    /* 0x3AC */ short block_angle_y;
    /* 0x3AE */ short mov_direction;
    /* 0x3B0 */ short count;
    /* 0x3B2 */ short fall_timer;
    /* 0x3B4 */ short swingtimer;
    /* 0x3B6 */ short timer;
    /* 0x3B8 */ short r1_timer;
    /* 0x3BA */ short r2_timer;
    /* 0x3BC */ short dmgtimer;
    /* 0x3BE */ short stptimer;
    /* 0x3C0 */ short hittimer;
    /* 0x3C2 */ short sndtimer;
    /* 0x3C4 */ short atctimer;
    /* 0x3C6 */ short brntimer;
    /* 0x3C8 */ short dietimer;
    /* 0x3CA */ short oldangle;
    /* 0x3CC */ unsigned char chgflg;
    /* 0x3CD */ rgba_t eye_color;
    /* 0x3D4 */ xyz_t string_bottom;
    /* 0x3E0 */ xyz_t string_top;
    /* 0x3EC */ float string_pos_y;
    /* 0x3F0 */ float string_scale;
    /* 0x3F4 */ int blure_indx;
    /* 0x3F8 */ float per;
    /* 0x3FC */ float bottom_y_pos;
    /* 0x400 */ short z_roll_count;
    /* 0x402 */ s_xyz joint[30][2];
}; /* size = 0x057C */

#endif /* __Z64OVL_Z_EN_ST__ */
