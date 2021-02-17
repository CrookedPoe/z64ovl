#ifndef __Z64OVL_Z_EN_RAIL_SKB__
#define __Z64OVL_Z_EN_RAIL_SKB__

#define Z_EN_RAIL_SKB_ACTOR_NUMBER     0x0212
#define Z_EN_RAIL_SKB_ACTOR_CATEGORY   ACTORCAT_ENEMY
#define Z_EN_RAIL_SKB_OBJECT_NUMBER    0x0142
#define Z_EN_RAIL_SKB_FLAGS            (ACTORFLAG_FIGHT | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_rail_skb_s z_en_rail_skb_t;
struct z_en_rail_skb_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjJntSph sph_info;
    /* 0x164 */ ClObjJntSphElem sph_elem[2];
    /* 0x1E4 */ SKELETON_INFO skeleton;
    /* 0x228 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x22C */ ACTOR* tombx;
    /* 0x230 */ s_xyz* path_ptr;
    /* 0x234 */ xyz_t joint_pos[14];
    /* 0x2DC */ int joint_count;
    /* 0x2E0 */ int path_no;
    /* 0x2E4 */ int revival_path_no;
    /* 0x2E8 */ int path_max;
    /* 0x2EC */ float effect_alpha;
    /* 0x2F0 */ float effect_scale;
    /* 0x2F4 */ s_xyz joint1[20];
    /* 0x36C */ s_xyz joint2[20];
    /* 0x3E4 */ s_xyz neck_angle;
    /* 0x3EA */ s_xyz body_angle;
    /* 0x3F0 */ short effect_timer;
    /* 0x3F2 */ short proc_timer;
    /* 0x3F4 */ short move_flag_now;
    /* 0x3F6 */ short move_flag_buff;
    /* 0x3F8 */ short ever_talk_flag;
    /* 0x3FA */ short talking_flag;
    /* 0x3FC */ short haka_break_flag;
    /* 0x3FE */ short talk_check_flag;
    /* 0x400 */ unsigned short old_message_no;
    /* 0x402 */ unsigned char break_bit;
    /* 0x403 */ unsigned char joint_eff_type;
}; /* size = 0x0404 */

#endif /* __Z64OVL_Z_EN_RAIL_SKB__ */
