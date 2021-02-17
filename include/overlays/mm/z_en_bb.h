#ifndef __Z64OVL_Z_EN_BB__
#define __Z64OVL_Z_EN_BB__

#define Z_EN_BB_ACTOR_NUMBER     0x003E
#define Z_EN_BB_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BB_OBJECT_NUMBER    0x0051
#define Z_EN_BB_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT_GRAB)

typedef struct z_en_bb_s z_en_bb_t;
struct z_en_bb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[16];
    /* 0x1E8 */ s_xyz joint2[16];
    /* 0x248 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x24C */ signed char break_flg;
    /* 0x24D */ unsigned char damage_eff_kind;
    /* 0x24E */ unsigned char fire_alpha;
    /* 0x250 */ short timer;
    /* 0x252 */ short attack_wait_timer;
    /* 0x254 */ short aim_angle_y;
    /* 0x256 */ short fly_offset_angle;
    /* 0x258 */ float move_speed;
    /* 0x25C */ float fly_offset;
    /* 0x260 */ float attack_area;
    /* 0x264 */ float fire_scale_x;
    /* 0x268 */ float fire_scale_y;
    /* 0x26C */ float damage_eff_alpha;
    /* 0x270 */ float damage_eff_scale;
    /* 0x274 */ float damage_eff_scale2;
    /* 0x278 */ xyz_t shape_pos[5];
    /* 0x2B4 */ xyz_t shape_vec[5];
    /* 0x2F0 */ Gfx* shape;
    /* 0x2F4 */ ClObjSph all_sph;
}; /* size = 0x034C */

#endif /* __Z64OVL_Z_EN_BB__ */
