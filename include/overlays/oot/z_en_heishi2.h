#ifndef __Z64OVL_Z_EN_HEISHI2__
#define __Z64OVL_Z_EN_HEISHI2__

#define Z_EN_HEISHI2_ACTOR_NUMBER     0x00B3
#define Z_EN_HEISHI2_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_HEISHI2_OBJECT_NUMBER    0x0097
#define Z_EN_HEISHI2_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_heishi2_s z_en_heishi2_t;
struct z_en_heishi2_s {
    /* 0x0 */ ACTOR actor;
    /* 0x13C */ SKELETON_INFO skeleton;
    /* 0x180 */ s_xyz joint1[17];
    /* 0x1E6 */ s_xyz joint2[17];
    /* 0x24C */ void (*process)(/* ECOFF does not store param types */);
    /* 0x250 */ s_xyz neck_angle;
    /* 0x256 */ s_xyz neck_max_angle;
    /* 0x25C */ s_xyz body_angle;
    /* 0x264 */ xyz_t pos;
    /* 0x270 */ xyz_t way;
    /* 0x27C */ xyz_t eye;
    /* 0x288 */ xyz_t eye_target;
    /* 0x294 */ xyz_t eye_target_ad;
    /* 0x2A0 */ xyz_t eye_spd;
    /* 0x2AC */ xyz_t way_target;
    /* 0x2B8 */ xyz_t way_target_ad;
    /* 0x2C4 */ xyz_t way_spd;
    /* 0x2D0 */ float eye_pos;
    /* 0x2D4 */ float move_speed;
    /* 0x2D8 */ float angle_speed;
    /* 0x2DC */ float ende_frame;
    /* 0x2E0 */ short chrno;
    /* 0x2E2 */ short timer[5];
    /* 0x2EC */ short parts_time;
    /* 0x2EE */ short index;
    /* 0x2F0 */ short message_end_code;
    /* 0x2F4 */ int talk_flag;
    /* 0x2F8 */ u8 sound_frag;
    /* 0x2F9 */ u8 once_frag;
    /* 0x2FA */ u8 mask_frag;
    /* 0x2FB */ u8 mask_message_frag;
    /* 0x2FC */ u8 minnaniwa_frag;
    /* 0x2FE */ short next_frag;
    /* 0x300 */ short camera_no;
    /* 0x304 */ ACTOR* check_actor;
    /* 0x308 */ xyz_t way_bak;
    /* 0x314 */ xyz_t eye_bak;
    /* 0x320 */ MtxF mtxF;
    /* 0x360 */ NpcBasicAct npcbasic;
    /* 0x388 */ ClObjPipe acoc_pipe_info;
}; /* size = 0x03E4 */

#endif /* __Z64OVL_Z_EN_HEISHI2__ */
