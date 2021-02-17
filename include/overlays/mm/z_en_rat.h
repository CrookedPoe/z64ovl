#ifndef __Z64OVL_Z_EN_RAT__
#define __Z64OVL_Z_EN_RAT__

#define Z_EN_RAT_ACTOR_NUMBER     0x016F
#define Z_EN_RAT_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_RAT_OBJECT_NUMBER    0x0181
#define Z_EN_RAT_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT_GRAB)

typedef struct z_en_rat_s z_en_rat_t;
struct z_en_rat_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char lost_flg;
    /* 0x18D */ unsigned char new_world_flg;
    /* 0x18E */ short work;
    /* 0x190 */ short timer;
    /* 0x192 */ short damage_timer;
    /* 0x194 */ s_xyz joint1[10];
    /* 0x1D0 */ s_xyz joint2[10];
    /* 0x20C */ xyz_t direction;
    /* 0x218 */ xyz_t head_up;
    /* 0x224 */ xyz_t side;
    /* 0x230 */ xyz_t smoke_pos;
    /* 0x23C */ xyz_t spark_offset[2];
    /* 0x254 */ float offset_x;
    /* 0x258 */ float search_area;
    /* 0x25C */ float offset_y;
    /* 0x260 */ int blure_effect_index[2];
    /* 0x268 */ ClObjSph all_sph;
}; /* size = 0x02C0 */

#endif /* __Z64OVL_Z_EN_RAT__ */
