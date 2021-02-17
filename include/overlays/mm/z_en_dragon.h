#ifndef __Z64OVL_Z_EN_DRAGON__
#define __Z64OVL_Z_EN_DRAGON__

#define Z_EN_DRAGON_ACTOR_NUMBER     0x0206
#define Z_EN_DRAGON_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_DRAGON_OBJECT_NUMBER    0x01ED
#define Z_EN_DRAGON_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_dragon_s z_en_dragon_t;
struct z_en_dragon_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[16];
    /* 0x1E8 */ s_xyz joint2[16];
    /* 0x248 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x24C */ int c_change_flag;
    /* 0x250 */ int index;
    /* 0x254 */ xyz_t ago_pos;
    /* 0x260 */ xyz_t move_pos;
    /* 0x26C */ xyz_t eat_pos;
    /* 0x278 */ xyz_t eye_pos;
    /* 0x284 */ xyz_t way_pos;
    /* 0x290 */ xyz_t DEBUG_pos;
    /* 0x29C */ xyz_t week_pos;
    /* 0x2A8 */ s_xyz ago_angle;
    /* 0x2AE */ short attack_timer;
    /* 0x2B0 */ short chance_timer;
    /* 0x2B2 */ short wait_timer;
    /* 0x2B4 */ short check_timer;
    /* 0x2B6 */ short no_eat_timer;
    /* 0x2B8 */ short DEBUG_flag;
    /* 0x2BA */ short stat_mode;
    /* 0x2BC */ short save_bit;
    /* 0x2BE */ short at_check_flag;
    /* 0x2C0 */ short Event_now[4];
    /* 0x2C8 */ short demo_camera;
    /* 0x2CA */ short demo_count;
    /* 0x2CC */ short kamare_flag;
    /* 0x2D0 */ float end_frame;
    /* 0x2D4 */ float scale;
    /* 0x2D8 */ float camera_morf;
    /* 0x2DC */ ClObjJntSph sph_pos;
    /* 0x2FC */ ClObjJntSphElem sph_elem[8];
}; /* size = 0x04FC */

#endif /* __Z64OVL_Z_EN_DRAGON__ */
