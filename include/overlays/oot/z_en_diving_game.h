#ifndef __Z64OVL_Z_EN_DIVING_GAME__
#define __Z64OVL_Z_EN_DIVING_GAME__

#define Z_EN_DIVING_GAME_ACTOR_NUMBER     0x0124
#define Z_EN_DIVING_GAME_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_DIVING_GAME_OBJECT_NUMBER    0x00FE
#define Z_EN_DIVING_GAME_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_diving_game_s z_en_diving_game_t;
struct z_en_diving_game_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[20];
    /* 0x1F8 */ s_xyz joint2[20];
    /* 0x270 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x274 */ s_xyz neck_angle;
    /* 0x27A */ s_xyz body_angle;
    /* 0x280 */ short parts_cont;
    /* 0x282 */ short message_end_code;
    /* 0x284 */ short wait_timer;
    /* 0x286 */ short camera_stat_timer;
    /* 0x288 */ short eye_timer;
    /* 0x28A */ short ruppy_drop_timer;
    /* 0x28C */ short next_frag;
    /* 0x28E */ short eye_cont;
    /* 0x290 */ short camera_no;
    /* 0x292 */ short camera_stat;
    /* 0x294 */ short get_ruppy_count;
    /* 0x296 */ short work_cont;
    /* 0x298 */ short next_jump_stat;
    /* 0x29A */ short continue_cont;
    /* 0x29C */ xyz_t pos;
    /* 0x2A8 */ xyz_t way;
    /* 0x2B4 */ xyz_t eye;
    /* 0x2C0 */ xyz_t eye_target;
    /* 0x2CC */ xyz_t eye_target_ad;
    /* 0x2D8 */ xyz_t eye_spd;
    /* 0x2E4 */ xyz_t way_target;
    /* 0x2F0 */ xyz_t way_target_ad;
    /* 0x2FC */ xyz_t way_spd;
    /* 0x308 */ float camera_morf;
    /* 0x30C */ u8 demo_count;
    /* 0x30D */ u8 anime_frag;
    /* 0x30E */ u8 ruppy_frag;
    /* 0x30F */ u8 dead_frag;
    /* 0x310 */ signed char change_bank_ID;
    /* 0x314 */ NpcBasicAct npcbasic;
    /* 0x33C */ ClObjPipe acoc_pipe_info;
}; /* size = 0x0398 */

#endif /* __Z64OVL_Z_EN_DIVING_GAME__ */
