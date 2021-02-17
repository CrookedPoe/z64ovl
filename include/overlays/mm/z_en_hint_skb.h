#ifndef __Z64OVL_Z_EN_HINT_SKB__
#define __Z64OVL_Z_EN_HINT_SKB__

#define Z_EN_HINT_SKB_ACTOR_NUMBER     0x02A5
#define Z_EN_HINT_SKB_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_HINT_SKB_OBJECT_NUMBER    0x0142
#define Z_EN_HINT_SKB_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_hint_skb_s z_en_hint_skb_t;
struct z_en_hint_skb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjJntSph sph_info;
    /* 0x164 */ ClObjJntSphElem sph_elem[2];
    /* 0x1E4 */ SKELETON_INFO skeleton;
    /* 0x228 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x22C */ xyz_t joint_pos[14];
    /* 0x2D4 */ float effect_alpha;
    /* 0x2D8 */ float effect_scale;
    /* 0x2DC */ int joint_count;
    /* 0x2E0 */ s_xyz joint1[20];
    /* 0x358 */ s_xyz joint2[20];
    /* 0x3D0 */ s_xyz neck_angle;
    /* 0x3D6 */ s_xyz body_angle;
    /* 0x3DC */ short ever_talk_flag;
    /* 0x3DE */ short talking_flag;
    /* 0x3E0 */ short talk_check_flag;
    /* 0x3E2 */ short effect_timer;
    /* 0x3E4 */ short proc_timer;
    /* 0x3E6 */ unsigned short old_message_no;
    /* 0x3E8 */ unsigned char break_bit;
    /* 0x3E9 */ unsigned char joint_eff_type;
}; /* size = 0x03EC */

#endif /* __Z64OVL_Z_EN_HINT_SKB__ */
