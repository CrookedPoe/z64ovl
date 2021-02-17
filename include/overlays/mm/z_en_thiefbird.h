#ifndef __Z64OVL_Z_EN_THIEFBIRD__
#define __Z64OVL_Z_EN_THIEFBIRD__

#define Z_EN_THIEFBIRD_ACTOR_NUMBER     0x0291
#define Z_EN_THIEFBIRD_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_THIEFBIRD_OBJECT_NUMBER    0x0022
#define Z_EN_THIEFBIRD_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_CAN_HOOKSHOT_GRAB | ACTORFLAG_NO_QUAKE)

typedef struct z_en_thiefbird_s z_en_thiefbird_t;
struct z_en_thiefbird_s {
    /* 0x0 */ xyz_t pos;
    /* 0xC */ xyz_t vec;
    /* 0x18 */ float scale;
    /* 0x1C */ short wave;
    /* 0x1E */ short y_angle;
    /* 0x20 */ short z_angle;
    /* 0x22 */ short count;
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x18C */ unsigned char damage_eff_kind;
    /* 0x18E */ short timer;
    /* 0x190 */ short aim_angle_x;
    /* 0x192 */ short aim_angle_y;
    /* 0x194 */ short neck_angle_x;
    /* 0x196 */ short get_item_cnt[6];
    /* 0x1A2 */ s_xyz joint1[17];
    /* 0x208 */ s_xyz joint2[17];
    /* 0x270 */ ClObjJntSph all_jntsph;
    /* 0x290 */ ClObjJntSphElem sph_elem[3];
    /* 0x350 */ xyz_t shape_pos[11];
    /* 0x3D4 */ float damage_eff_alpha;
    /* 0x3D8 */ float damage_eff_scale;
    /* 0x3DC */ float damage_eff_scale2;
    /* 0x3E0 */ float escape_speed_y;
    /* 0x3E4 */ Gfx* shape;
    /* 0x3E8 */ Gfx* item_shape;
    /* 0x3EC */ ACTOR* search_item;
    /* 0x3F0 */ En_Thiefbird_Feather feather[40];
}; /* size = 0x0990 */

#endif /* __Z64OVL_Z_EN_THIEFBIRD__ */
