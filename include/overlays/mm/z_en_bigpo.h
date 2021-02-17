#ifndef __Z64OVL_Z_EN_BIGPO__
#define __Z64OVL_Z_EN_BIGPO__

#define Z_EN_BIGPO_ACTOR_NUMBER     0x0208
#define Z_EN_BIGPO_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BIGPO_OBJECT_NUMBER    0x01F1
#define Z_EN_BIGPO_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_CAN_HOOKSHOT_GRAB | ACTORFLAG_NO_QUAKE)

typedef struct z_en_bigpo_s z_en_bigpo_t;
struct z_en_bigpo_s {
    /* 0x0 */ xyz_t fire_pos;
    /* 0xC */ Light_list* light_list;
    /* 0x10 */ Light_data light_data;
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[10];
    /* 0x1C4 */ s_xyz joint2[10];
    /* 0x200 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x204 */ unsigned char sound_flg;
    /* 0x206 */ short timer;
    /* 0x208 */ short aim_angle_y;
    /* 0x20A */ short angle_speed;
    /* 0x20C */ short anchor_cnt;
    /* 0x20E */ short demo_camera;
    /* 0x210 */ short sw_num;
    /* 0x212 */ short fly_timer;
    /* 0x214 */ float fire_distance;
    /* 0x218 */ float base_y;
    /* 0x21C */ float damage_eff_alpha;
    /* 0x220 */ float damage_eff_scale;
    /* 0x224 */ xyz_t shape_pos[9];
    /* 0x290 */ rgba_t eye_env;
    /* 0x294 */ rgba_t kantera_env;
    /* 0x298 */ Light_list* light_list;
    /* 0x29C */ Light_data light_data;
    /* 0x2AC */ ClObjPipe all_pipe;
    /* 0x2F8 */ MtxF kantera_mtx;
    /* 0x338 */ En_Bigpo_Fire fire[3];
}; /* size = 0x0398 */

#endif /* __Z64OVL_Z_EN_BIGPO__ */
