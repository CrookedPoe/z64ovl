#ifndef __Z64OVL_Z_EN_SKB__
#define __Z64OVL_Z_EN_SKB__

#define Z_EN_SKB_ACTOR_NUMBER     0x01B0
#define Z_EN_SKB_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_SKB_OBJECT_NUMBER    0x0184
#define Z_EN_SKB_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_skb_s z_en_skb_t;
struct z_en_skb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[20];
    /* 0x1F8 */ s_xyz joint2[20];
    /* 0x270 */ u8 mode;
    /* 0x271 */ u8 attack_flg;
    /* 0x272 */ u8 reaction_buf;
    /* 0x273 */ u8 b_flg;
    /* 0x274 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x278 */ short mode_timer;
    /* 0x27C */ Break_work break_work;
    /* 0x294 */ ClObjJntSph sph_pos;
    /* 0x2B4 */ ClObjJntSphElem sph_elem[2];
}; /* size = 0x0344 */

#endif /* __Z64OVL_Z_EN_SKB__ */
