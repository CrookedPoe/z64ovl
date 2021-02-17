#ifndef __Z64OVL_Z_EN_PEEHAT__
#define __Z64OVL_Z_EN_PEEHAT__

#define Z_EN_PEEHAT_ACTOR_NUMBER     0x0014
#define Z_EN_PEEHAT_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_PEEHAT_OBJECT_NUMBER    0x0014
#define Z_EN_PEEHAT_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_peehat_s z_en_peehat_t;
struct z_en_peehat_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[24];
    /* 0x218 */ s_xyz joint2[24];
    /* 0x2A8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x2AC */ unsigned char c_count;
    /* 0x2AD */ signed char rot_direction;
    /* 0x2AE */ unsigned char damage_eff_kind;
    /* 0x2B0 */ short timer;
    /* 0x2B2 */ short r_spd;
    /* 0x2B4 */ short r_ang;
    /* 0x2B6 */ short ang_add;
    /* 0x2B8 */ float counter0;
    /* 0x2BC */ float parts_anime_time;
    /* 0x2C0 */ float parts_anime_time_add;
    /* 0x2C4 */ float parts_anime_sc;
    /* 0x2C8 */ float damage_eff_alpha;
    /* 0x2CC */ float damage_eff_scale;
    /* 0x2D0 */ float damage_eff_scale2;
    /* 0x2D4 */ xyz_t sw_pos[2];
    /* 0x2EC */ xyz_t shape_pos[18];
    /* 0x3C4 */ ClObjPipe all_pipe;
    /* 0x410 */ ClObjSph all_sph;
    /* 0x468 */ ClObjTris atac_tris;
    /* 0x488 */ ClObjTrisElem tris_elem[2];
}; /* size = 0x0540 */

#endif /* __Z64OVL_Z_EN_PEEHAT__ */
