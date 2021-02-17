#ifndef __Z64OVL_Z_EN_BUBBLE__
#define __Z64OVL_Z_EN_BUBBLE__

#define Z_EN_BUBBLE_ACTOR_NUMBER     0x002D
#define Z_EN_BUBBLE_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BUBBLE_OBJECT_NUMBER    0x0012
#define Z_EN_BUBBLE_FLAGS            (ACTORFLAG_TARGET)

typedef struct z_en_bubble_s z_en_bubble_t;
struct z_en_bubble_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x140 */ ClObjJntSph all_jntsph;
    /* 0x160 */ ClObjJntSphElem sph_elem[2];
    /* 0x1E0 */ xyz_t add_speed;
    /* 0x1EC */ xyz_t movevec;
    /* 0x1F8 */ short no_effect_timer;
    /* 0x1FA */ short timer;
    /* 0x1FC */ short count;
    /* 0x200 */ float une_spd;
    /* 0x204 */ float une_wid;
    /* 0x208 */ float h_speed;
    /* 0x20C */ float v_speed;
    /* 0x210 */ float scl_w;
    /* 0x214 */ float scl_h;
    /* 0x218 */ unsigned char b_cnt;
    /* 0x21C */ xyz_t m_dir;
    /* 0x228 */ xyz_t m_spd;
    /* 0x234 */ xyz_t p_dir;
    /* 0x240 */ xyz_t p_spd;
    /* 0x24C */ float g_spd;
}; /* size = 0x0260 */

#endif /* __Z64OVL_Z_EN_BUBBLE__ */
