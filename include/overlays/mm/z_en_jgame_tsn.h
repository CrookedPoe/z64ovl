#ifndef __Z64OVL_Z_EN_JGAME_TSN__
#define __Z64OVL_Z_EN_JGAME_TSN__

#define Z_EN_JGAME_TSN_ACTOR_NUMBER     0x0292
#define Z_EN_JGAME_TSN_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_JGAME_TSN_OBJECT_NUMBER    0x01A9
#define Z_EN_JGAME_TSN_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE | ACTORFLAG_OKARINA_NO_STOP)

typedef struct z_en_jgame_tsn_s z_en_jgame_tsn_t;
struct z_en_jgame_tsn_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x1D8 */ Area_Check game_area[4];
    /* 0x1F8 */ Area_Check start_area;
    /* 0x200 */ Area_Check end_area;
    /* 0x208 */ unchar* light_sw[4];
    /* 0x218 */ int light_no;
    /* 0x21C */ int eye_indx;
    /* 0x220 */ s_xyz joint1[17];
    /* 0x286 */ s_xyz joint2[17];
    /* 0x2EC */ s_xyz neck_angle;
    /* 0x2F2 */ s_xyz body_angle;
    /* 0x2F8 */ short talk_flag;
    /* 0x2FA */ short eye_timer;
    /* 0x2FC */ short proc_timer;
    /* 0x2FE */ short start_ground_flag;
    /* 0x300 */ unshort old_message_no;
}; /* size = 0x0304 */

#endif /* __Z64OVL_Z_EN_JGAME_TSN__ */
