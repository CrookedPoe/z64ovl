#ifndef __Z64OVL_Z_EN_SKB__
#define __Z64OVL_Z_EN_SKB__

#define Z_EN_SKB_ACTOR_NUMBER     0x00ED
#define Z_EN_SKB_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_SKB_OBJECT_NUMBER    0x0142
#define Z_EN_SKB_FLAGS            (ACTORFLAG_FIGHT)

typedef struct z_en_skb_s z_en_skb_t;
struct z_en_skb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ ClObjJntSph sph_pos;
    /* 0x1A8 */ ClObjJntSphElem sph_elem[2];
    /* 0x228 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x22C */ float effect_alpha;
    /* 0x230 */ float effect_scale;
    /* 0x234 */ xyz_t joint_pos[14];
    /* 0x2DC */ int joint_count;
    /* 0x2E0 */ s_xyz joint1[20];
    /* 0x358 */ s_xyz joint2[20];
    /* 0x3D0 */ short proc_timer;
    /* 0x3D2 */ short effect_timer;
    /* 0x3D4 */ short cycle_rate;
    /* 0x3D6 */ short skb_type;
    /* 0x3D8 */ short break_flag;
    /* 0x3DA */ short move_count;
    /* 0x3DC */ short relax_flag;
    /* 0x3DE */ short stat_mode;
    /* 0x3E0 */ short ever_talk_flag;
    /* 0x3E2 */ short talk_check_flag;
    /* 0x3E4 */ u8 attack_flag;
    /* 0x3E5 */ u8 reaction_buf;
    /* 0x3E6 */ u8 joint_eff_type;
}; /* size = 0x03E8 */

#endif /* __Z64OVL_Z_EN_SKB__ */
