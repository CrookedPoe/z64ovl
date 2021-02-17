#ifndef __Z64OVL_Z_EN_HEISHI1__
#define __Z64OVL_Z_EN_HEISHI1__

#define Z_EN_HEISHI1_ACTOR_NUMBER     0x0000
#define Z_EN_HEISHI1_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_HEISHI1_OBJECT_NUMBER    0x0097
#define Z_EN_HEISHI1_FLAGS            (ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_heishi1_s z_en_heishi1_t;
struct z_en_heishi1_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[17];
    /* 0x1E6 */ s_xyz joint2[17];
    /* 0x24C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x250 */ short part_cont;
    /* 0x252 */ short neck_cont;
    /* 0x254 */ short neck_stat;
    /* 0x256 */ short find_frag;
    /* 0x258 */ short retry_frag;
    /* 0x25A */ short type_index;
    /* 0x25C */ short rell_index;
    /* 0x25E */ short random_only_point;
    /* 0x260 */ short no_check_timer;
    /* 0x264 */ float move_speed;
    /* 0x268 */ float turn_speed;
    /* 0x26C */ float head_angle_Y;
    /* 0x270 */ float head_angle_maxY;
    /* 0x274 */ float speed_data[8];
    /* 0x294 */ short timer[3];
    /* 0x29A */ short path_point;
}; /* size = 0x02AC */

#endif /* __Z64OVL_Z_EN_HEISHI1__ */
