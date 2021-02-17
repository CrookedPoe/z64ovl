#ifndef __Z64OVL_Z_BOSS_DODONGO__
#define __Z64OVL_Z_BOSS_DODONGO__

#define Z_BOSS_DODONGO_ACTOR_NUMBER     0x0012
#define Z_BOSS_DODONGO_ACTOR_CATEGORY   ACTORCAT_BOSS
#define Z_BOSS_DODONGO_OBJECT_NUMBER    0x0019
#define Z_BOSS_DODONGO_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_ALWAYS_DRAW)

typedef struct z_boss_dodongo_s z_boss_dodongo_t;
struct z_boss_dodongo_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x184 */ short HP;
    /* 0x186 */ short demo_timer[3];
    /* 0x18C */ short demo_mode;
    /* 0x18E */ short work[30];
    /* 0x1CA */ short timer[3];
    /* 0x1D0 */ short aim_angle_y;
    /* 0x1D2 */ u8 fire_standby_flag;
    /* 0x1D4 */ float fwork[30];
    /* 0x24C */ float parts_anime_time_f[50];
    /* 0x314 */ float parts_anime_time_f_ad[50];
    /* 0x3DC */ xyz_t fire_pos;
    /* 0x3E8 */ xyz_t mouse_pos;
    /* 0x3F4 */ xyz_t l_foot_pos;
    /* 0x400 */ xyz_t r_foot_pos;
    /* 0x40C */ xyz_t mouse_hit_pos;
    /* 0x418 */ xyz_t demo_camera_eye;
    /* 0x424 */ xyz_t demo_camera_way;
    /* 0x430 */ ClObjJntSph acoc_jntsph_info;
    /* 0x450 */ ClObjJntSphElem jntsph_elem[19];
    /* 0x910 */ Kd_Eff boss_eff[80];
}; /* size = 0x1820 */

#endif /* __Z64OVL_Z_BOSS_DODONGO__ */
