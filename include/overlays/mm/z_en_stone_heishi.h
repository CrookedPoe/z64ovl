#ifndef __Z64OVL_Z_EN_STONE_HEISHI__
#define __Z64OVL_Z_EN_STONE_HEISHI__

#define Z_EN_STONE_HEISHI_ACTOR_NUMBER     0x024A
#define Z_EN_STONE_HEISHI_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_STONE_HEISHI_OBJECT_NUMBER    0x01B6
#define Z_EN_STONE_HEISHI_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_INVISIBLE)

typedef struct z_en_stone_heishi_s z_en_stone_heishi_t;
struct z_en_stone_heishi_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[17];
    /* 0x1EE */ s_xyz joint2[17];
    /* 0x254 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x258 */ s_xyz neck_angle;
    /* 0x25E */ s_xyz neck_max_angle;
    /* 0x264 */ int c_change_flag;
    /* 0x268 */ short wait_timer;
    /* 0x26A */ short drink_stat_mode;
    /* 0x26C */ float end_frame;
    /* 0x270 */ short stat_mode;
    /* 0x272 */ short talk_count;
    /* 0x274 */ short unadare_flag;
    /* 0x276 */ u8 drink_me_flag;
    /* 0x277 */ u8 drink_blue_flag;
    /* 0x278 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x02C4 */

#endif /* __Z64OVL_Z_EN_STONE_HEISHI__ */
