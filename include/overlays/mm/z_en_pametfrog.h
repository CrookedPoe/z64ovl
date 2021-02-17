#ifndef __Z64OVL_Z_EN_PAMETFROG__
#define __Z64OVL_Z_EN_PAMETFROG__

#define Z_EN_PAMETFROG_ACTOR_NUMBER     0x0007
#define Z_EN_PAMETFROG_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_EN_PAMETFROG_OBJECT_NUMBER    0x0128
#define Z_EN_PAMETFROG_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_en_pametfrog_s z_en_pametfrog_t;
struct z_en_pametfrog_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[24];
    /* 0x218 */ s_xyz joint2[24];
    /* 0x2A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2AC */ unsigned char damage_eff_kind;
    /* 0x2AD */ unsigned char wait_cnt;
    /* 0x2AE */ unsigned char sound_flg;
    /* 0x2B0 */ short now_event_num;
    /* 0x2B2 */ short minifrog_kind;
    /* 0x2B4 */ short quake;
    /* 0x2B6 */ short timer;
    /* 0x2B8 */ short damage_angle_y;
    /* 0x2BA */ short demo_camera;
    /* 0x2BC */ short damage_stop_timer;
    /* 0x2C0 */ float wall_rot_angle;
    /* 0x2C4 */ float damage_eff_alpha;
    /* 0x2C8 */ float damage_eff_scale;
    /* 0x2CC */ float damage_eff_scale2;
    /* 0x2D0 */ xyz_t direction;
    /* 0x2DC */ xyz_t head_up;
    /* 0x2E8 */ xyz_t side;
    /* 0x2F4 */ xyz_t shape_pos[12];
    /* 0x384 */ ClObjJntSph all_jntsph;
    /* 0x3A4 */ ClObjJntSphElem sph_elem[2];
}; /* size = 0x0424 */

#endif /* __Z64OVL_Z_EN_PAMETFROG__ */
