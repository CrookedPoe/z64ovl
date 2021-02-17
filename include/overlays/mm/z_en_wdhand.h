#ifndef __Z64OVL_Z_EN_WDHAND__
#define __Z64OVL_Z_EN_WDHAND__

#define Z_EN_WDHAND_ACTOR_NUMBER     0x01D1
#define Z_EN_WDHAND_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_WDHAND_OBJECT_NUMBER    0x01B5
#define Z_EN_WDHAND_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_wdhand_s z_en_wdhand_t;
struct z_en_wdhand_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[8];
    /* 0x1B8 */ s_xyz joint2[8];
    /* 0x1E8 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1EC */ short break_point_before;
    /* 0x1EE */ short break_point_next;
    /* 0x1F0 */ short timer;
    /* 0x1F2 */ s_xyz part_angle[4];
    /* 0x20C */ float kuki_scale;
    /* 0x210 */ float dead_kuki_scale[3];
    /* 0x21C */ MtxF inverse_mtx;
    /* 0x25C */ xyz_t bubble_pos[2];
    /* 0x274 */ ClObjJntSph all_jntsph;
    /* 0x294 */ ClObjJntSphElem sph_elem[7];
}; /* size = 0x0454 */

#endif /* __Z64OVL_Z_EN_WDHAND__ */
