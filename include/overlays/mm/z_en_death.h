#ifndef __Z64OVL_Z_EN_DEATH__
#define __Z64OVL_Z_EN_DEATH__

#define Z_EN_DEATH_ACTOR_NUMBER     0x0043
#define Z_EN_DEATH_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_DEATH_OBJECT_NUMBER    0x0052
#define Z_EN_DEATH_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW | ACTORFLAG_NO_QUAKE)

typedef struct z_en_death_s z_en_death_t;
struct z_en_death_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char at_set_flg;
    /* 0x18D */ unsigned char mini_dummy_flg;
    /* 0x18E */ unsigned char scythe_draw_flg;
    /* 0x18F */ unsigned char damage_eff_kind;
    /* 0x190 */ signed char scythe_cnt;
    /* 0x191 */ unsigned char evw_anm_cnt;
    /* 0x192 */ unsigned char double_draw_flg;
    /* 0x193 */ unsigned char shape_flg[22];
    /* 0x1A9 */ unsigned char end_bfire_alpha[56];
    /* 0x1E2 */ s_xyz joint1[22];
    /* 0x266 */ s_xyz joint2[22];
    /* 0x2EA */ short fly_timer;
    /* 0x2EC */ short blure_timer;
    /* 0x2EE */ short timer;
    /* 0x2F0 */ short escape_timer;
    /* 0x2F2 */ short mantle_angle_z0;
    /* 0x2F4 */ short mantle_angle_z1;
    /* 0x2F6 */ short work_angle;
    /* 0x2F8 */ short bomb_timer;
    /* 0x2FA */ short demo_camera;
    /* 0x2FC */ short kankyo_timer;
    /* 0x300 */ int blure_effect_index;
    /* 0x304 */ float scythe_scale;
    /* 0x308 */ float work_area;
    /* 0x30C */ float cam_eye_speed;
    /* 0x310 */ float cam_center_speed;
    /* 0x314 */ float damage_eff_scale;
    /* 0x318 */ float damage_eff_scale2;
    /* 0x31C */ float damage_eff_alpha;
    /* 0x320 */ xyz_t work_pos;
    /* 0x32C */ xyz_t scythe_pos;
    /* 0x338 */ xyz_t scythe_sound;
    /* 0x344 */ xyz_t cam_aim_eye_pos;
    /* 0x350 */ xyz_t cam_aim_center_pos;
    /* 0x35C */ xyz_t shape_pos[14];
    /* 0x404 */ xyz_t end_bfire_pos[56];
    /* 0x6A4 */ MtxF scythe_mtx;
    /* 0x6E4 */ ACTOR* minideath[20];
    /* 0x734 */ EvwAnimeInfo* evw_anime;
    /* 0x738 */ EvwAnimeInfo* week_evw_anime;
    /* 0x73C */ ClObjPipe oc_pipe;
    /* 0x788 */ ClObjSwrd at_sword;
    /* 0x808 */ ClObjSph ac_sph;
    /* 0x860 */ ClObjTris atac_tris;
    /* 0x880 */ ClObjTrisElem tris_elem[2];
}; /* size = 0x0938 */

#endif /* __Z64OVL_Z_EN_DEATH__ */
