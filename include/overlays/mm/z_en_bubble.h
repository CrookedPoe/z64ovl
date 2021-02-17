#ifndef __Z64OVL_Z_EN_BUBBLE__
#define __Z64OVL_Z_EN_BUBBLE__

#define Z_EN_BUBBLE_ACTOR_NUMBER     0x001D
#define Z_EN_BUBBLE_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_BUBBLE_OBJECT_NUMBER    0x000E
#define Z_EN_BUBBLE_FLAGS            (ACTORFLAG_TARGET)

typedef struct z_en_bubble_s z_en_bubble_t;
struct z_en_bubble_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x148 */ ClObjJntSph all_jntsph;
    /* 0x168 */ ClObjJntSphElem sph_elem[2];
    /* 0x1E8 */ xyz_t add_speed;
    /* 0x1F4 */ xyz_t movevec;
    /* 0x200 */ short no_effect_timer;
    /* 0x202 */ short timer;
    /* 0x204 */ short count;
    /* 0x208 */ float une_spd;
    /* 0x20C */ float une_wid;
    /* 0x210 */ float h_speed;
    /* 0x214 */ float v_speed;
    /* 0x218 */ float scl_w;
    /* 0x21C */ float scl_h;
    /* 0x220 */ unsigned char b_cnt;
    /* 0x224 */ xyz_t m_dir;
    /* 0x230 */ xyz_t m_spd;
    /* 0x23C */ xyz_t p_dir;
    /* 0x248 */ xyz_t p_spd;
    /* 0x254 */ float g_spd;
}; /* size = 0x0258 */

#endif /* __Z64OVL_Z_EN_BUBBLE__ */
