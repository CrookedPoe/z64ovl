#ifndef __Z64OVL_Z_BOSS_05__
#define __Z64OVL_Z_BOSS_05__

#define Z_BOSS_05_ACTOR_NUMBER     0x012D
#define Z_BOSS_05_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_BOSS_05_OBJECT_NUMBER    0x015E
#define Z_BOSS_05_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_boss_05_s z_boss_05_t;
struct z_boss_05_s {
    /* 0x0 */ MoveBG_Actor moveBG;
    /* 0x15C */ u8 move_mode;
    /* 0x15E */ short on_count;
    /* 0x160 */ short count;
    /* 0x162 */ short timer[3];
    /* 0x168 */ short ochi_timer;
    /* 0x16A */ short damage;
    /* 0x16C */ short damage_flash;
    /* 0x170 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x174 */ u8 anime_mode;
    /* 0x176 */ short ya2;
    /* 0x178 */ short xa2;
    /* 0x17A */ short eff_time;
    /* 0x17C */ float eff_scale1;
    /* 0x180 */ float eff_scale2;
    /* 0x184 */ float eff_alpha;
    /* 0x188 */ u8 eff_mode;
    /* 0x189 */ u8 eff_no;
    /* 0x18C */ xyz_t eff_pos;
    /* 0x198 */ float kuki_scale;
    /* 0x19C */ short kuki_bure;
    /* 0x19E */ s_xyz s_angle[7];
    /* 0x1C8 */ ClObjJntSph kuki_jntsph_info;
    /* 0x1E8 */ ClObjJntSphElem kuki_jntsph_elem[2];
    /* 0x268 */ SKELETON_INFO Bskeleton;
    /* 0x2AC */ s_xyz Bjoint1[10];
    /* 0x2E8 */ s_xyz Bjoint2[10];
    /* 0x324 */ xyz_t head_pos;
    /* 0x330 */ s_xyz head_angle;
    /* 0x338 */ float damage_speedF;
    /* 0x33C */ xyz_t damage_speed;
    /* 0x348 */ short damage_angle_y;
    /* 0x34C */ xyz_t target;
    /* 0x358 */ float target_sp;
    /* 0x35C */ float kuti_scale;
    /* 0x360 */ float body_scale;
    /* 0x364 */ float teasi_scale;
    /* 0x368 */ ClObjJntSph head_jntsph_info;
    /* 0x388 */ ClObjJntSphElem head_jntsph_elem[1];
    /* 0x3C8 */ SKELETON_INFO Hskeleton;
    /* 0x40C */ s_xyz Hjoint1[20];
    /* 0x484 */ s_xyz Hjoint2[20];
    /* 0x4FC */ float end_frame;
    /* 0x500 */ s_xyz spin_spd;
}; /* size = 0x0508 */

#endif /* __Z64OVL_Z_BOSS_05__ */
